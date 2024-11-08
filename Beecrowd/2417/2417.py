a = input()

cv, ce, cs, fv, fe, fs = map(int, a.split())

pontosC = cv*3 + ce
pontosF = fv*3 + fe

if pontosC == pontosF:
  if cs > fs:
    print("C")
  elif fs>cs:
    print("F")
  else:
    print("=")

else:
  if pontosC>pontosF:
    print("C")
  else:
    print("F")