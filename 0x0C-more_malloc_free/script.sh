#!/bin/bash

# Do not add this script to git
git update-index --skip-worktree $0

# Give executable permissions to all files in the current directory
chmod u+x *

# Add all files to git
git add .

# Commit the changes with the message "initial commit"
git commit -m 'initial commit'

# Push the changes to the remote repository
git push origin master

