# Saídas dos Programas — Lista de Exercícios 02

**Aluno:** Pedro Felipe Alexandre Gomes  
**Disciplina:** Algoritmos e Pensamento Computacional — Universidade Positivo (ETI)  
**Professor:** MSc Diego Fernando Maia  
**Data:** 19/11/2026

Cada bloco abaixo mostra uma execução real do programa, com os valores digitados pelo usuário já na tela (como no terminal). Compilação usada: `gcc -std=c99 -Wall -Wextra exXX.c -o exXX` (sem erros nem avisos). O exercício 38 é compilado com `gcc main.c util.c -o ex38`.

> Observações: o ex11 usa `rand()` com semente de tempo, então os números mudam a cada execução; o ex41 imprime endereços de memória, que também variam. Os exercícios 22, 24 e 27 dependem dos arquivos gerados pelos exercícios 21, 23 e 26, por isso foram executados nessa ordem.

---

## Exercício 01 — Soma de 1 a N (for)

Arquivo: `ex01.c`

```text
Digite N: 5
A soma de 1 a 5 e 15
```

## Exercício 02 — Média de 10 idades (for)

Arquivo: `ex02.c`

```text
Idade da pessoa 1: 18
Idade da pessoa 2: 20
Idade da pessoa 3: 22
Idade da pessoa 4: 25
Idade da pessoa 5: 30
Idade da pessoa 6: 35
Idade da pessoa 7: 40
Idade da pessoa 8: 45
Idade da pessoa 9: 50
Idade da pessoa 10: 55
Media das idades: 34.00
```

## Exercício 03 — Número primo (for + flag)

Arquivo: `ex03.c`

**Execução 1:**

```text
Digite um numero inteiro: 17
17 e primo.
```

**Execução 2:**

```text
Digite um numero inteiro: 15
15 nao e primo.
```

## Exercício 04 — Calculadora com menu (do-while)

Arquivo: `ex04.c`

```text

=== CALCULADORA ===
1 - Soma
2 - Subtracao
3 - Multiplicacao
4 - Divisao
5 - Sair
Escolha: 1
Digite dois numeros: 10 5
Resultado: 15.00

=== CALCULADORA ===
1 - Soma
2 - Subtracao
3 - Multiplicacao
4 - Divisao
5 - Sair
Escolha: 2
Digite dois numeros: 10 5
Resultado: 5.00

=== CALCULADORA ===
1 - Soma
2 - Subtracao
3 - Multiplicacao
4 - Divisao
5 - Sair
Escolha: 3
Digite dois numeros: 4 6
Resultado: 24.00

=== CALCULADORA ===
1 - Soma
2 - Subtracao
3 - Multiplicacao
4 - Divisao
5 - Sair
Escolha: 4
Digite dois numeros: 8 2
Resultado: 4.00

=== CALCULADORA ===
1 - Soma
2 - Subtracao
3 - Multiplicacao
4 - Divisao
5 - Sair
Escolha: 4
Digite dois numeros: 5 0
Erro: divisao por zero!

=== CALCULADORA ===
1 - Soma
2 - Subtracao
3 - Multiplicacao
4 - Divisao
5 - Sair
Escolha: 9
Opcao invalida!

=== CALCULADORA ===
1 - Soma
2 - Subtracao
3 - Multiplicacao
4 - Divisao
5 - Sair
Escolha: 5
Ate logo!
```

## Exercício 05 — 10 a 1 com while e for

Arquivo: `ex05.c`

```text
Usando while:
10 9 8 7 6 5 4 3 2 1 
Usando for:
10 9 8 7 6 5 4 3 2 1 
```

## Exercício 06 — Número positivo (while)

Arquivo: `ex06.c`

```text
Digite um numero positivo: -5
Valor invalido! Tente novamente.
Digite um numero positivo: 0
Valor invalido! Tente novamente.
Digite um numero positivo: abc
Valor invalido! Tente novamente.
Digite um numero positivo: 7
Numero valido: 7
```

## Exercício 07 — Potências de 2 menores que 1000 (for)

Arquivo: `ex07.c`

```text
2^0 = 1
2^1 = 2
2^2 = 4
2^3 = 8
2^4 = 16
2^5 = 32
2^6 = 64
2^7 = 128
2^8 = 256
2^9 = 512
```

## Exercício 08 — Retângulo de asteriscos

Arquivo: `ex08.c`

```text
Altura: 3
Largura: 6
******
******
******
```

## Exercício 09 — Triângulo retângulo de asteriscos

Arquivo: `ex09.c`

```text
Base do triangulo: 5
*
**
***
****
*****
```

