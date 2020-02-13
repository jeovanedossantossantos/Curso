# soma +
# subtração -
# multiplicação *
# divisão /

m = float(input("Digite  um numero"))
s = float(input("Digite  um numero"))
me = input("Digite um mensagem: ")

soma = m + s
sub  = m - s
mul  = m * s
div  = m / s # s diferete de 0
print(me)
print("soma = %.3f\nsubtração = %.2f\nmultiplicação = %.5f\ndivisão = %.6f"%(soma,sub,mul,div))
