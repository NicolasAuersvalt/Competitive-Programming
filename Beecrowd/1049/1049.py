# Recebe string de entrada
tipo1 = input()
tipo2 = input()
tipo3 = input()

# Vertebrado
if tipo1 == 'vertebrado':

  # Ave
  if tipo2 == 'ave':

    # Carnívoro
    if tipo3 == 'carnivoro':

      # Aguia
      print("aguia\n")
    else:

      #Pomba
      print('pomba\n')

  # Mamifero
  else:

    # Carnívoro
    if tipo3 == 'carnivoro':

      # homem
      print("homem\n")
    else:

      # vaca
      print('vaca\n')

# Invertebrado
else:

  # inseto
  if tipo2 == 'inseto':

    # hematofago
    if tipo3 == 'hematofago':

      # pulga
      print("pulga\n")
    else:

      #lagarta
      print("lagarta\n")

  # anelideo
  else:

    # hematofago
    if tipo3 == 'hematofago':

      # pulga
      print("sanguessuga\n")
    else:

      #lagarta
      print("minhoca\n")
