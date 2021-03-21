doces = int(input())
lista = []
while(len(lista)<=2):
    quantidade = int(input())
    lista.append(quantidade)
lista.sort()
cont = 0
resto = doces - lista[0]
if(resto>=0):
    cont +=1
    resto = resto - lista[1]
    if(resto>=0):
        cont +=1
        resto = resto - lista[2]
        if(resto>=0):
            cont +=1
print(cont)