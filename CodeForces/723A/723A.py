num = list(map(int, input().split()))
num.sort()

print((num[2]-num[1]) + (num[1]-num[0]))
