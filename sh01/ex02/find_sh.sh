#!/bin/bash

find . -type f -name "*.sh" | sed 's/\.sh$//g ; s/.*\///g'
