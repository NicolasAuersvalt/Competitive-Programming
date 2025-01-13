x = int(input())

num = list(map(int, input().split()))

min = max = num[0]

counter = 0;

for i in num:
    if i > max:
        max = i
        counter += 1
    if i < min:
        min = i
        counter += 1

print(counter)
