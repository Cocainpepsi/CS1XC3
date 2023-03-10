#!/bin/sh
LD_LIBRARY_PATH="$LD_LIBRARY_PATH:/home/dev/Desktop/CS1XC3/L06/dynamic"
export LD_LIBRARY_PATH
./top
unset LD_LIBRARY_PATH
