import re

str1 = "we need ito inform him wihth the lstest information"

for i in re.finditer("inform",str1):
    x = i.span()
    print(x)