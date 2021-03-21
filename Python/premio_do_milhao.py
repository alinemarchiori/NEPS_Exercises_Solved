n=int(input())
premios = []

soma = 0
dias = 0

for i in range(n):
    #A=int(input())
    #premios.append(A)
    
    premios.append(int(input()))

    #premios[i] = int(premios[i])

for j in premios:
    if soma >= 1000000:
        break
    else:
        dias = dias + 1
        soma = soma + j

print(dias)