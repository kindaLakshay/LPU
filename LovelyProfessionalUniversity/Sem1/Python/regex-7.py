# replacing \n using regex


import re

randstr = '''
Keep the blue flag
flying high
Chelsea'''

print(randstr)

regex = re.compile("\n")

randstr = regex.sub(" ", randstr)

print(randstr)