import os
import re

EXTENSOES = {'.cpp', '.c', '.java', '.py'}

def contar_arquivos_validos(diretorio='.'):
    contador = 0
    for root, _, files in os.walk(diretorio):
        for file in files:
            if os.path.splitext(file)[1] in EXTENSOES:
                contador += 1
    return contador

def atualizar_readme(contagem):
    with open("README.md", "r", encoding="utf-8") as f:
        conteudo = f.read()

    novo_conteudo = re.sub(
        r"(?<=<!--code_count_start-->).*?(?=<!--code_count_end-->)",
        str(contagem),
        conteudo,
        flags=re.DOTALL
    )

    with open("README.md", "w", encoding="utf-8") as f:
        f.write(novo_conteudo)

if __name__ == "__main__":
    total = contar_arquivos_validos()
    print(f"Total de arquivos .cpp, .c, .java e .py: {total}")
    atualizar_readme(total)

