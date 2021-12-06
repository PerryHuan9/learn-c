#!/bin/bash

gcc src/argv/argv.c  -o bin/argv && bin/argv  parameter1 "parameter2 -bb"