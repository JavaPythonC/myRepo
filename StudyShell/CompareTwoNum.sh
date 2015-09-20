#!/bin/bash
echo "please enter two number"
read a
read b
if test $a -eq $b
then echo "a=b"
elif test $a -gt $b
then echo "a>b"
else echo "a<b"
fi


