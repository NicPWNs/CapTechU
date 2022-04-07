# -*- coding: utf-8 -*-
"""
Created on Tue Apr 10 16:13:33 2018

@author: Nic
"""
import pickle

f2 = open ("question6python.txt", "rb")
dict2 = pickle.load(f2)
print (dict2)
f2.close()