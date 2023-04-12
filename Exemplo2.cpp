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
