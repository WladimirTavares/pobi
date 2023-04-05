# Aula 1

## Estrutura

Um programa em C, tem a seguinte estrutura:

```cpp
#Arquivo de include das bibliotecas
#include <stdio.h> # funções pré-definidas de entrada e saída
#include <math.h> # funções pré-definidas de matemática

#função principal
int main(){
    return 0;
}
```
As principais bibliotecas da linguagem C pode ser encontrada neste link:

[https://cplusplus.com/reference/clibrary/](https://cplusplus.com/reference/clibrary/)

Na biblioteca stdio.h, temos as funções printf e scanf para realizar a entrada e saída formatada.


```cpp
#Arquivo de include das bibliotecas
#include <stdio.h> # funções pré-definidas de entrada e saída
#include <math.h> # funções pré-definidas de matemática

#função principal
int main(){
    printf("Hello World\n");
    printf("%d", abs(-10) );
    return 0;
}
```

A função printf possui vários detalhes. Inicialmente, vamos ignorar esse detalhes. Vamos considerar que a função printf mostra na tela um texto com algumas informações extra definidas por alguns formatos como %d ou \n.


## Comentário

Na linguagem C, podemos escrever comentários nos nossos programa para facilitar o entendimento futuro do código.

Os comentários podem ser de uma linha ou múltiplas linhas:

```cpp
#Arquivo de include das bibliotecas
#include <stdio.h> # funções pré-definidas de entrada e saída
#include <math.h> # funções pré-definidas de matemática

# comentário de uma linha

/*
Comentário 
de 
múltiplas linhas
*/

#função principal
int main(){
    return 0;
}
```

## Resolvendo problemas com o uso do computador

Na matemática, encontramos problemas com a seguinte estrutura:

```
Um homem de 30 anos tem 5 vezes a idade do filho. Qual é a idade do filho?
```

Observe que para resolver este problema, precisamos resolver o seguinte problema:

```
Buscamos um número que, multiplicado por 5, dê 30.
```

Esse problema, pode ser resolvido com a operação da divisão.

Podemos considerar um problema mais genérico:

```
Um homem de x anos tem y vezes a idade do filho. Qual é a idade do filho?
```

A resposta para o problema é:

```
Buscamos um número que, multiplicado por y, dê x.
```

Podemos resolver o problema com a seguinte sequência de passos:

1. Leia x
2. Leia y
3. $resposta \gets x/y$

É comum ao construir um programa precisemos guardar valores intermediários. Esses valores podem ser utilizados em etapas posteriores do programa ou em outras partes do código.

Para armazenar valores intermediários em um programa, podemos utilizar variáveis. Uma variável é um espaço na memória do computador onde podemos armazenar um valor que pode ser acessado e modificado ao longo da execução do programa.


```cpp
#Arquivo de include das bibliotecas
#include <stdio.h> # funções pré-definidas de entrada e saída
#include <math.h> # funções pré-definidas de matemática


#função principal
int main(){
    int x; #declarando uma variável inteira
    int y; # declarando uma variável inteira
    int resposta; #declarando uma variável inteira

    scanf("%d", &x); # idade do homem
    scanf("%d", &y); # relação entre a idade do homem e do filho

    resposta = y/x;

    printf("%d\n", resposta);

    return 0;
}
```

## Variável

Uma variável possui vários atributos. Vamos considerar dois atributos: identificador e o tipo

Um identificador válido deve começar com uma letra seguido de uma sequência de letras, digitos ou underscore.

```cpp
int a; //identificador válido
int a2; //identificador válido
int idade_homem; //identificador válido
int 2a; //identificado inválido 
int idade$homem; //identificador inválido
```









