#!/usr/bin/python3

import cgi
import cgitb
cgitb.enable()

form1=cgi.FieldStorage()
name=form1.getvalue("name")

print ("Content-type:text/html \n\n")
print ("hello")