## Exercício 10 — Fibonacci com while e do-while

Arquivo: `ex10.c`

```text
Quantos termos (1 a 90)? 10
Versao while:
0 1 1 2 3 5 8 13 21 34 
Versao do-while:
0 1 1 2 3 5 8 13 21 34 
```

**Comparação com a versão anterior (for):** nos três casos a saída é a mesma; muda só a estrutura do laço.

- `for`: ideal quando se sabe quantas repetições serão feitas, pois contador, condição e incremento ficam juntos na mesma linha.
- `while`: testa a condição *antes* de cada repetição e o contador é atualizado manualmente dentro do laço.
- `do-while`: executa o corpo pelo menos uma vez e testa a condição *depois*. Aqui é seguro porque N ≥ 1 é validado antes.

## Exercício 11 — Array com números aleatórios

Arquivo: `ex11.c`

```text
Elementos do array:
numeros[0] = 34
numeros[1] = 63
numeros[2] = 75
numeros[3] = 23
numeros[4] = 69
numeros[5] = 56
numeros[6] = 28
numeros[7] = 1
numeros[8] = 25
numeros[9] = 39
```

## Exercício 12 — Soma de dois arrays

Arquivo: `ex12.c`

```text
Digite os 5 elementos do primeiro array:
1 2 3 4 5
Digite os 5 elementos do segundo array:
10 20 30 40 50
Array soma: 11 22 33 44 55 
```

## Exercício 13 — Busca de chave em array

Arquivo: `ex13.c`

**Execução 1:**

```text
Digite 10 numeros:
4 8 15 16 23 42 7 9 1 3
Digite a chave a procurar: 23
Chave 23 encontrada na posicao (indice) 4.
```

**Execução 2:**

```text
Digite 10 numeros:
4 8 15 16 23 42 7 9 1 3
Digite a chave a procurar: 99
Chave 99 nao encontrada.
```

## Exercício 14 — Bubble Sort com 5 números

Arquivo: `ex14.c`

```text
Digite 5 numeros:
50 20 40 10 30
Array ordenado: 10 20 30 40 50 
```

## Exercício 15 — Matriz 2x3: soma por linha

Arquivo: `ex15.c`

```text
Elemento [0][0]: 1
Elemento [0][1]: 2
Elemento [0][2]: 3
Elemento [1][0]: 4
Elemento [1][1]: 5
Elemento [1][2]: 6
Soma da linha 0: 6
Soma da linha 1: 15
```

## Exercício 16 — Matriz 3x3: soma da diagonal principal

Arquivo: `ex16.c`

```text
Elemento [0][0]: 1
Elemento [0][1]: 2
Elemento [0][2]: 3
Elemento [1][0]: 4
Elemento [1][1]: 5
Elemento [1][2]: 6
Elemento [2][0]: 7
Elemento [2][1]: 8
Elemento [2][2]: 9
Soma da diagonal principal: 15
```

## Exercício 17 — Array de strings (5 cidades)

Arquivo: `ex17.c`

```text
Cidade 1: Curitiba
Cidade 2: Londrina
Cidade 3: Maringa
Cidade 4: Cascavel
Cidade 5: Ponta Grossa

Lista de cidades:
1. Curitiba
2. Londrina
3. Maringa
4. Cascavel
5. Ponta Grossa
```

## Exercício 18 — Cópia de array sem biblioteca

Arquivo: `ex18.c`

```text
Origem : 10 20 30 40 50 60 
Destino: 10 20 30 40 50 60 
```

## Exercício 19 — Frequência de números de 0 a 9

Arquivo: `ex19.c`

```text
Numero 1 (0 a 9): 1
Numero 2 (0 a 9): 3
Numero 3 (0 a 9): 3
Numero 4 (0 a 9): 0
Numero 5 (0 a 9): 9
Numero 6 (0 a 9): 5
Numero 7 (0 a 9): 5
Numero 8 (0 a 9): 5
Numero 9 (0 a 9): 2
Numero 10 (0 a 9): 1
Numero 11 (0 a 9): 7
Numero 12 (0 a 9): 3
Numero 13 (0 a 9): 0
Numero 14 (0 a 9): 9
Numero 15 (0 a 9): 5

Frequencia:
0 aparece 2 vez(es)
1 aparece 2 vez(es)
2 aparece 1 vez(es)
3 aparece 3 vez(es)
4 aparece 0 vez(es)
5 aparece 4 vez(es)
6 aparece 0 vez(es)
7 aparece 1 vez(es)
8 aparece 0 vez(es)
9 aparece 2 vez(es)
```

