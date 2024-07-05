#!/bin/bash

e2_bin="release/fw_7110_e2.bin"
if [ ! -f "$e2_bin" ]; then
    echo $e2_bin not exist!
    exit 1
fi

u7_proj_root="$1"
if [ -z "$u7_proj_root" ]; then
    u7_proj_root="../fw_jh7110_verif"
fi
e2_bin_src="$u7_proj_root/src/tests/mailbox_tests/fw_e2.inc"
xxd -i "$e2_bin" > "$e2_bin_src"
echo "$e2_bin_src"

# append commit info
repo_url=`git remote get-url origin`
commit_id=`git show -s --pretty=format:%h`
echo -e "\n//$repo_url, commit:$commit_id" >> "$e2_bin_src"