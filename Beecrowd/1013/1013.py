val = input();

a, b, c = map(int, val.split())

# Formula AB

maior1 = (a+b+abs(a-b))/2

maior2 = int((maior1+c+abs(maior1-c))/2)

print("{} eh o maior".format(maior2))

