A = False
B = False
n = int(input())
comandos = input().split()

for i in range(len(comandos)):
    comandos[i]=int(comandos[i])
    #dá pra escrever assim, sem usar tantos ifs:
    #A = True if A == 0 else 0
    #B = True if B == 0 else 0
    if comandos[i]==1:
        if A == False:
            A = True
        else:
            A = False
    else:
        if B == False:
            B = True
        else:
            B = False
        if A == False:
            A = True
        else:
            A = False
if A:
    print("1")
else:
    print("0")
if B:
    print("1")
else:
    print("0")