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
