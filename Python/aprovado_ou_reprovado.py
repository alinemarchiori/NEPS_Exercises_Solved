A,B=(input().split())
A = float(A)
B = float(B)

media=(A+B)/2

if media >=7 :
    print("Aprovado")
elif media < 4:
    print("Reprovado")
else:
    print("Recuperacao")