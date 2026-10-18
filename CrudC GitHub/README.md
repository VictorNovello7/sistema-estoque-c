# 🛒 Sistema de Controle de Estoque (CRUD em C)

Sistema desenvolvido em linguagem C para gerenciamento básico de estoque, implementando todas as operações fundamentais de um **CRUD** (Create, Read, Update, Delete) utilizando modularização de código, estruturas (`struct`), ponteiros e manipulação de vetores estáticos.

---

## 🚀 Funcionalidades

- **[C] Create (Adicionar):** Cadastra novos produtos informando ID, Nome, Preço e Quantidade (com validação de estoque máximo e limpeza de buffer).
- **[R] Read (Listar):** Exibe todos os produtos atualmente cadastrados no sistema de forma formatada.
- **[U] Update (Atualizar):** Permite buscar um produto pelo ID para alterar seus dados (nome, preço e quantidade).
- **[D] Delete (Remover):** Exclui um produto do sistema buscando pelo ID, aplicando a lógica de deslocamento de vetores (*shift*) para evitar lacunas na memória.

---

## 📂 Estrutura do Projeto

O projeto está organizado de forma modular para separar as declarações, a lógica de negócio e a execução principal:

- **`Main.h`**: Cabeçalho contendo a definição da `struct Produto`, a constante de limite do vetor (`MAX_PRODUTOS`) e os protótipos das funções.
- **`produto.c`**: Arquivo de implementação com a lógica de todas as operações do CRUD.
- **`Main.c`**: Arquivo principal contendo a função `main` e o menu interativo em loop (`do-while` / `switch-case`).
- **`CMakeLists.txt`**: Arquivo de configuração para compilação via CMake (ideal para IDEs como o CLion).

---

## 🛠️ Tecnologias e Conceitos Utilizados

- Linguagem **C** (Padrão C11)
- Modularização de código em múltiplos arquivos (`.c` e `.h`)
- Uso de **Structs** para modelagem de dados
- **Ponteiros** para passagem de parâmetros por referência (`*total`)
- Manipulação de vetores e algoritmos de deslocamento
- Controle de fluxo e gerenciamento de buffer de entrada (`getchar` / `fgets`)

---

## ⚙️ Como Compilar e Executar

### Opção 1: Usando GCC via Terminal
Se você tiver o GCC instalado, execute o comando abaixo na pasta raiz do projeto para compilar todos os arquivos juntos:

`gcc Main.c produto.c -o CrudC.exe`

Para executar o programa:
- **No Windows (PowerShell / CMD):** `.\CrudC.exe`
- **No Linux / macOS:** `./CrudC`

### Opção 2: Usando uma IDE (Ex: CLion ou VS Code)
1. Abra a pasta do projeto na sua IDE.
2. Certifique-se de que o CMake reconhece o `Main.c`, `produto.c` e `Main.h` no `CMakeLists.txt`.
3. Clique em **Build / Rebuild** e depois no botão de **Run**.

---

## 👨‍💻 Desenvolvido por
Victor Novello — Projeto de portfólio para fixação de conceitos de programação em C.