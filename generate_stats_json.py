import os
import json

# Configurações
target_extensions = ('.cpp', '.java', '.py', '.c')
json_filename = 'stats.json'

total_count = 0

# 1. Contar arquivos
for root, dirs, files in os.walk('.'):
    if '.git' in dirs:
        dirs.remove('.git')
        
    for file in files:
        if file.endswith(target_extensions):
            total_count += 1

# 2. Criar estrutura para o Shields.io Endpoint
data = {
    "schemaVersion": 1,
    "label": "Quantidade de Problemas Competitivos Resolvidos",
    "message": str(total_count),
    "color": "blue",
    "style": "for-the-badge"  # Estilo visual (opcional)
}

# 3. Salvar o arquivo JSON
with open(json_filename, 'w', encoding='utf-8') as f:
    json.dump(data, f)

print(f"Arquivo {json_filename} gerado com contagem: {total_count}")