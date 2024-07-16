# Cria uma Lista

# Recebe, em uma linha, e armazena os inteiros em cada posição da lista

# ordena e retorna o maior valor

# Consider this snippet from ../../CodeForces/2414/2414.py

# Cria uma lista de tamanho aleatório
a = []

b = input()
b = b.split() # Divide os valores

# Atribui a cada posição do vetor o valor do índice, em inteiro
for i in range(len(b)):
  a.append(int(b[i]))

# Ordena a lista
a.sort()

# Exibe o maior valor
print(a[-1])