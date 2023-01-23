# verifing phone numbers

import re

# \w [a-zA-Z0-9_]
# \W [^a-zA-Z0-9]
# W is same as ^w

phn = "412-555-1212"

if re.search(r"\d{3}-\d{3}-\d{4}", phn): 
    print("it is a phone number")