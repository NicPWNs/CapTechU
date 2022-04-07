# -*- coding: utf-8 -*-
"""
Created on Tue Apr 10 15:55:04 2018

@author: Nic
"""

f = open ("question4pythonsource.txt", "r")
f2 = open ("question4pythondest.txt", "w+")

sourceContent = f.read()
f2.write(sourceContent)

print("Content copy successful!")