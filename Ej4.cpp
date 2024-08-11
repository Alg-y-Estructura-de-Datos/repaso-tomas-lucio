#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int op;
    do
    {
        cout << "ingrese la operacion que desea realizar" <<endl;
        cin >> op;

        switch (op)
        {
            case 1:
                int a,b,suma;
                cin>>a,b;
                suma = a + b;
                cout << "el resultado de la suma es: " << suma << endl;
                break;
            case 2:
                int radio;
                cin >>radio;
                cout << "el resultado de el area del circulo es: " << 2*M_PI*radio*radio << endl;
                break;
            case 3:
                int base,exponente;
                cin >> base,exponente;
                pow(base,exponente);
                break;
            
            default:
                return -1;
                break;
        }
    }
    while (op != 0);
}