# replacing word with regex

import re

food = "hat mat rat pat"

regex = re.compile("[r]at")

food = regex.sub("food",food)

print(food)