#include <iostream>
using namespace std;

long long factorial(int n);

int main() {
    int n;  
    cout << "ingrese el numero que desea calcular el factorial" << endl;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}

long long factorial(int n)
{
    unsigned long long result = 1; /*se usa unsigned para que la variable tome signo positivo*/
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}