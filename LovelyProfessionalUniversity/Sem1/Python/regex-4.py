import re

str1 = "Sat, hat mat, pat"

allStr = re.findall("[shmp]at", str1)

for i in allStr:
    print(i)