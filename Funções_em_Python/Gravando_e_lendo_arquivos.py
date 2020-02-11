def gravar_arquivo(texto):
      
        arq = open('Teste.txt', 'w')#Criando um arquivo
        for i in range(len(texto)):
            arq.write(texto[i]+'\n')#Escrevendo no arqivo
        arq.close()#Fechando o arquivo
def lendo_arquivo(nome):
        
        texto = []
        try:
            with open(nome + ".txt") as file:#Lendo o arquivo linha a liha e colocando na lista file
        
                for i in file:
                    i = i.split('\n')
                    texto.append(i[0])#Passando para a lista texto

                return texto
        except FileNotFoundError:#caso o arquivo não seja encontarado 
            print('Arquivo não encontrado')
            return texto
        file.close()
#Testando as funções
lista=['10', 'Teste 02']
gravar_arquivo(lista)
arq = lendo_arquivo('Teste')
for i in arq:
  print(i)
