N = int(input())
linha = input().split()
#convertendo os valores da lista linha para inteiros
for i in range(len(linha)):
    linha[i]=int(linha[i])

soma = sum(linha)
print(soma)