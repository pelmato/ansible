UTILISATEUR="$(whoami)";
SYSTEME="$(uname)";
export UTILISATEUR;
export SYSTEME;

# Invite du shell zsh :
# %B en gras
# %U souligné
# M nom de l'ordinateur en entier
# %m nom de la machine
# %~ chemin
# %{fg[couleur]%}
#
#autoload -U colors
#colors
#
# red='\e[0;31m'
# RED='\e[1;31m'
# green='\e[0;32m'
# GREEN='\e[1;32m'
# yellow='\e[0;33m'
# YELLOW='\e[1;33m'
# blue='\e[0;34m'
# BLUE='\e[1;34m'
# magenta='\e[0;35m'
# MAGENTA='\e[1;35m'
# cyan='\e[0;36m'
# CYAN='\e[1;36m'
# white='\e[0;37m'
# WHITE='\e[1;37m'

# PS1 par defaut :
PS1='%B%U%m%u:%~> %b'

if [ "$UTILISATEUR" = "root" ] ;then
    PS1=$'%{\e[1;31m%}%m:%{\e[0;31m%}%~>%{\e[0m%} '
else
    if [ "$SYSTEME" = "Linux" ] ;then
        PS1=$'%U%{\e[1;36m%}%m%u:%{\e[0;36m%}%~>%{\e[0m%} '
    fi
fi

export PS1

# Eviter d'effacer trop vite :
alias rm="rm -i"
alias cp="cp -i"
alias mv="mv -i"

# Quelques couleurs :
alias ls="ls --color=auto"

# Firefox
alias firefox35="/opt/firefox/mozilla-1.9.1/objdir-ff-release/dist/bin/firefox -P Compile"

# De belles polices dans xterm et emacs
#alias emacs="emacs -fn fixed"
#alias xterm="xterm -fn fixed"

umask 022

# History
export HIST_STAMPS="yyyy-mm-dd"
export HISTSIZE=10000
export SAVEHIST=$HISTSIZE
export HISTFILE=~/.zsh_history

# OPTIONS
setopt hist_ignore_dups    # Pas de doublons dans l'historique
setopt numeric_glob_sort   # Utiliser l'ordre numerique plutot que lexicograph.
setopt no_beep
setopt correct             # correction du nom de la commande
setopt prompt_subst        # Autoriser les substitution dans un prompt
setopt print_exit_value    # Afficher le code de sortie

# The following lines were added by compinstall
zstyle ':completion:*' completer _complete
zstyle :compinstall filename '/home/cyril/.zshrc'

autoload -Uz compinit
compinit
# End of lines added by compinstall

export NVM_DIR="$HOME/.nvm"
[ -s "$NVM_DIR/nvm.sh" ] && \. "$NVM_DIR/nvm.sh" # This loads nvm
[ -s "$NVM_DIR/bash_completion" ] && \. "$NVM_DIR/bash_completion" # This loads nvm bash_completion
