if status is-interactive
    # Commands to run in interactive sessions can go here
end

# NVM https://github.com/nvm-sh/nvm/issues/303
function nvm
    bash -c "source ~/.nvm/nvm.sh; nvm $argv"
end
set -U fish_user_paths $HOME/.nvm/versions/node/v22.17.1/bin $HOME/.local/bin $fish_user_paths

alias rm='rm -i'

# SDKMAN https://github.com/sdkman/sdkman-cli/issues/671
function sdk
    bash -c "source '$HOME/.sdkman/bin/sdkman-init.sh'; sdk $argv[1..]"
end
fish_add_path (find ~/.sdkman/candidates/*/current/bin -maxdepth 0)

set -x CHROME_BIN /snap/bin/chromium
