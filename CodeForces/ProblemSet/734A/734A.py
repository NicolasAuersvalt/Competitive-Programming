a = int(input())
vet = str(input())
qtd = 0

for i in range(len(vet)):
    if vet[i] == 'A':
        qtd += 1

if qtd > len(vet)/2:
    print("Anton")
elif qtd < len(vet)/2:
    print("Danik")
else:
    print("Friendship")
