<?php

namespace Drupal\application\Twig;

use Twig\Extension\AbstractExtension;
use Twig\TwigFunction;

class RenderMenuExtension extends AbstractExtension
{
    /**
     * {@inheritdoc}
     */
    public function getName()
    {
        return 'application';
    }

    /**
     * @return array
     */
    public function getFunctions()
    {
        return [
            new TwigFunction('renderMenu', [$this, 'renderMenu'])
        ];
    }

    /**
     * Provides function to programmatically rendering a menu
     *
     * @param String $menu_name
     *   The machine configuration id of the menu to render
     */
    public function renderMenu(string $menu_name)
    {
        $menu_tree = \Drupal::menuTree();

        // Build the typical default set of menu tree parameters.
        $parameters = $menu_tree->getCurrentRouteMenuTreeParameters($menu_name);

        // Load the tree based on this set of parameters.
        $tree = $menu_tree->load($menu_name, $parameters);

        // Transform the tree using the manipulators you want.
        $manipulators = array(
            // Only show links that are accessible for the current user.
            array('callable' => 'menu.default_tree_manipulators:checkAccess'),
            // Use the default sorting of menu links.
            array('callable' => 'menu.default_tree_manipulators:generateIndexAndSort'),
        );
        $tree = $menu_tree->transform($tree, $manipulators);

        // Finally, build a renderable array from the transformed tree.
        $menu = $menu_tree->build($tree);

        $menu['#attributes']['class'] = 'menu ' . $menu_name;

        return ['#markup' => \Drupal::service('renderer')->render($menu)];
    }
}
