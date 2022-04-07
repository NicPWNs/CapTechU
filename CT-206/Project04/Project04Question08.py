# -*- coding: utf-8 -*-
"""
Created on Tue Apr 10 16:13:33 2018

@author: Nic
"""
import json

data = {}  
data['me'] = []  
data['me'].append({  
    'name': 'Nic',
    'age': '19',
    'from': 'Delaware',
    'class': 'CT-206',
    'day': 'Monday/Wednesday'
})

f = open('question8python.txt', 'w+') 
json.dump(data, f)