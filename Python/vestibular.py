a = int(input())
gabarito = input()
respostas = input()
cont = 0
for i in range(len(gabarito)):
    if gabarito[i] == respostas[i]:
        cont = cont + 1
print(cont)