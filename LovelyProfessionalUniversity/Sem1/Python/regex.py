import re

Nameage = '''
Janice is 4424 and Theon is 3233
Gabriel is 4214 and Joey is 2135
Lakshay is 2 and Boy is 6'''

ages = re.findall(r"\d{2}", Nameage)
names = re.findall(r'[A-Z][a-z]*',Nameage)

ageDict = dict()

x = 0

for eachname in names:
    ageDict[eachname] = ages[x]
    x+=1

print(ageDict)