#!/bin/bash

# this line removes BOM from all pddl files
find /opt/plan -name "*.pddl" | while read l; do sed -i '1 s/^\xef\xbb\xbf//'  $l; dos2unix $l; echo $l; done
