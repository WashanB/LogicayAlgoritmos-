#include <iostream>
using namespace std;

int main()
{
    int num, i;
    int suma = 0; 

    cout << "Ingrese un numero natural: ";
    cin >> num;
    i = 1;
    while (i<=num)
    {
        suma += 1;
        i++;
    }
    
    cout << "La suma de los numeros naturales desde 1 hasta " << num << " es: " << suma << endl;
    return 0;
}