## Exercício 20 — Array dinâmico com malloc

Arquivo: `ex20.c`

```text
Quantos elementos? 5
Elemento 0: 10
Elemento 1: 20
Elemento 2: 30
Elemento 3: 40
Elemento 4: 50
Array: 10 20 30 40 50 
```

## Exercício 21 — Escrever em teste.txt

Arquivo: `ex21.c`

```text
Arquivo teste.txt gravado com sucesso.
```

Conteúdo de `teste.txt` após a execução:

```text
Primeira linha de um arquivo.
```

## Exercício 22 — Ler teste.txt

Arquivo: `ex22.c`

```text
Primeira linha de um arquivo.
```

## Exercício 23 — Gravar 5 nomes em nomes.txt

Arquivo: `ex23.c`

```text
Nome 1: Ana
Nome 2: Carlos Eduardo
Nome 3: Bia
Nome 4: Fernanda
Nome 5: Joao
Nomes gravados em nomes.txt.
```

Conteúdo de `nomes.txt` após a execução:

```text
Ana
Carlos Eduardo
Bia
Fernanda
Joao
```

## Exercício 24 — Contar nomes com mais de 5 caracteres

Arquivo: `ex24.c`

```text
Nomes com mais de 5 caracteres: 2
```

## Exercício 25 — Anexar nomes ao final de nomes.txt

Arquivo: `ex25.c`

```text
Quantos nomes deseja adicionar? 2
Nome 1: Mariana Souza
Nome 2: Lu
Nomes anexados ao final de nomes.txt.
```

Conteúdo de `nomes.txt` após a execução:

```text
Ana
Carlos Eduardo
Bia
Fernanda
Joao
Mariana Souza
Lu
```

## Exercício 26 — Gravar funcionário em CSV

Arquivo: `ex26.c`

```text
Nome: Maria Silva
Idade: 32
Salario: 4500.75
Dados gravados em funcionario.csv.
```

Conteúdo de `funcionario.csv` após a execução:

```text
Nome,Idade,Salario
Maria Silva,32,4500.75
```

## Exercício 27 — Ler e formatar funcionario.csv

Arquivo: `ex27.c`

```text
Nome   : Maria Silva
Idade  : 32 anos
Salario: R$ 4500.75
```

## Exercício 28 — Somar inteiros de um arquivo

Arquivo: `ex28.c`

```text
Nome do arquivo (ex: numeros.txt): numeros.txt
4 numeros lidos. Soma = 100
```

## Exercício 29 — Copiar arquivo origem para destino

Arquivo: `ex29.c`

```text
Arquivo de origem: teste.txt
Arquivo de destino: copia.txt
Arquivo copiado com sucesso.
```

Conteúdo de `copia.txt` após a execução:

```text
Primeira linha de um arquivo.
```

## Exercício 30 — Menu com arquivo (do-while e funções)

Arquivo: `ex30.c`

```text

=== MENU ===
1) Inserir dados
2) Exibir todos os dados
3) Sair
Escolha: 1
Digite o dado: Primeiro dado
Dado inserido.

=== MENU ===
1) Inserir dados
2) Exibir todos os dados
3) Sair
Escolha: 1
Digite o dado: Segundo dado
Dado inserido.

=== MENU ===
1) Inserir dados
2) Exibir todos os dados
3) Sair
Escolha: 2
--- Dados ---
1: Primeiro dado
2: Segundo dado

=== MENU ===
1) Inserir dados
2) Exibir todos os dados
3) Sair
Escolha: 3
Saindo...
```

Conteúdo de `dados.txt` após a execução:

```text
Primeiro dado
Segundo dado
```

## Exercício 31 — Função soma

Arquivo: `ex31.c`

```text
Digite dois numeros: 7 5
7 + 5 = 12
```

## Exercício 32 — Função exibeMensagem

Arquivo: `ex32.c`

```text
Bem-vindo ao sistema!
```

## Exercício 33 — Fatorial iterativo

Arquivo: `ex33.c`

```text
Digite N (0 a 20): 5
5! = 120
```

## Exercício 34 — Fatorial recursivo

Arquivo: `ex34.c`

```text
Digite N (0 a 20): 5
5! = 120
```

**Comparação com a versão iterativa (ex33):** as duas retornam o mesmo resultado (5! = 120).

- **Recursiva:** mais próxima da definição matemática (`n! = n * (n-1)!`) e com código mais curto, mas cada chamada ocupa espaço na pilha e há custo extra das chamadas.
- **Iterativa (for):** usa memória constante e é um pouco mais eficiente; o código é um pouco mais longo.

