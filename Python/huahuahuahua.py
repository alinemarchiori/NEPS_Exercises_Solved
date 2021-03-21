risada = input()
vogais = ["a","e","i","o","u",]
final = ""
for i in risada:
    if i in vogais:
        final += i

# o comando (final[::-1]) retorna a string invertida
# e se chama SLICE;

if final == final[::-1]:
    print("S")
else:
    print("N")