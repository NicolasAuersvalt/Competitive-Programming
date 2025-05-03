import os

def count_subdirs(path='.'):
    return sum(os.path.isdir(os.path.join(path, d)) for d in os.listdir(path))

with open("README.md", "r", encoding="utf-8") as file:
    content = file.read()

new_content = re.sub(r"(?<=<!--dir_count_start-->).*?(?=<!--dir_count_end-->)",
                     f"{count_subdirs()}", content, flags=re.DOTALL)

with open("README.md", "w", encoding="utf-8") as file:
    file.write(new_content)

