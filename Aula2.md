# Aula 2 - Comando Condicional

## Estrutura do Condicional

A estrutura do comando condicional:
```cpp
if(condição)
    comando1;
```
ou
```cpp
if(condição){
    comando1;
}
```
Se o número de comandos que deve ser executado quando a  ``condição`` for verdadeira for maior que 1 então o uso das chaves é obrigatório.


```cpp
if(condição){
    comando1;
    comando2;
    ...
    comandoN;
}
```

Os comandos que serão executados se uma condição for verdadeira podem ser também um comando condicionaL. Logo, o seguinte programa é válido:

```cpp
if(condição1){
    comando1;
    if(condição2){
        comando2;
        if(condição3){
            comando3;
        }
    }
    
}
```

Note que se a condição1 for verdadeira, a condição2 for verdadeira e condição3 for verdadeira, os seguintes comandos serão executados:

```cpp
comando1;
comando2;
comando3;
```

Por outro lado, se a condição1 for verdadeira, a condição2 for verdadeira e condição3 for falsa, os seguintes comandos serão executados:

```cpp
comando1;
comando2;
```

Por fim, se a condição1 for verdadeira, a condição2 for falsa, os seguintes comandos serão executados:

```cpp
comando1;
```

Note que um mesmo programa pode ter um comportamento diferente dependendo dos comandos condicionais.

Agora, apresentaremos um programa que lê os coeficientes de uma equação de segundo grau, a , b e c (equação $ax^2 + bx + c = 0$ ), e imprime as raizes desta equação (se existir).

```cpp
#include <iostream> //Entrada e saída a partir de fluxos de entrada (stream)
#include <math.h> // a função sqrt está presente na biblioteca math.h

using namespace std;


int main()
{
    float a, b, c;

    cin >> a;//Leitura do coeficiente a
    cin >> b;//Leitura do coeficiente b
    cin >> c;//Leitura do coeficiente c

    float delta = b*b - 4*a*c; //valor de delta

    if(delta < 0){
        cout << "não é possı́vel calcular raizes reais para esta equação\n";
    }else{
        float x1 = (-b + sqrt(delta))/(2*a);
        float x2 = (-b - sqrt(delta))/(2*a);
        cout << "x1 " << x1 << endl;
        cout << "x2 " << x2 << endl;
    }
    return 0;
}
```

Apresentaremos algumas funções presentes na biblioteca ``math.h``:


|Função|	Descrição do comando|
|------|------------------------|
|floor( )|	arredonda para baixo|
|ceil( )|	arredonda para cima|
|sqrt( )|	Calcula raiz quadrada|
|pow(base, expoente)|	$base^{expoente}$|
|sin( )	|seno|
|cos( )	|cosseno|
|tan( )	|Tangente|
|log( )	|logaritmo natural|
|log10( )|	logaritmo base 10|


## Criando condições com caracteres

Uma variável do tipo caractere pode ser convertida para uma variável do tipo inteira dependendo da expressão avaliada. Considere a seguinte trecho:

```cpp
char ch;
...
bool cond =  ch >= 'a' && ch <= 'z'
```

Neste caso, a variável `ch` é convertida para inteiro por causa do operador relacional <= e >=. Os valores de cada caractere na linguagem C/C++ é dado pela tabela ASCII:


![Tabela ASCII](http://2.bp.blogspot.com/-dW9CA_8lGtU/VnAhc-kv__I/AAAAAAAA3CY/ANBbi7bwYOw/s640/Ashampoo_Snap_2015.12.15_12h18m58s_035_.png)


Na tabela ASCII, os caracteres maiusculos vem antes dos caracteres minusculos. Logo,

```cpp
bool cond1 = 'A' < 'a';  // 65 < 97
bool cond1 = 'R' < 'a'; // 82 < 97
```

Para transformar um caractere de minúsculo para maiúsculo, podemos realizar o seguinte cálculo:

```cpp
if(ch >= 'a' && ch <= 'z'){
    offset = ch - 'a'; // deslocamento
    ch = 'A' + offset
}
```

Note que a distância do 'g' para o 'a' será a mesma distância do 'G para 'A'.

**Exercícios**

1. Faça um programa que recebe quatro inteiros $num1,den1,num2,den2$ representando duas frações $\frac{num1}{den1}$ e $\frac{num2}{den2}$. Determine se a primeira fração é maior, menor ou igual a segunda fração.

Por exemplo, comparando a  fração $\frac{2}{3}$ e $\frac{3}{5}$. Uma maneira de comparar as duas frações é colocá-las com o mesmo denominador.

Para isso, multiplique o numerador e o denominador da primeira equação pelo denominador da segunda:

$$\frac{2}{3} \times \frac{5}{5} = \frac{10}{15}$$

Em seguida, multiplique o numerador e denominador da segunda fração pelo denominador da primeira equação:

$$\frac{3}{5} \times \frac{3}{3} = \frac{9}{15}$$

Agora, basta comparar o numerador das duas equações equivalentes.

```cpp
#include <iostream> //Entrada e saída a partir de fluxos de entrada (stream)

using namespace std;


int main()
{
    int num1, den1, num2, den2;

    cin >> num1;
    cin >> den1;
    cin >> num2;
    cin >> den2;

    int _num1 = num1*den2;
    int _num2 = num2*den1;

    if( _num1 > _num2 ){
        cout << "fração 1 é maior";
    }else if( _num1 < _num2 ){
        cout << "fração 1 é menor";
    }else{
        cout << "fração1 e fração2 são iguais"
    }
    
    return 0;
}
```












