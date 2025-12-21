num = list(map(int, input().split()))
dif = 240-num[1]

# começa 20:00 e deve chegar às 24:00
# 240 minutos no total

total = 0

for i in range(num[0]):
    if (dif-((i+1)*5)) >= 0:
        dif -= ((i+1)*5)
        total += 1
    else:
        break

print(total)

