b = input()
b = b.split()
# Cria um vetor de string com tamanho b
a = [""] * len(b)

for i in range(len(b)):
  a[i] = b[i]

for i in range(len(a)):
  if i<(len(a)-1):
    if a[i]=='W' and a[i+1]=='U' and a[i+2]=='B':
      a[i] = " "
      a[i+1] = " "
      a[i+2] = " "

print(a)