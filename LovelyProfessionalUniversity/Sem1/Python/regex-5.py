# finding indexes of words to be found

import re

str1 = "Sat, hat mat, pat"

allStr = re.findall("[^h-m]at", str1)

for i in allStr:
    print(i)