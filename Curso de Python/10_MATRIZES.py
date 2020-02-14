matriz = []

c = int(input("Digite o numero de colunas"))
l = int(input("Digite o numero de linhas"))
for i in range(l):
  linha = []
  for j in range(c):
    a = int(input('Digite uma valor'))
    linha.append(a)
  matriz.append(linha)

#for i in range(3):
#  for j in range(3):
#    print(matriz[i][j])

#for i in range(3):
#  print(matriz[i])

for i in range(l):
  for j in range(c):
    if j < (c-1):
      print(matriz[i][j],end=" ")
    else:
      print(matriz[i][j],end="")
  print()
