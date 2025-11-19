import os

target_extensions = ('.cpp', '.java', '.py', '.c') 

readme_path = 'README.md'
start_marker = ''
end_marker = ''

total_count = 0

for root, dirs, files in os.walk('.'):
    if '.git' in dirs:
        dirs.remove('.git') 
        
    for file in files:
        if file.endswith(target_extensions):
            total_count += 1

text_to_display = f"Total de arquivos de código no repositório: **{total_count}**"

with open(readme_path, 'r', encoding='utf-8') as f:
    content = f.read()

start_index = content.find(start_marker)
end_index = content.find(end_marker)

if start_index != -1 and end_index != -1:
    updated_content = (
        content[:start_index + len(start_marker)] +
        "\n" + text_to_display + "\n" +
        content[end_index:]
    )
    
    with open(readme_path, 'w', encoding='utf-8') as f:
        f.write(updated_content)
    print(f"Atualizado! Total encontrado: {total_count}")
else:
    print("Marcadores não encontrados no README.md")