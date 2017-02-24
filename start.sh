#!/bin/sh
echo $HOME

eval "$(./inject_env.rb)"

env

export TYK_GW_STORAGE_HOST=$REDIS_HOST
export TYK_GW_STORAGE_PORT=$REDIS_PORT
export TYK_GW_STORAGE_PASSWORD=$REDIS_PASSWORD

env

export TYK_GW_TEMPLATEPATH=$HOME/tyk/templates
export TYK_GW_TYKJSPATH=$HOME/tyk/js
export TYK_GW_APPPATH=$HOME/tyk/apps
export TYK_GW_POLICIES_POLICYRECORDNAME=$HOME/tyk/policies/policies.json

export TYK_GW_LISTENPORT=$PORT

env

$HOME/tyk/tyk --conf=$HOME/tyk.conf --debug
