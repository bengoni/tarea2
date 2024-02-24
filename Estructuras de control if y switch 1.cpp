#include <iostream>
using namespace std;

int main() {
    int num = 0;

    cout << "Ingrese el numero: ";
    cin >> num;

    if (num > 0) {
        cout << "Positivo" << endl;
    } else if (num == 0) {
        cout << "Neutro" << endl;
    } else {
        cout << "Negativo" << endl;
    }

    cout << "Ambito general" << endl;

    return 0;
}
