#include <iostream>
using namespace std;

void intercambiarJugos(float& vaso1,float& vaso2);


int main() {
    float jugoNaranja,jugoManzana;
    jugoNaranja = 10;
    jugoManzana = 20;
    intercambiarJugos(jugoNaranja,jugoManzana);
    cout << "la cantidad de jugo de naranja es: "<<jugoNaranja<<" la cantidad de jugo de manzana es: "<<jugoManzana<<endl;
    return 0;
}


void intercambiarJugos(float& vaso1,float& vaso2)
{
    float temp;
    temp = vaso1;
    vaso1 = vaso2;
    vaso2 = temp;
}