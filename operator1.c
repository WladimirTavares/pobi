#include <iostream>

using namespace std;


int main()
{
    
    int a = 12;
    int b = 8;
    char c = 'w';
    float d = 0.1;
    printf("%.18f\n", d);
    float e = 0.7;
    printf("%.18f\n", e);
    float f = 0.6;
    printf("%.18f\n", f);
    
    printf("%.18f %.18f\n", d, e-f);
    
    
    bool cond1 = 5 > 3; //true
    bool cond2 = a > 15; // false
    bool cond3 = a == b; // false
    bool cond4 = c >= 'a'; //true   
    bool cond5 = d == e-f; 
    printf("%d\n", cond5);
    
    

    return 0;
}
