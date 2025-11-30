# 🧾 Sistema de Denúncias em C

Um sistema simples desenvolvido em **linguagem C**, que permite **registrar, listar e pesquisar denúncias** diretamente pelo terminal.  
O projeto foi criado com o objetivo de exercitar conceitos da programação estruturada, como uso de **funções, vetores e manipulação de strings**, aplicados na construção de uma solução voltada à organizar informações.

---

## ⚙️ Como Compilar

No terminal, navegue até a pasta do projeto e execute o comando:

```bash
gcc main.c -o p
./p
```
## 🧩 Funcionalidades
| Opção | Descrição                                                                                              |
|-------|----------------------------------------------------------------------------------------------------------|
| `1️⃣` | **Fazer nova denúncia** — Cadastra uma nova denúncia no vetor dinâmico e salva automaticamente no arquivo. |
| `2️⃣` | **Listar denúncias** — Exibe todas as denúncias já registradas.                                            |
| `3️⃣` | **Buscar por palavra-chave** — Permite pesquisar uma denúncia por qualquer palavra presente nos campos.   |
| `4️⃣` | **Remover denúncia** — Apaga uma denúncia específica e reorganiza o vetor dinâmico.                        |
| `5️⃣` | **Exportar CSV** — Gera um arquivo `.csv` contendo todas as denúncias registradas no sistema.             |
| `0️⃣` | **Sair** — Encerra o programa de forma segura, garantindo a preservação dos dados.                         |