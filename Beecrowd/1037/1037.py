import sys
val = float(input())

if (val > 100) or (val < 0):
    print("Fora de intervalo")
    sys.exit(0)

if val>50:
    if val>75:
        print("Intervalo (75,100]")
    else:
        print("Intervalo (50,75]")

else:
    if val>25:
        print("Intervalo (25,50]")
    else:
        print("Intervalo [0,25]")

    
