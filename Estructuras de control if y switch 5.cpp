#include <iostream>
using namespace std;

int main() {
    int codigo = 0;
    cout << "Ingrese codigo de areas: ";
    cin >> codigo;

    switch (codigo) {
        case 501:
            cout << "Balice" << endl;
            break;
        case 502:
            cout << "Guatemala" << endl;
            break;
        case 503:
            cout << "Salvador" << endl;
            break;
        case 504:
            cout << "Honduras" << endl;
            break;
        case 505:
            cout << "Nicaragua" << endl;
            break;
        case 506:
            cout << "Costa Rica" << endl;
            break;
        case 507:
            cout << "Panama" << endl;
            break;
        default:
            cout << "Codigo de area no reconocido" << endl;
            break;
    }

    return 0;
}
