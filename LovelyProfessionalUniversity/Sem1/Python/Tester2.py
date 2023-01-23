# arr = list(map(int, input().rstrip().split()))[:n]
n = int(input())
arr = list(map(int, input().rstrip().split()))[:n]
# print(arr)

num1 = num2 = num3 = sum1 = sum2 = sum3 = 0
avg1 = avg2 = avg3 = 0
for i in arr:
    if i == 0:
        sum1 += 1
    elif i > 0:
        sum2 += 1
    elif i < 0:
        sum3 += 1
avg2 = sum2/len(arr)
avg3 = sum3/len(arr)
avg1 = sum1/len(arr)
print("{:6f}\n{:6f}\n{:6f}".format(avg1,avg2,avg3))

# n = int(input)



