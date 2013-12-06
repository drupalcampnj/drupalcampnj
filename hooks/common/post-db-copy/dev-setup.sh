#!/bin/sh
#
# Cloud Hook: post-db-copy
#
# The post-db-copy hook is run whenever you use the Workflow page to copy a
# database from one environment to another. See ../README.md for
# details.
#
# Usage: post-db-copy site target-env db-name source-env

site="$1"
target_env="$2"
db_name="$3"
source_env="$4"

echo "$site.$target_env: Received copy of database $db_name from $source_env."

if [ "$target_env" = "prod" ]; then exit; fi

echo "Enable & configure maillog module so we don't send mail."
drush5 @$site.$target_env vset --exact -y maillog_devel 0
drush5 @$site.$target_env vset --exact -y maillog_log 1
drush5 @$site.$target_env vset --exact -y maillog_send 0

drush5 @$site.$target_env -y en maillog
