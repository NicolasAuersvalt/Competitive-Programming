import sys

val = input()

a, b, c, d = map(int, val.split())

if (a%2)==0:
    if d>a:
        if b>c:
            if (c+d) > (a+b):
                if (c>0 and d>0):
                    print("Valores aceitos")
                    sys.exit(0)
print("Valores nao aceitos")
