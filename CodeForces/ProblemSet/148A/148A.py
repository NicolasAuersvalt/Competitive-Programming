num = [int(input()) for _ in range(4)]
d = int(input())
counter = 0

for i in range(1, d+1):
    for divisor in num:
        if divisor != 0 and i % divisor == 0:
            counter += 1
            break

print(counter)
