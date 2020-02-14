#SISTEMA DE CADASTRO DE DEPUTADOS
#CADASTRA DEPUTADO
#REMOVER DEPUTADO
#IMPRIMIR MEDIA
#INFORMAR O MELHOR DEPUTADO
#ADICIONAR BENEFICIO
#INFORMAR DADOS ESTATISTICOS
#DIGITE ZERO PARA ENCERRA

Nome = ["JOÃO",'MARIA','ALBERTO']
Salario = [2000, 3000, 4000]
Quntidade_Beneficios = [2, 3,4]
Valor_beneficio = [1000,2000,5000]
Quantidade_projetos =[1,2,3]

print('='*60)
print("\tBEM VINDO AO SISTEM DE CADASTRO DE DEPUTADOS")
print('='*60)

limite = 3

while True:
  print('='*60)
  print("\t\t\tMENU")
  print('='*60)

  print('\tCADASTRA DEPUTADO...........................[1]')
  print('\tREMOVER DEPUTADO............................[2]')
  print('\tIMPRIMIR MEDIA..............................[3]')
  print('\tINFORMAR O MELHOR DEPUTADO..................[4]')
  print('\tADICIONAR BENEFICIO.........................[5]')
  print('\tINFORMAR DADOS ESTATISTICOS.................[6]')
  print('\tDIGITE ZERO PARA ENCERRA....................[0]')

  n = int(input())

  if (limite == 20) and (n==1):
    print('SISTEMA SEM CAPACIDADE')
  elif (n == 1) and (limite < 20):

   limite +=1
   nome = str(input("DIGITE O NOME DO DEPUTADO\n"))
   Nome.append(nome)
   salario = float(input("DIGITE O SALARIO DO DEPUTADO"))
   Salario.append(salario)
   qunti_benficio = int(input("DIGITE A QUNTIDADE DE BENEFICIOS"))
   Quntidade_Beneficios.append(qunti_benficio)
   soma = 0
   for i in range(qunti_benficio):
     print("DIGITE O VALOR DO %i° BENEFICIO"%(i+1))
     bene = float(input())
     soma+=bene
   Valor_beneficio.append(soma)

   projetos = int(input("DIGITE A QUENTIDADE DE PROJETOS APROVADO"))
   Quantidade_projetos.append(projetos)
   
  elif (n == 2):
    tamanho = len(Nome)
    while True:
      if tamanho != 0:
        print("DIGITE O NOME DO DEPUTADO PARA REMOVELO")
        nome = str(input())

        if nome in Nome:
          local = Nome.index(nome)
          print("NOME................................................: %s"%Nome[local])
          print("SALARIO.............................................: %.2f"%Salario[local])
          print("BENEFICIOS O DEPUTADO POSUI.........................: %i"%Quntidade_Beneficios[local])
          print("VALOR TOTAL DOS BENEFICIOS..........................: %.2f"%Valor_beneficio[local])
          print("QUANTIDADES DE PROJETOS APROVADOS O DEPUTADO TEVE...: %i"%Quantidade_projetos[local])

          op = int(input("DESEJA CONTINUAR..................[1]\nPROCURA OUTRO DEPUTADO........[2]\nSAIR...............[3]"))
          while (op < 1 or op > 3):
            print("ERRO!! OPÇÃO ONCORRETA")
            op = int(input("DESEJA CONTINUAR..................[1]\nPROCURA OUTRO DEPUTADO........[2]\nSAIR...............[3]"))
          if op == 1:
            Nome.pop(local)
            Salario.pop(local)
            Quntidade_Beneficios.pop(local)
            Valor_beneficio.pop(local)
            Quantidade_projetos.pop(local)
            print("OPERÇÃO FEITA COM SUCCESSO")
            limite-=1
            break
          elif op == 2:
            continue
          elif op == 3:
            break
        else:
          print("NÃO TEM NENHUM DEPUTADO CADASTRADA COM ESSE NOME")
      else:
        print("NÃO TEM NENHUM DEPUTADO CADASTRADA")
        break
       
                    
        
  
  elif (n == 3):
    print("="*45)
    print("  IMPRIMIR MEDIA SALARIAL E DOS BENEFICIOS")
    print("="*45)
    tamanho = len(Nome)
    media_salario = 0
    media_beneficios = 0

    for i in range(tamanho):
      media_salario += Salario[i]
      media_beneficios += Valor_beneficio[i]
    
      #Quntidade_Beneficios = []
    if tamanho != 0:
      print("="*45)
      print("\nMEDIA SALARIAL......: %.2f"%(media_salario/tamanho))
      print("MEDIA BENEFICIOS......: %.2f\n"%(media_beneficios/tamanho))
      print("="*45)
    else:
      print("\tNÃO HÁ DEPUTADO CADASTRADO")
  elif (n == 4):
    tamanho = len(Nome)

    lista = []
    for i in range(len(Quantidade_projetos)):
      lista.append(Quantidade_projetos[i])

    lista.sort(reverse=True)
    colocao = 1
    if tamanho > 0:
      for i in range(len(lista)):
        for j in range(len(lista)):
          if lista[i] == Quantidade_projetos[j]:
            print("%i ° LUGAR"%(colocao))
            print("Nome.......................................: %s"%Nome[j])
            print("Salario....................................: %.2f"%Salario[j])
            print("Progetos aprovados....................................: %i"%Quantidade_projetos[j])
            print("="*45)
            colocao+=1
    else:
      print("NÃO EXISTE DEPUTADO CADASTRADO")
    
  elif (n == 5):
    tamanho = len(Nome)
    while True:
      if tamanho != 0:
        print("DIGITE O NEM DO DEPUTADO")
        nome = str(input())
        if nome in Nome:
          local = Nome.index(nome)
          print("NOME................................................: %s"%Nome[local])
          print("SALARIO.............................................: %.2f"%Salario[local])
          print("BENEFICIOS O DEPUTADO POSUI.........................: %i"%Quntidade_Beneficios[local])
          print("VALOR TOTAL DOS BENEFICIOS..........................: %.2f"%Valor_beneficio[local])
          print("QUANTIDADES DE PROJETOS APROVADOS O DEPUTADO TEVE...: %i"%Quantidade_projetos[local])
          op = int(input("DESEJA CONTINUAR..................[1]\nPROCURA OUTRO DEPUTADO........[2]\nSAIR...............[3]"))
          while (op < 1 or op > 3):
            print("ERRO!! OPÇÃO ONCORRETA")
            op = int(input("DESEJA CONTINUAR..................[1]\nPROCURA OUTRO DEPUTADO........[2]\nSAIR...............[3]"))

          if op == 1:
            qunt = int(input("QUNTOS BEFICIOS SERAM ADICIONADOS?"))
            soma = 0
            for i in range(qunt):
              print("DIGITE O VALOR DO %i°"%(i+1))
              valor = float(input())
              soma+=valor
            Quntidade_Beneficios[local]+=qunt
            Valor_beneficio[local]+=soma
            break
          elif op == 2:
            continue
          elif op == 3:
            break
        else:
          print("NÃO HÁ DEPUTADO CADASTRADO COM ESSE NOME\n")
      else:
          print("NÃO HÁ DEPUTADO CADASTRADO")
            
  elif (n == 6):
    print("EXISTE CERCA DE %i DEPUTADOS NA CAMARA\n"%(len(Nome)))
    tamanho = len(Nome)
    while True:
      if tamanho != 0:
        print("DEPUTADO QUE MAIS RECEBE\n")
        maior = 0
        for i in range(tamanho):
          if maior <= (Salario[i] + Valor_beneficio[i]):
            maior = (Salario[i] + Valor_beneficio[i])

        for i in range(tamanho):
          if maior == (Salario[i] + Valor_beneficio[i]):
            print("NOME................................................: %s"%Nome[i])
            print("SALARIO.............................................: %.2f"%Salario[i])
            print("BENEFICIOS O DEPUTADO POSUI.........................: %i"%Quntidade_Beneficios[i])
            print("VALOR TOTAL DOS BENEFICIOS..........................: %.2f"%Valor_beneficio[i])
            print("QUANTIDADES DE PROJETOS APROVADOS O DEPUTADO TEVE...: %i\n"%Quantidade_projetos[i])
        print("DEPUTADO QUE MENOS PROJETOS APROVOU\n")
        menor = Quantidade_projetos[0]
        for i in range(tamanho):
          if menor >= Quantidade_projetos[i]:
            menor = Quantidade_projetos[i]
        for i in range(tamanho):
          if menor == Quantidade_projetos[i]:
            print("NOME................................................: %s"%Nome[i])
            print("SALARIO.............................................: %.2f"%Salario[i])
            print("BENEFICIOS O DEPUTADO POSUI.........................: %i"%Quntidade_Beneficios[i])
            print("VALOR TOTAL DOS BENEFICIOS..........................: %.2f"%Valor_beneficio[i])
            print("QUANTIDADES DE PROJETOS APROVADOS O DEPUTADO TEVE...: %i\n"%Quantidade_projetos[i])
        quntidade = 0
        for i in range(tamanho):
          if Salario[i] < Valor_beneficio[i]:
            quntidade+=1
        print("A QUNTIDADE DE DEPUTADOS QUE TEM VALOR DE BENEFICIO MAIOR QUE SALARIO É : %i"%quntidade)
        break
      else:
        print("NÃO HÁ DEPUTADO CADASTRADO")
        break  
    
  elif (n == 0):
    break
  else:
    print("OPÇÃO INVALIDA")
