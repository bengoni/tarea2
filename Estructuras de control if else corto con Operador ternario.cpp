#include <iostream>
using namespace std;

int main() {
    int n1 = 0, n2 = 0, n3 = 0, promedio = 0;
    
    cout << "Ingrese Nota 1: ";
    cin >> n1;
    cout << "Ingrese Nota 2: ";
    cin >> n2;
    cout << "Ingrese Nota 3: ";
    cin >> n3;
    
    promedio = (n1 + n2 + n3) / 3;
    string mensaje = promedio >= 61 ? "Aprobado" : "Reprobado";
    
    cout << mensaje << endl;
    system("pause");
    return 0;
}
