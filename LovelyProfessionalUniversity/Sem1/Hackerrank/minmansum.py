# n = 5 #int(input())
# arr = list(map(int, input().rstrip().split()))[:n]
arr = [1,2,3,4,5]
arr.sort()
min = sum(arr[:-2])
max = sum(arr[0:])
print(min,max, sep="  ")