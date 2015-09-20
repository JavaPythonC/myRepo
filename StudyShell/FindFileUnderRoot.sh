#!/bin/bash

echo "enter a file name"
read a
if test -e /root/$a
then echo "the file exist"
else echo "the file doesn't exist"
fi
