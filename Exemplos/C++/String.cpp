// length()
int tamanho = nome.length(); // Armazena o tamanho da string 'nome' na variável 'tamanho'

// empty()
if(nome.empty()) // Verifica se a string 'nome' está vazia

// at(index)
char primeiroCaractere = nome.at(0); // Obtém o primeiro caractere da string 'nome'

// [index]
nome[0] = 'A'; // Altera o primeiro caractere da string 'nome' para 'A'

// append(const std::string& str2)
nome.append(" Silva"); // Adiciona " Silva" ao final da string 'nome'

// insert(index, const std::string& str2)
nome.insert(0, "Sr. "); // Insere "Sr. " no início da string 'nome'

// erase(index, count)
nome.erase(0, 4); // Remove os primeiros 4 caracteres da string 'nome'

// compare(const std::string& str2)
if(nome.compare("João") == 0) // Verifica se a string 'nome' é igual a "João"


// find(const std::string& str2)
if(nome.find("Silva") != string::npos) // Verifica se a string 'nome' contém "Silva

// Se a substring não for encontrada, posicao receberá o valor string::npos, indicando que a substring não está presente.