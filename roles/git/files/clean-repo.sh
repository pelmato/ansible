#!/bin/bash

find . -name '*.orig' -exec rm -f {} \;
find . -name '*.versionsBackup' -exec rm -f {} \;

