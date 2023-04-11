# Aula 1

## Estrutura

Um programa em C, tem a seguinte estrutura:

```cpp
//Arquivo de include das bibliotecas
#include <stdio.h> // funções pré-definidas de entrada e saída
#include <math.h> // funções pré-definidas de matemática

//função principal
int main(){
    return 0;
}
```
As principais bibliotecas da linguagem C pode ser encontrada neste link:

[https://cplusplus.com/reference/clibrary/]([https://en.cppreference.com/w/c/header])

Na biblioteca stdio.h, temos as funções printf e scanf para realizar a entrada e saída formatada.


```cpp
//Arquivo de include das bibliotecas
#include <stdio.h> // funções pré-definidas de entrada e saída
#include <math.h> // funções pré-definidas de matemática

//função principal
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
//Arquivo de include das bibliotecas
#include <stdio.h> // funções pré-definidas de entrada e saída
#include <math.h> // funções pré-definidas de matemática

// comentário de uma linha

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
//Arquivo de include das bibliotecas
#include <stdio.h> // funções pré-definidas de entrada e saída
#include <math.h> // funções pré-definidas de matemática


//função principal
int main(){
    int x; //declarando uma variável inteira
    int y; //declarando uma variável inteira
    int resposta; //declarando uma variável inteira

    scanf("%d", &x); // idade do homem
    scanf("%d", &y); //relação entre a idade do homem e do filho

    resposta = y/x;

    printf("%d\n", resposta);

    return 0;
}
```

## Variável

Uma variável possui vários atributos. Vamos considerar dois atributos: identificador e o tipo

## Identificador
Um identificador válido deve começar com uma letra seguido de uma sequência de letras, digitos ou underscore.

```cpp
int a; //identificador válido
int a2; //identificador válido
int idade_homem; //identificador válido
int 2a; //identificado inválido 
int idade$homem; //identificador inválido
```

## Tipos básicos

Os tipos básico podem ser classificados em:

* **Tipos caracteres**: armazenas caracteres como 'a' ou 'A'.
* **Tipos númericos:** armazenam valores númericos inteiros como 7 ou 1024.
* **Tipos ponto-flutuantes**: armazenam valores númericos reais como 3.14

* **Tipos booleanos**: os tipos booleanos são suportados na linguagem C++ utilizando as constantes `true` ou `false`.


## Operadores aritméticos

|Operandos  | Operador   | Resultado|
|-----------|------------|----------|
|int e int  | +,-,*,/,%  | int      |
|int e float| +,-,*,/  | float|
|float e int| +,-,*,/  | float|
|int e float| %  | invalid operands to binary %|

As expressões mistas na linguagem C são expressões
que envolve operações com operandos de tipos diferentes. 
Neste caso, pode ocorrer a necessidade de conversão de tipos para que a 
operação seja realizada corretamente. Geralmente, o compilador
converte os operandos para um tipo comum capaz de armazenar todos os 
operandos da expressão. Por exemplo,

```cpp
char a = 10;
int resultado = a + 2; // 'a' é promovido para int e a operação é realizada normalmente
printf("%d\n", resultado); // imprime 12
```

## Operadores relacionais 

Os operadores relacionais são usados para comparar operandos compatíveis devolvendo um valor lógico

```cpp
int a = 12;
int b = 8;
char c = 'w';
float d = 0.1; //0.100000001490116119
float e = 0.7; //0.699999988079071045
float f = 0.6; //0.600000023841857910

bool cond1 = 5 > 3; //true
bool cond2 = a > 15; // false
bool cond3 = a == b; // false
bool cond4 = c >= 'a'; //true
//d = 0.100000001490116119
//e-f = 0.099999964237213135
bool cond5 = d == e- f; // false
```

## Operadores lógicos

Os operadores lógicos são usados para construir expressões lógicas mais complexas.

Por exemplo, queremos testar se um número a está no intervalo entre 10 e 20.

```cpp
bool cond = a >= 10 && a <= 20
``` 

Se quisermos testar se um número a não está no intervalo entre 10 e 20

```cpp
bool cond = a < 10 || a > 20
``` 

ou podemos utilizar a negação lógica:

```cpp
bool cond = !(a >= 10 && b <= 20)
``` 

Por exemplo, queremos testar se um número a está no intervalo entre 10 e 20 e é um número par

```cpp
bool cond = a >= 10 && a <= 20 && a % 2 == 0
``` 

















