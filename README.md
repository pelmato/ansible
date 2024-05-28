# Installation d’un poste de travail

## Prérequis

-   Ansible
-   Git
-   Être dans le groupe sudo

## Installation

-   Cloner le repo en local

```shell
git clone git@github.com:pelmato/ansible.git
```

-   Renseigner les variables dans [inventory.yml](./inventory.yml)

-   Lancer le playbook ansible

```shell
ansible-playbook site.yml
```

## Manuel

-   Dash to dock (gnome extension)

## Projet git

-   Mettre en place un formatteur (suggestion Prettier en front, Spotless en back)
-   Mettre en place eslint
-   Configurer les fins de ligne git
    ```
    $ git config --global core.eol lf
    $ git config --global core.autocrlf input
    ```
-   Créer un fichier `.editorconfig`

    ```
    # Editor configuration, see http://editorconfig.org
    root = true

    [*]
    charset = utf-8
    indent_style = space
    indent_size = 2
    insert_final_newline = true
    trim_trailing_whitespace = true

    [*.md]
    max_line_length = off
    trim_trailing_whitespace = false
    indent_size = 4
    ```
