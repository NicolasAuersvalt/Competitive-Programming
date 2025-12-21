# Recebe o tamanho do vetor e depois armazana entradas de uma linha em cada posição

a = int(input())

# Cria um vetor com tamanho a

vetor = [0] * a

# recebe uma linha de entrada e armazena em cada posição do vetor

b = input()
b = b.split()

for i in range(a):
  vetor[i] = int(b[i])

vetor.sort()

for i in range(a):
  # Exibe o vetor em uma linha
  print(vetor[i], end = " ")