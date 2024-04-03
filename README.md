# Installation d’un poste de travail

## Prérequis

- Ansible
- Git
- Être dans le groupe sudo

## Installation

- Cloner le repo en local

```shell
git clone git@github.com:pelmato/ansible.git
```

- Renseigner les variables dans [inventory.yml](./inventory.yml)

- Lancer le playbook ansible

```shell
ansible-playbook site.yml
```

## Todo

- vscode + extensions
