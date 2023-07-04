#include <iostream>

using namespace std;
int main() {
    const int max_gene = 50;
    int numgene;
    int herederos[max_gene];
    double area;

    cout << "Ingresar la superficie inicial del terreno: ";
    cin >> area;

    cout << "Ingresar el numero de generaciones: ";
    cin >> numgene;

    for (int i = 0; i < numgene; i++) {
        cout << "Ingrese el numero de herederos en la generacion " << i + 1 << ": ";
        cin >> herederos[i];
    }

    for (int i = 0; i < numgene; i++) {
        area /= herederos[i];
    }

    cout << "El area de terreno que le corresponde al heredero después de " << numgene << " generaciones es: " << area << endl;

    return 0;
}
