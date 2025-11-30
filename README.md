# 🧾 Introdução a Técnicas de Programação - Unidade 1  
**Aluno:** Maria Eduarda dos Santos Carvalho  
**Matrícula:** 20250033141

---

## 📁 Estrutura do Projeto
- **projeto/**: Sistema de Denúncias Anônimas em C
- **listas/**: Soluções das listas de exercícios
---

## 🚨 Projeto: Sistema de Denúncias Anônimas

**Descrição:**  
Este projeto implementa um sistema simples de **registro e consulta de denúncias anônimas**, desenvolvido inteiramente na linguagem **C**.  
A aplicação permite ao usuário cadastrar, listar e pesquisar denúncias sem identificação.  
---

## ⚙️ Funcionalidades Implementadas

- **Listagem de Denúncias:**  
  Mostra todas as denúncias registradas, com formatação amigável no terminal.

- **Pesquisa por Tipo:**  
  Permite filtrar denúncias de um tipo específico (por exemplo, “Furto”, “Assédio” etc.).

- **Interface Textual Limpa:**  
  Menus e cabeçalhos bem organizados para facilitar o uso no terminal.

---

## 🧠 Conceitos da U1 Aplicados

### 🔸 Estruturas Condicionais
- Utilizadas para controlar o fluxo do menu principal e validar opções digitadas.
- Na pesquisa de denúncias (`pesquisarPorTipo`), condicionais determinam se há correspondência ou não com o tipo buscado.
- Na função de cadastro, impedem que o programa ultrapasse o limite máximo de denúncias.

### 🔸 Estruturas de Repetição
- **Laços `for`** percorrem o vetor de denúncias para listar e buscar registros.
- **Laços `do...while`** e `while` mantêm o menu principal ativo até que o usuário escolha sair.
- Um `while` é usado em `limparBuffer()` para evitar erros de leitura do teclado.

### 🔸 Vetores
- As denúncias são armazenadas em um **vetor de estruturas** (`Denuncia denuncias[MAX_DENUNCIAS]`).
- Cada estrutura contém três campos: tipo, local e descrição.

### 🔸 Funções
O código é modularizado em funções independentes, facilitando leitura e manutenção:

- `exibirMenu()`: Mostra as opções do sistema.  
- `cadastrarDenuncia()`: Coleta e armazena uma nova denúncia.  
- `listarDenuncias()`: Exibe todas as denúncias existentes.  
- `pesquisarPorTipo()`: Busca denúncias por tipo.  
- `limparBuffer()`: Garante a limpeza do buffer de entrada.  
- `exibirCabecalho()`: Centraliza a formatação visual do programa.

---

## 🧪 Exemplo de Execução

```b
===========================================
       SISTEMA DE DENUNCIAS ANONIMAS
===========================================
1 - Fazer nova denuncia
2 - Listar denuncias
3 - Pesquisar denuncias por tipo
0 - Sair
-------------------------------------------
Escolha uma opcao: 1

📝 Cadastro de Denuncia
-------------------------------------------
Tipo da denuncia: Furto
Local do ocorrido: Biblioteca
Descricao: Furto de mochila na mesa 4

 Denuncia registrada anonimamente com sucesso!
```
## 🧮 Instruções de Compilação e Execução
```b
gcc main.c -o p
./p
```

## 🎯 Principais Aprendizados

Desenvolver este sistema foi uma ótima oportunidade para aplicar de forma prática os conceitos fundamentais da programação em C.
Durante a implementação, foi possível compreender melhor o uso de vetores, funções e condicionais, além de boas práticas como modularização e validação de entrada.

Foi um projeto simples, mas muito útil para consolidar a base da linguagem e o raciocínio lógico necessário para desenvolver aplicações maiores no futuro.

## 🔧 Ambiente de Desenvolvimento

- Sistema Operacional: Windows

- Compilador: GCC 15.2.0

- Editor: Visual Studio Code


#### [Link do repositório](https://github.com/EduardaCarvalho-dv/carvalho-maria-itp-2025-2)