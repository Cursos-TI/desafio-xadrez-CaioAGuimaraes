# ♟️ Desafio de Xadrez – MateCheck

- Estes códigos seguem as sugestões do repositório:
 - Usa constantes para número de casas
 - Cada movimento usa a estrutura de repetição mais adequada
 - Loops aninhados no cavalo
 - Funções recursivas para bispo, torre e rainha no nível mestre
 - Uso de continue/break conforme solicitado

Este repositório contém a implementação do **Desafio de Xadrez - MateCheck** proposto na disciplina de Introdução à Programação de Computadores da Estácio de Sá. O projeto está dividido em três níveis de complexidade: Novato, Aventureiro e Mestre.

---

## 🧩 Níveis Implementados

### 🥉 Nível Novato
- Simula o movimento das peças:
  - **Bispo:** 5 casas na diagonal superior direita (Cima + Direita)
  - **Torre:** 5 casas para a direita (Direita)
  - **Rainha:** 8 casas para a esquerda (Esquerda)
- Cada movimento é exibido em sequência usando comandos `printf`.
- Uso de estruturas de repetição diferentes (for, while, do-while) e constantes.

### 🥈 Nível Aventureiro
- Simula a movimentação do **Cavalo** em “L” (2 casas para baixo e 1 para a esquerda).
- Utiliza loops aninhados, combinando pelo menos um `for` e um `while`.

### 🥇 Nível Mestre
- Bispo, Torre e Rainha: movimentação agora feita por **funções recursivas**.
- Cavalo: movimento com laço usando variáveis múltiplas e condições, utilizando `continue` e `break`.
- Movimentação do Bispo utiliza loops aninhados obrigatoriamente.

---

## 🗂 Arquivos

| Arquivo                         | Descrição                                             |
|----------------------------------|-------------------------------------------------------|
| `nivel_novato.c`                | Implementação do nível básico com três peças          |
| `nivel_aventureiro.c`           | Movimento do Cavalo usando loops aninhados            |
| `nivel_mestre.c`                | Funções recursivas e laço complexo para o Cavalo      |
| `xadrez_matecheck_completo.c`   | Todos os níveis juntos, organizados e comentados      |

---

## 👨‍💻 Tecnologias Utilizadas
- Linguagem C
- IDE recomendada: Dev-C++, Code::Blocks, GCC ou similar

---

## ✍️ Autor
Caio Augusto Teixeira Guimarães  
Aluno Estácio de Sá – Gestão da Tecnologia da Informação

---

## 🚩 Como Executar

1. Baixe ou clone este repositório.
2. Escolha o arquivo correspondente ao nível desejado.
3. Compile utilizando sua IDE preferida ou pelo terminal:
   ```bash
   gcc nivel_novato.c -o nivel_novato
   ./nivel_novato

