A,B,C=(input().split())
A = int(A)
B = int(B)
C = int(C)
if A == B and A == C:
    print("*")
elif A == C:
    print("B")
elif A == B:
    print("C")
else:
    print("A")