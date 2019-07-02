#!/bin/bash
touch file
ls -l >> file
awk 'NR % 2 != 0' file