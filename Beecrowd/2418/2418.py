notas = input()
# Cria um vetor com 5 posições
vet = [0] * 5

vet[0], vet[1], vet[2], vet[3], vet[4] = map(float, notas.split())

vet.sort()

print("{:.3}".format(vet[1]+vet[2]+vet[3]))