import os

EXTENSOES = {'.cpp', '.c', '.java', '.py'}

def contar_arquivos_validos(diretorio='.'):
    contador = 0
    for root, _, files in os.walk(diretorio):
        for file in files:
            if os.path.splitext(file)[1] in EXTENSOES:
                contador += 1
    return contador

if __name__ == "__main__":
    total = contar_arquivos_validos()
    print(f"Total de arquivos .cpp, .c, .java e .py: {total}")

