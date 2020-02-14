#lista = list()
#########0###1##2
lista = [1 , 2 ,3]
lista.append(5)#adiciona no final da lista lista.append(valor)
lista.insert(1,7)# adicina onde você quer lista.insert(posição,valor)

for i in lista:
  print(i)
if 10 in lista:
  lista.remove(10)#exclui um valor lista.remove(valor)
else:
  print("Não existe")
  

for i in lista:
  print(i)

lista.clear()#Apaga tudo

print(lista)