## Exercício 35 — Função validarCPF (formato)

Arquivo: `ex35.c`

**Execução 1:**

```text
Digite o CPF: 123.456.789-01
Formato de CPF valido.
```

**Execução 2:**

```text
Digite o CPF: 12345
Formato de CPF invalido.
```

## Exercício 36 — Struct Aluno e mediaTurma

Arquivo: `ex36.c`

```text
Quantos alunos (1 a 50)? 3
Nome do aluno 1 (sem espacos): Ana
Nota de Ana: 8.5
Nome do aluno 2 (sem espacos): Bruno
Nota de Bruno: 7
Nome do aluno 3 (sem espacos): Carla
Nota de Carla: 9.5
Media da turma: 8.33
```

## Exercício 37 — Função dobrar (ponteiro)

Arquivo: `ex37.c`

```text
Digite um numero: 21
Valor dobrado: 42
```

## Exercício 38 — util.c / util.h / main.c

Arquivo: `ex38.c` (pasta `ex38/`)

```text
Digite dois numeros: 8 4
Soma: 12
Soma dobrada: 24
```

## Exercício 39 — Função ordenar (Bubble Sort)

Arquivo: `ex39.c`

```text
Antes : 64 25 12 22 11 90 3 
Depois: 3 11 12 22 25 64 90 
```

## Exercício 40 — Função buscar

Arquivo: `ex40.c`

**Execução 1:**

```text
Digite a chave a buscar: 9
Chave 9 encontrada no indice 2.
```

**Execução 2:**

```text
Digite a chave a buscar: 99
Chave 99 nao encontrada.
```

## Exercício 41 — Conceito de ponteiro (*p e &variavel)

Arquivo: `ex41.c`

```text
Valor de x            : 10
Endereco de x (&x)    : 0x7ffdc92ad2ac
Valor de p (endereco) : 0x7ffdc92ad2ac
Valor apontado (*p)   : 10
```

**Resposta:**

- **O que é um ponteiro:** é uma variável que guarda um *endereço de memória*, normalmente o endereço de outra variável. Declara-se com `*`, por exemplo `int *p;`.
- **`&variavel` (operador de endereço):** devolve o *endereço* onde a variável está guardada. Em `p = &x;`, `p` passa a guardar o endereço de `x`.
- **`*p` (operador de desreferência):** acessa o *valor* guardado no endereço para o qual `p` aponta. `printf("%d", *p)` imprime o valor de `x`, e `*p = 5;` altera `x`.
- **Resumindo:** `&` vai da variável para o endereço; `*` vai do endereço para o valor. (Na declaração `int *p`, o `*` apenas indica que `p` é um ponteiro.)

## Exercício 42 — Ponteiro p apontando para x

Arquivo: `ex42.c`

```text
Valor de x via ponteiro: 10
```

## Exercício 43 — Alterar x pelo ponteiro

Arquivo: `ex43.c`

```text
Novo valor de x: 20
```

## Exercício 44 — Percorrer array com ponteiro

Arquivo: `ex44.c`

```text
Elemento 0: 5
Elemento 1: 10
Elemento 2: 15
Elemento 3: 20
Elemento 4: 25
```

## Exercício 45 — Função troca

Arquivo: `ex45.c`

```text
Digite dois numeros: 3 9
Antes : x = 3, y = 9
Depois: x = 9, y = 3
```

## Exercício 46 — Struct Pessoa e inicializar

Arquivo: `ex46.c`

```text
Nome: Pedro Felipe
Idade: 20
Pessoa: Pedro Felipe, 20 anos
```

## Exercício 47 — Soma com aritmética de ponteiros

Arquivo: `ex47.c`

```text
Digite 5 inteiros:
1
2
3
4
5
Soma = 15
```

## Exercício 48 — Ponteiro para ponteiro

Arquivo: `ex48.c`

```text
Valor de x via q: 42
```

## Exercício 49 — malloc com ponteiros e free

Arquivo: `ex49.c`

```text
Tamanho do array: 5
vetor[0] = 0
vetor[1] = 10
vetor[2] = 20
vetor[3] = 30
vetor[4] = 40
```

## Exercício 50 — Array de ponteiros para funções

Arquivo: `ex50.c`

**Execução 1:**

```text
0-Soma  1-Subtracao  2-Multiplicacao  3-Divisao
Escolha: 0
Digite dois numeros: 2 3
Resultado: 5.00
```

**Execução 2:**

```text
0-Soma  1-Subtracao  2-Multiplicacao  3-Divisao
Escolha: 3
Digite dois numeros: 8 0
Erro: divisao por zero!
```
