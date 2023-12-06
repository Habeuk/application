Array
(
    [actions] => Array
        (
            [#type] => actions
            [submit] => Array
                (
                    [#type] => submit
                    [#value] => Enregistrer
                )

        )

    [link_title] => Array
        (
            [#type] => textfield
            [#title] => Titre du lien dans le menu
            [#maxlength] => 255
            [#default_value] => Taxes
            [#description] => Le texte à utiliser pour ce lien dans le menu.
            [#required] => 1
        )

    [link_path] => Array
        (
            [#type] => value
            [#value] => liste-des-taxes
        )

    [mlid] => Array
        (
            [#type] => value
            [#value] => 850
        )

    [module] => Array
        (
            [#type] => value
            [#value] => system
        )

    [has_children] => Array
        (
            [#type] => value
            [#value] => 0
        )

    [options] => Array
        (
            [#type] => value
            [#value] => Array
                (
                    [attributes] => Array
                        (
                            [title] => 
                        )

                    [content] => Array
                        (
                            [image] => 74
                        )

                )

        )

    [customized] => Array
        (
            [#type] => value
            [#value] => 1
        )

    [original_item] => Array
        (
            [#type] => value
            [#value] => Array
                (
                    [menu_name] => main-menu
                    [mlid] => 850
                    [plid] => 0
                    [link_path] => liste-des-taxes
                    [router_path] => liste-des-taxes
                    [link_title] => Taxes
                    [options] => Array
                        (
                            [attributes] => Array
                                (
                                    [title] => 
                                )

                            [content] => Array
                                (
                                    [image] => 74
                                )

                        )

                    [module] => system
                    [hidden] => 0
                    [external] => 0
                    [has_children] => 0
                    [expanded] => 0
                    [weight] => -49
                    [depth] => 1
                    [customized] => 1
                    [p1] => 850
                    [p2] => 0
                    [p3] => 0
                    [p4] => 0
                    [p5] => 0
                    [p6] => 0
                    [p7] => 0
                    [p8] => 0
                    [p9] => 0
                    [updated] => 0
                    [path] => liste-des-taxes
                    [load_functions] => 
                    [to_arg_functions] => 
                    [access_callback] => views_access
                    [access_arguments] => a:1:{i:0;a:2:{i:0;s:16:"views_check_perm";i:1;a:1:{i:0;s:14:"access content";}}}
                    [page_callback] => views_page
                    [page_arguments] => a:2:{i:0;s:15:"liste_des_taxes";i:1;s:4:"page";}
                    [delivery_callback] => 
                    [fit] => 1
                    [number_parts] => 1
                    [context] => 0
                    [tab_parent] => 
                    [tab_root] => liste-des-taxes
                    [title] => Taxes
                    [title_callback] => t
                    [title_arguments] => 
                    [theme_callback] => 
                    [theme_arguments] => a:0:{}
                    [type] => 6
                    [description] => 
                    [position] => 
                    [include_file] => 
                    [link_weight] => -49
                    [href] => liste-des-taxes
                    [access] => 1
                    [localized_options] => Array
                        (
                            [attributes] => Array
                                (
                                    [title] => 
                                )

                            [content] => Array
                                (
                                    [image] => 74
                                )

                        )

                )

        )

    [_path] => Array
        (
            [#type] => item
            [#title] => Chemin
            [#description] => <a href="/liste-des-taxes" title="">Taxes</a>
        )

    [description] => Array
        (
            [#type] => textarea
            [#title] => Description
            [#default_value] => 
            [#rows] => 1
            [#description] => S'affiche au survol du lien du menu.
        )

    [enabled] => Array
        (
            [#type] => checkbox
            [#title] => Activé
            [#default_value] => 1
            [#description] => Les liens de menu qui ne sont pas activés ne seront pas listés dans les menus.
        )

    [expanded] => Array
        (
            [#type] => checkbox
            [#title] => Afficher déplié
            [#default_value] => 0
            [#description] => S'il est sélectionné et qu'il a des enfants, ce menu apparaitra toujours déplié.
        )

    [parent] => Array
        (
            [#type] => select
            [#title] => Lien parent
            [#default_value] => main-menu:0
            [#options] => Array
                (
                    [menu-gestion-des-param-tres:0] => <Gestion des Paramètres>
                    [menu-gestion-des-param-tres:933] => -- Ajouter
                    [menu-gestion-des-param-tres:605] => ---- Agence perceptrice
                    [menu-gestion-des-param-tres:602] => ---- Industrie extractive
                    [menu-gestion-des-param-tres:927] => ---- Ajouter un type de redevance
                    [menu-gestion-des-param-tres:924] => ---- Ajouter un domaine d'activités
                    [menu-gestion-des-param-tres:925] => ---- Ajouter une substance
                    [menu-gestion-des-param-tres:926] => ---- Ajouter un type permis
                    [menu-gestion-des-param-tres:917] => ---- Permis
                    [menu-gestion-des-param-tres:928] => ---- Ajouter une localité
                    [menu-gestion-des-param-tres:934] => -- Consulter
                    [menu-gestion-des-param-tres:911] => ---- Les domaines d'activités
                    [menu-gestion-des-param-tres:912] => ---- Les substances
                    [menu-gestion-des-param-tres:930] => ---- Les types de redevance
                    [menu-gestion-des-param-tres:931] => ---- Les types de permis
                    [menu-gestion-des-param-tres:932] => ---- Les localités
                    [menu-gestion-des-param-tres:311] => -- Contenu récent
                    [menu-gestion-des-param-tres:919] => -- Reglement de redevance (désactivé)
                    [menu-gestion-des-redevances:0] => <Gestion des Redevances>
                    [menu-gestion-des-redevances:921] => -- Liste règlement redevance
                    [menu-gestion-des-redevances:922] => ---- Liste groupée
                    [menu-gestion-des-redevances:929] => -- Ajouter un règlement
                    [menu-gestion-des-redevances:725] => -- Ajouter une redevance
                    [menu-gestion-des-redevances:935] => -- Recherche
                    [menu-gestion-des-redevances:730] => -- Télecharger (désactivé)
                    [menu-gestion-des-redevances:727] => -- Analyser (désactivé)
                    [menu-gestion-des-redevances:726] => -- Résultats (désactivé)
                    [menu-gestion-des-redevances:728] => -- Tableau de bord (désactivé)
                    [menu-gestion-des-redevances:729] => -- Télecharger (désactivé)
                    [management:0] => <Management>
                    [management:1] => -- Administration
                    [management:496] => ---- My Workbench
                    [management:11] => ---- Tableau de bord
                    [management:9] => ---- Contenu
                    [management:32] => ------ Commentaires
                    [management:983] => ------ Média
                    [management:21] => ---- Structure
                    [management:30] => ------ Blocs
                    [management:497] => ------ Bulk Exporter
                    [management:498] => ------ Custom access rulesets
                    [management:499] => ------ Custom content panes
                    [management:328] => ------ Déclencheurs
                    [management:319] => ------ Formulaire de contact
                    [management:47] => ------ Menus
                    [management:923] => -------- Gestion des Paramètres
                    [management:610] => -------- Gestion des Redevances
                    [management:183] => -------- Main menu
                    [management:184] => -------- Management
                    [management:185] => -------- Navigation
                    [management:186] => -------- User menu
                    [management:500] => ------ Pages
                    [management:501] => ------ Stylizer
                    [management:57] => ------ Taxonomie
                    [management:36] => ------ Types de contenu
                    [management:507] => ------ Views
                    [management:7] => ---- Apparence
                    [management:18] => ---- Personnes
                    [management:16] => ---- Modules
                    [management:8] => ---- Configuration
                    [management:48] => ------ Personnes
                    [management:90] => -------- Paramètres de compte
                    [management:104] => -------- Blocage d'adresses IP
                    [management:56] => ------ Système
                    [management:121] => -------- Informations
                    [management:347] => -------- Statistiques
                    [management:91] => -------- Actions
                    [management:942] => -------- Backup and Migrate
                    [management:524] => -------- Boost
                    [management:713] => -------- Variables
                    [management:98] => -------- Tâche planifiée (cron)
                    [management:61] => ------ Interface utilisateur
                    [management:908] => -------- Module filter
                    [management:201] => -------- Raccourcis
                    [management:546] => -------- Superfish
                    [management:35] => ------ Rédaction de contenu
                    [management:123] => -------- Formats de texte
                    [management:630] => -------- Mollom content moderation
                    [management:712] => -------- Webform Template settings
                    [management:549] => -------- Webform settings
                    [management:797] => -------- Wysiwyg profiles
                    [management:593] => ------ Date API
                    [management:597] => -------- Calendar
                    [management:598] => -------- Date Popup
                    [management:599] => -------- Date Tools
                    [management:39] => ------ Développement
                    [management:113] => -------- Performance
                    [management:111] => -------- Journalisation et erreurs
                    [management:112] => -------- Mode maintenance
                    [management:350] => -------- Test
                    [management:1816] => -------- jQuery update
                    [management:46] => ------ Média
                    [management:101] => -------- Système de fichiers
                    [management:627] => -------- File types
                    [management:945] => -------- IMCE
                    [management:629] => -------- Media browser settings
                    [management:985] => -------- Rebuild type information for
                    [management:105] => -------- Styles d'images
                    [management:106] => -------- Boîte à outils image
                    [management:53] => ------ Recherche et metadonnées
                    [management:200] => -------- Paramètres de recherche
                    [management:742] => -------- Apache Solr search
                    [management:202] => -------- Alias d'URL
                    [management:760] => -------- Current search blocks
                    [management:761] => -------- Search API
                    [management:97] => -------- URL simplifiées
                    [management:51] => ------ Régionalisation et langue
                    [management:117] => -------- Paramètres régionaux
                    [management:99] => -------- Date et heure
                    [management:342] => -------- Langues
                    [management:353] => -------- Traduire l'interface
                    [management:503] => ------ Administration
                    [management:936] => -------- Adminimal menu
                    [management:523] => -------- Administration menu
                    [management:937] => ------ Arrange fields
                    [management:668] => ------ Messaging & Notifications
                    [management:688] => -------- Messaging settings
                    [management:689] => -------- Notifications settings
                    [management:690] => -------- Send methods
                    [management:691] => -------- Subscriptions settings
                    [management:64] => ------ Services Web
                    [management:970] => -------- Geolocation Google Maps
                    [management:860] => -------- Newsletters
                    [management:116] => -------- Publication RSS
                    [management:512] => ------ Workbench
                    [management:65] => ------ Processus
                    [management:861] => -------- Rules
                    [management:665] => ---- Subscriptions
                    [management:19] => ---- Rapports
                    [management:55] => ------ Tableau de bord d
                    [management:260] => ------ Mises à jour disponibles
                    [management:50] => ------ Entrées récentes du journal
                    [management:321] => ------ Accès récents
                    [management:740] => ------ Apache Solr search index
                    [management:722] => ------ Check System Variables
                    [management:829] => ------ Feeds log
                    [management:1180] => ------ Libraries
                    [management:42] => ------ Liste des champs
                    [management:192] => ------ Phrases les plus recherchées
                    [management:58] => ------ Principales erreurs de type «
                    [management:59] => ------ Principales erreurs de type «
                    [management:323] => ------ Top des référents
                    [management:509] => ------ Views plugins
                    [management:322] => ------ Top des pages
                    [management:324] => ------ Top des visiteurs
                    [management:12] => ---- Aide
                    [main-menu:0] => <Menu principal>
                    [main-menu:608] => -- Accueil
                    [main-menu:613] => -- Rapports
                    [main-menu:609] => -- Redevances
                    [main-menu:604] => -- Les Industries Extractives
                    [main-menu:607] => -- Agences Perceptrices
                    [main-menu:801] => -- Contact (désactivé)
                    [main-menu:965] => -- Plan
                    [navigation:0] => <Navigation>
                    [navigation:666] => -- Add subscription (désactivé)
                    [navigation:682] => ---- Type de contenu
                    [navigation:6] => -- Ajouter du contenu
                    [navigation:802] => ---- Taxe (désactivé)
                    [navigation:611] => ---- Rapport des consultants
                    [navigation:315] => ---- Publications (désactivé)
                    [navigation:220] => ---- Basic page (désactivé)
                    [navigation:219] => ---- Article (désactivé)
                    [navigation:913] => ---- Redevance
                    [navigation:854] => ---- Simplenews newsletter
                    [navigation:4] => -- Astuces de rédaction (désactivé)
                    [navigation:308] => -- Blogs (désactivé)
                    [navigation:313] => ---- Mon blog
                    [navigation:310] => -- Contact (désactivé)
                    [navigation:818] => -- Importer
                    [navigation:309] => -- Livres (désactivé)
                    [navigation:187] => -- Rechercher (désactivé)
                    [user-menu:0] => <User menu>
                    [user-menu:2] => -- Mon compte
                    [user-menu:15] => -- Se déconnecter
                )

            [#description] => La profondeur maximum pour un lien et tout ses enfants est fixée à  9. Certains liens de menu peuvent ne pas être utilisables comme parents si la limite est dépassée lorsqu'on les sélectionne.
            [#attributes] => Array
                (
                    [class] => Array
                        (
                            [0] => menu-title-select
                        )

                )

        )

    [weight] => Array
        (
            [#type] => weight
            [#title] => Poids
            [#delta] => 50
            [#default_value] => -49
            [#description] => Optionnel. Dans ce menu, les liens les plus lourds descendent et les plus légers montent vers le haut.
        )

    [#form_id] => menu_edit_item
    [#type] => form
    [#build_id] => form-HH89OSjUDviw9mgu1YFKNbWi699rCbU3Ubl38CXj1hU
    [form_build_id] => Array
        (
            [#type] => hidden
            [#value] => form-HH89OSjUDviw9mgu1YFKNbWi699rCbU3Ubl38CXj1hU
            [#id] => form-HH89OSjUDviw9mgu1YFKNbWi699rCbU3Ubl38CXj1hU
            [#name] => form_build_id
            [#parents] => Array
                (
                    [0] => form_build_id
                )

        )

    [#token] => menu_edit_item
    [form_token] => Array
        (
            [#id] => edit-menu-edit-item-form-token
            [#type] => token
            [#default_value] => ztXO-yC5svnQ_zwWG0TcPw9xjXU68VHIDEFrTcnX3n8
            [#parents] => Array
                (
                    [0] => form_token
                )

        )

    [form_id] => Array
        (
            [#type] => hidden
            [#value] => menu_edit_item
            [#id] => edit-menu-edit-item
            [#parents] => Array
                (
                    [0] => form_id
                )

        )

    [#id] => menu-edit-item
    [#method] => post
    [#action] => /admin/structure/menu/item/850/edit
    [#theme_wrappers] => Array
        (
            [0] => form
        )

    [#tree] => 
    [#parents] => Array
        (
        )

    [#validate] => Array
        (
            [0] => menu_edit_item_validate
        )

    [#submit] => Array
        (
            [0] => menu_edit_item_submit
        )

    [#theme] => Array
        (
            [0] => menu_edit_item
        )

)
