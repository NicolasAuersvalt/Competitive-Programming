a = int(input())
vet = [0, 0, 0]

for i in range(a):
    coordinates = input()
    x, y, z = map(int, coordinates.split())
    vet[0] += x
    vet[1] += y
    vet[2] += z

if(vet[0] == 0 and vet[1] == 0 and vet[2]==0):
    print("YES")
else:
    print("NO")

