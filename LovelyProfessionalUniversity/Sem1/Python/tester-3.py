# #### SUMMER OF '69: Return the sum of the numbers in the array, except ignore sections of numbers starting with a 6 and extending to the next 9 (every 6 will be followed by at least one 9). Return 0 for no numbers

lst = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]
sum = 0


x = lst.index(6)
y = lst.index(9)
if y > x:
    for i in lst[y+1:]:
        sum += i
    for i in lst[:x]:
        sum += i
else:
    for i in lst:
        sum += i
# end at 6, start from 9
print(sum)
