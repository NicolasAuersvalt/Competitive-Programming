a = str(input())
count = 0

for i in range(len(a)):
    if a[i].isupper():
        count+=1

if count > (len(a)/2):
    print(a.upper())
else:
    print(a.lower())
