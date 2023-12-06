Array
(
    [#type] => container
    [#weight] => 0
    [name] => Array
        (
            [#type] => textfield
            [#title] => Nom d'utilisateur
            [#maxlength] => 60
            [#description] => Les espaces sont autorisés ; la ponctuation n'est pas autorisée à l'exception des points, traits d'union, apostrophes et tirets bas.
            [#required] => 1
            [#attributes] => Array
                (
                    [class] => Array
                        (
                            [0] => username
                        )

                )

            [#default_value] => 
            [#access] => 1
            [#weight] => -10
            [#input] => 1
            [#size] => 60
            [#autocomplete_path] => 
            [#process] => Array
                (
                    [0] => form_process_autocomplete
                    [1] => ajax_process_form
                    [2] => bootstrap_form_process
                )

            [#theme] => textfield
            [#theme_wrappers] => Array
                (
                    [0] => form_element
                )

            [#pre_render] => Array
                (
                    [0] => ctools_dependent_pre_render
                    [1] => bootstrap_pre_render
                )

            [#icon] => 
            [#icon_position] => before
            [#defaults_loaded] => 1
            [#tree] => 
            [#parents] => Array
                (
                    [0] => name
                )

            [#array_parents] => Array
                (
                    [0] => account
                    [1] => name
                )

            [#processed] => 1
            [#title_display] => before
            [#id] => edit-name
            [#name] => name
            [#value] => 
            [#autocomplete_input] => Array
                (
                )

            [#ajax_processed] => 
            [#sorted] => 1
        )

    [mail] => Array
        (
            [#type] => textfield
            [#title] => Adresse de courriel
            [#maxlength] => 254
            [#description] => Une adresse électronique valide. Le système enverra tous les courriels à cette adresse. L'adresse électronique ne sera pas rendue publique et ne sera utilisée que pour la réception d'un nouveau mot de passe ou pour la réception de certaines notifications désirées.
            [#required] => 1
            [#default_value] => 
            [#input] => 1
            [#size] => 60
            [#autocomplete_path] => 
            [#process] => Array
                (
                    [0] => form_process_autocomplete
                    [1] => ajax_process_form
                    [2] => bootstrap_form_process
                )

            [#theme] => textfield
            [#theme_wrappers] => Array
                (
                    [0] => form_element
                )

            [#pre_render] => Array
                (
                    [0] => ctools_dependent_pre_render
                    [1] => bootstrap_pre_render
                )

            [#icon] => 
            [#icon_position] => before
            [#defaults_loaded] => 1
            [#tree] => 
            [#parents] => Array
                (
                    [0] => mail
                )

            [#array_parents] => Array
                (
                    [0] => account
                    [1] => mail
                )

            [#weight] => 0.001
            [#processed] => 1
            [#attributes] => Array
                (
                )

            [#title_display] => before
            [#id] => edit-mail
            [#name] => mail
            [#value] => 
            [#autocomplete_input] => Array
                (
                )

            [#ajax_processed] => 
            [#sorted] => 1
        )

    [pass] => Array
        (
            [#type] => password_confirm
            [#size] => 25
            [#description] => Saisissez un mot de passe pour le nouveau compte dans les deux champs.
            [#required] => 1
            [#input] => 1
            [#process] => Array
                (
                    [0] => form_process_password_confirm
                    [1] => user_form_process_password_confirm
                    [2] => bootstrap_form_process
                )

            [#theme_wrappers] => Array
                (
                    [0] => form_element
                )

            [#icon] => 
            [#icon_position] => before
            [#pre_render] => Array
                (
                    [0] => bootstrap_pre_render
                )

            [#defaults_loaded] => 1
            [#tree] => 1
            [#parents] => Array
                (
                    [0] => pass
                )

            [#array_parents] => Array
                (
                    [0] => account
                    [1] => pass
                )

            [#weight] => 0.002
            [#processed] => 1
            [#attributes] => Array
                (
                )

            [#title_display] => before
            [#id] => edit-pass
            [#name] => pass
            [#value] => Array
                (
                    [pass1] => 
                    [pass2] => 
                )

            [pass1] => Array
                (
                    [#type] => password
                    [#title] => Mot de passe
                    [#value] => 
                    [#required] => 1
                    [#attributes] => Array
                        (
                            [class] => Array
                                (
                                    [0] => password-field
                                )

                        )

                    [#size] => 25
                    [#input] => 1
                    [#maxlength] => 128
                    [#process] => Array
                        (
                            [0] => ajax_process_form
                            [1] => bootstrap_form_process
                        )

                    [#theme] => password
                    [#theme_wrappers] => Array
                        (
                            [0] => form_element
                        )

                    [#value_callback] => form_type_textfield_value
                    [#icon] => 
                    [#icon_position] => before
                    [#pre_render] => Array
                        (
                            [0] => bootstrap_pre_render
                        )

                    [#defaults_loaded] => 1
                    [#tree] => 1
                    [#parents] => Array
                        (
                            [0] => pass
                            [1] => pass1
                        )

                    [#array_parents] => Array
                        (
                            [0] => account
                            [1] => pass
                            [2] => pass1
                        )

                    [#weight] => 0
                    [#processed] => 1
                    [#title_display] => before
                    [#id] => edit-pass-pass1
                    [#name] => pass[pass1]
                    [#ajax_processed] => 
                    [#sorted] => 1
                )

            [pass2] => Array
                (
                    [#type] => password
                    [#title] => Confirmer le mot de passe
                    [#value] => 
                    [#required] => 1
                    [#attributes] => Array
                        (
                            [class] => Array
                                (
                                    [0] => password-confirm
                                )

                        )

                    [#size] => 25
                    [#input] => 1
                    [#maxlength] => 128
                    [#process] => Array
                        (
                            [0] => ajax_process_form
                            [1] => bootstrap_form_process
                        )

                    [#theme] => password
                    [#theme_wrappers] => Array
                        (
                            [0] => form_element
                        )

                    [#value_callback] => form_type_textfield_value
                    [#icon] => 
                    [#icon_position] => before
                    [#pre_render] => Array
                        (
                            [0] => bootstrap_pre_render
                        )

                    [#defaults_loaded] => 1
                    [#tree] => 1
                    [#parents] => Array
                        (
                            [0] => pass
                            [1] => pass2
                        )

                    [#array_parents] => Array
                        (
                            [0] => account
                            [1] => pass
                            [2] => pass2
                        )

                    [#weight] => 0.001
                    [#processed] => 1
                    [#title_display] => before
                    [#id] => edit-pass-pass2
                    [#name] => pass[pass2]
                    [#ajax_processed] => 
                    [#sorted] => 1
                )

            [#element_validate] => Array
                (
                    [0] => password_confirm_validate
                )

            [#attached] => Array
                (
                    [js] => Array
                        (
                            [0] => modules/user/user.js
                            [1] => Array
                                (
                                    [data] => Array
                                        (
                                            [password] => Array
                                                (
                                                    [strengthTitle] => Sécurité du mot de passe :
                                                    [hasWeaknesses] => Pour renforcer la sécurité de votre mot de passe :
                                                    [tooShort] => Saisissez au moins 6 caractères
                                                    [addLowerCase] => Ajoutez des lettres minuscules
                                                    [addUpperCase] => Ajoutez des lettres majuscules
                                                    [addNumbers] => Ajoutez des chiffres
                                                    [addPunctuation] => Ajoutez des caractères de ponctuation
                                                    [sameAsUsername] => Le mot de passe doit être différent du nom d'utilisateur
                                                    [confirmSuccess] => oui
                                                    [confirmFailure] => non
                                                    [weak] => Faible
                                                    [fair] => Correct
                                                    [good] => Bien
                                                    [strong] => Fort
                                                    [confirmTitle] => Concordance des mots de passe :
                                                    [username] => 
                                                )

                                        )

                                    [type] => setting
                                )

                        )

                )

            [#sorted] => 1
        )

    [status] => Array
        (
            [#type] => radios
            [#title] => Statut
            [#default_value] => 1
            [#options] => Array
                (
                    [0] => Bloqué
                    [1] => Actif
                )

            [#access] => 
            [#input] => 1
            [#process] => Array
                (
                    [0] => form_process_radios
                    [1] => bootstrap_form_process
                )

            [#theme_wrappers] => Array
                (
                    [0] => radios
                )

            [#pre_render] => Array
                (
                    [0] => form_pre_render_conditional_form_element
                    [1] => ctools_dependent_pre_render
                    [2] => bootstrap_pre_render
                )

            [#icon] => 
            [#icon_position] => before
            [#defaults_loaded] => 1
            [#tree] => 
            [#parents] => Array
                (
                    [0] => status
                )

            [#array_parents] => Array
                (
                    [0] => account
                    [1] => status
                )

            [#weight] => 0.003
            [#processed] => 1
            [#required] => 
            [#attributes] => Array
                (
                )

            [#title_display] => before
            [#id] => edit-status
            [#name] => status
            [#value] => 1
            [0] => Array
                (
                    [#type] => radio
                    [#title] => Bloqué
                    [#return_value] => 0
                    [#default_value] => 1
                    [#attributes] => Array
                        (
                        )

                    [#parents] => Array
                        (
                            [0] => status
                        )

                    [#id] => edit-status-0
                    [#ajax] => 
                    [#weight] => 0.001
                    [#input] => 1
                    [#process] => Array
                        (
                            [0] => ajax_process_form
                            [1] => bootstrap_form_process
                        )

                    [#theme] => radio
                    [#theme_wrappers] => Array
                        (
                            [0] => form_element
                        )

                    [#title_display] => after
                    [#pre_render] => Array
                        (
                            [0] => ctools_dependent_pre_render
                            [1] => bootstrap_pre_render
                        )

                    [#icon] => 
                    [#icon_position] => before
                    [#defaults_loaded] => 1
                    [#tree] => 
                    [#access] => 
                    [#array_parents] => Array
                        (
                            [0] => account
                            [1] => status
                            [2] => 0
                        )

                    [#processed] => 1
                    [#required] => 
                    [#name] => status
                    [#value] => 1
                    [#ajax_processed] => 
                    [#sorted] => 1
                )

            [1] => Array
                (
                    [#type] => radio
                    [#title] => Actif
                    [#return_value] => 1
                    [#default_value] => 1
                    [#attributes] => Array
                        (
                        )

                    [#parents] => Array
                        (
                            [0] => status
                        )

                    [#id] => edit-status-1
                    [#ajax] => 
                    [#weight] => 0.002
                    [#input] => 1
                    [#process] => Array
                        (
                            [0] => ajax_process_form
                            [1] => bootstrap_form_process
                        )

                    [#theme] => radio
                    [#theme_wrappers] => Array
                        (
                            [0] => form_element
                        )

                    [#title_display] => after
                    [#pre_render] => Array
                        (
                            [0] => ctools_dependent_pre_render
                            [1] => bootstrap_pre_render
                        )

                    [#icon] => 
                    [#icon_position] => before
                    [#defaults_loaded] => 1
                    [#tree] => 
                    [#access] => 
                    [#array_parents] => Array
                        (
                            [0] => account
                            [1] => status
                            [2] => 1
                        )

                    [#processed] => 1
                    [#required] => 
                    [#name] => status
                    [#value] => 1
                    [#ajax_processed] => 
                    [#sorted] => 1
                )

        )

    [roles] => Array
        (
            [#type] => checkboxes
            [#title] => Rôles
            [#default_value] => Array
                (
                )

            [#options] => Array
                (
                    [3] => administrator
                    [4] => Consultant
                    [5] => Industrie extactrives
                    [6] => Visiteur
                )

            [#access] => 
            [2] => Array
                (
                    [#type] => checkbox
                    [#title] => utilisateur authentifié
                    [#default_value] => 1
                    [#disabled] => 1
                    [#input] => 1
                    [#return_value] => 1
                    [#theme] => checkbox
                    [#process] => Array
                        (
                            [0] => form_process_checkbox
                            [1] => ajax_process_form
                            [2] => bootstrap_form_process
                        )

                    [#theme_wrappers] => Array
                        (
                            [0] => form_element
                        )

                    [#title_display] => after
                    [#pre_render] => Array
                        (
                            [0] => ctools_dependent_pre_render
                            [1] => bootstrap_pre_render
                        )

                    [#icon] => 
                    [#icon_position] => before
                    [#defaults_loaded] => 1
                    [#tree] => 1
                    [#access] => 
                    [#parents] => Array
                        (
                            [0] => roles
                            [1] => 2
                        )

                    [#array_parents] => Array
                        (
                            [0] => account
                            [1] => roles
                            [2] => 2
                        )

                    [#weight] => 0
                    [#processed] => 1
                    [#required] => 
                    [#attributes] => Array
                        (
                            [disabled] => disabled
                        )

                    [#id] => edit-roles-2
                    [#name] => roles[2]
                    [#value] => 1
                    [#checked] => 1
                    [#ajax_processed] => 
                    [#sorted] => 1
                )

            [#input] => 1
            [#process] => Array
                (
                    [0] => form_process_checkboxes
                    [1] => bootstrap_form_process
                )

            [#theme_wrappers] => Array
                (
                    [0] => checkboxes
                )

            [#pre_render] => Array
                (
                    [0] => form_pre_render_conditional_form_element
                    [1] => ctools_dependent_pre_render
                    [2] => bootstrap_pre_render
                )

            [#icon] => 
            [#icon_position] => before
            [#defaults_loaded] => 1
            [#tree] => 1
            [#parents] => Array
                (
                    [0] => roles
                )

            [#array_parents] => Array
                (
                    [0] => account
                    [1] => roles
                )

            [#weight] => 0.004
            [#processed] => 1
            [#required] => 
            [#attributes] => Array
                (
                )

            [#title_display] => before
            [#id] => edit-roles
            [#name] => roles
            [#value] => Array
                (
                )

            [3] => Array
                (
                    [#type] => checkbox
                    [#title] => administrator
                    [#return_value] => 3
                    [#default_value] => 
                    [#attributes] => Array
                        (
                        )

                    [#ajax] => 
                    [#weight] => 0.001
                    [#input] => 1
                    [#theme] => checkbox
                    [#process] => Array
                        (
                            [0] => form_process_checkbox
                            [1] => ajax_process_form
                            [2] => bootstrap_form_process
                        )

                    [#theme_wrappers] => Array
                        (
                            [0] => form_element
                        )

                    [#title_display] => after
                    [#pre_render] => Array
                        (
                            [0] => ctools_dependent_pre_render
                            [1] => bootstrap_pre_render
                        )

                    [#icon] => 
                    [#icon_position] => before
                    [#defaults_loaded] => 1
                    [#tree] => 1
                    [#access] => 
                    [#parents] => Array
                        (
                            [0] => roles
                            [1] => 3
                        )

                    [#array_parents] => Array
                        (
                            [0] => account
                            [1] => roles
                            [2] => 3
                        )

                    [#processed] => 1
                    [#required] => 
                    [#id] => edit-roles-3
                    [#name] => roles[3]
                    [#value] => 0
                    [#checked] => 
                    [#ajax_processed] => 
                    [#sorted] => 1
                )

            [4] => Array
                (
                    [#type] => checkbox
                    [#title] => Consultant
                    [#return_value] => 4
                    [#default_value] => 
                    [#attributes] => Array
                        (
                        )

                    [#ajax] => 
                    [#weight] => 0.002
                    [#input] => 1
                    [#theme] => checkbox
                    [#process] => Array
                        (
                            [0] => form_process_checkbox
                            [1] => ajax_process_form
                            [2] => bootstrap_form_process
                        )

                    [#theme_wrappers] => Array
                        (
                            [0] => form_element
                        )

                    [#title_display] => after
                    [#pre_render] => Array
                        (
                            [0] => ctools_dependent_pre_render
                            [1] => bootstrap_pre_render
                        )

                    [#icon] => 
                    [#icon_position] => before
                    [#defaults_loaded] => 1
                    [#tree] => 1
                    [#access] => 
                    [#parents] => Array
                        (
                            [0] => roles
                            [1] => 4
                        )

                    [#array_parents] => Array
                        (
                            [0] => account
                            [1] => roles
                            [2] => 4
                        )

                    [#processed] => 1
                    [#required] => 
                    [#id] => edit-roles-4
                    [#name] => roles[4]
                    [#value] => 0
                    [#checked] => 
                    [#ajax_processed] => 
                    [#sorted] => 1
                )

            [5] => Array
                (
                    [#type] => checkbox
                    [#title] => Industrie extactrives
                    [#return_value] => 5
                    [#default_value] => 
                    [#attributes] => Array
                        (
                        )

                    [#ajax] => 
                    [#weight] => 0.003
                    [#input] => 1
                    [#theme] => checkbox
                    [#process] => Array
                        (
                            [0] => form_process_checkbox
                            [1] => ajax_process_form
                            [2] => bootstrap_form_process
                        )

                    [#theme_wrappers] => Array
                        (
                            [0] => form_element
                        )

                    [#title_display] => after
                    [#pre_render] => Array
                        (
                            [0] => ctools_dependent_pre_render
                            [1] => bootstrap_pre_render
                        )

                    [#icon] => 
                    [#icon_position] => before
                    [#defaults_loaded] => 1
                    [#tree] => 1
                    [#access] => 
                    [#parents] => Array
                        (
                            [0] => roles
                            [1] => 5
                        )

                    [#array_parents] => Array
                        (
                            [0] => account
                            [1] => roles
                            [2] => 5
                        )

                    [#processed] => 1
                    [#required] => 
                    [#id] => edit-roles-5
                    [#name] => roles[5]
                    [#value] => 0
                    [#checked] => 
                    [#ajax_processed] => 
                    [#sorted] => 1
                )

            [6] => Array
                (
                    [#type] => checkbox
                    [#title] => Visiteur
                    [#return_value] => 6
                    [#default_value] => 
                    [#attributes] => Array
                        (
                        )

                    [#ajax] => 
                    [#weight] => 0.004
                    [#input] => 1
                    [#theme] => checkbox
                    [#process] => Array
                        (
                            [0] => form_process_checkbox
                            [1] => ajax_process_form
                            [2] => bootstrap_form_process
                        )

                    [#theme_wrappers] => Array
                        (
                            [0] => form_element
                        )

                    [#title_display] => after
                    [#pre_render] => Array
                        (
                            [0] => ctools_dependent_pre_render
                            [1] => bootstrap_pre_render
                        )

                    [#icon] => 
                    [#icon_position] => before
                    [#defaults_loaded] => 1
                    [#tree] => 1
                    [#access] => 
                    [#parents] => Array
                        (
                            [0] => roles
                            [1] => 6
                        )

                    [#array_parents] => Array
                        (
                            [0] => account
                            [1] => roles
                            [2] => 6
                        )

                    [#processed] => 1
                    [#required] => 
                    [#id] => edit-roles-6
                    [#name] => roles[6]
                    [#value] => 0
                    [#checked] => 
                    [#ajax_processed] => 
                    [#sorted] => 1
                )

        )

    [notify] => Array
        (
            [#type] => checkbox
            [#title] => Notifier l'utilisateur de la création de son nouveau compte
            [#access] => 
            [#input] => 1
            [#return_value] => 1
            [#theme] => checkbox
            [#process] => Array
                (
                    [0] => form_process_checkbox
                    [1] => ajax_process_form
                    [2] => bootstrap_form_process
                )

            [#theme_wrappers] => Array
                (
                    [0] => form_element
                )

            [#title_display] => after
            [#pre_render] => Array
                (
                    [0] => ctools_dependent_pre_render
                    [1] => bootstrap_pre_render
                )

            [#icon] => 
            [#icon_position] => before
            [#defaults_loaded] => 1
            [#tree] => 
            [#parents] => Array
                (
                    [0] => notify
                )

            [#array_parents] => Array
                (
                    [0] => account
                    [1] => notify
                )

            [#weight] => 0.005
            [#processed] => 1
            [#required] => 
            [#attributes] => Array
                (
                )

            [#id] => edit-notify
            [#name] => notify
            [#value] => 0
            [#checked] => 
            [#ajax_processed] => 
            [#sorted] => 1
        )

    [timezone] => Array
        (
            [#type] => hidden
            [#value] => UTC
            [#input] => 1
            [#process] => Array
                (
                    [0] => ajax_process_form
                    [1] => bootstrap_form_process
                )

            [#theme] => hidden
            [#icon] => 
            [#icon_position] => before
            [#pre_render] => Array
                (
                    [0] => bootstrap_pre_render
                )

            [#defaults_loaded] => 1
            [#tree] => 
            [#parents] => Array
                (
                    [0] => timezone
                )

            [#array_parents] => Array
                (
                    [0] => account
                    [1] => timezone
                )

            [#weight] => 0.006
            [#processed] => 1
            [#required] => 
            [#attributes] => Array
                (
                )

            [#title_display] => before
            [#id] => edit-timezone
            [#name] => timezone
            [#ajax_processed] => 
            [#sorted] => 1
        )

    [#theme_wrappers] => Array
        (
            [0] => container
        )

    [#process] => Array
        (
            [0] => form_process_container
            [1] => bootstrap_form_process
        )

    [#icon] => 
    [#icon_position] => before
    [#pre_render] => Array
        (
            [0] => bootstrap_pre_render
        )

    [#defaults_loaded] => 1
    [#tree] => 
    [#parents] => Array
        (
            [0] => account
        )

    [#array_parents] => Array
        (
            [0] => account
        )

    [#processed] => 1
    [#required] => 
    [#attributes] => Array
        (
        )

    [#title_display] => before
    [#id] => edit-account
)
