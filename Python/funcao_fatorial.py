def fatorial(N):
    cont = N-1
    fat = N
    if(N == 0):
        fat = 1
    else:
        while(cont>1):
            fat = fat * cont
            cont -=1
    return fat
    
N = int(input())
print(fatorial(N))
