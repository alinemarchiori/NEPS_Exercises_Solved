import math
n = int(input())
numeros = input().split()
for i in range(len(numeros)):
    numeros[i] = float(numeros[i])
    raiz = math.sqrt(numeros[i])
    print("{:.4f}".format(raiz))