#!/bin/bash
echo -n "login"
read name
echo -n "password"
read password

if [ $name = "cht" -a $password = "abc" ]
then echo "Success"
else echo "FAILED"
fi


