#include <iostream>

using namespace std;

int main() {
    const int CANTIDAD_PALABRAS = 10;
    const int TAM_PALABRA = 20;
    char arre[CANTIDAD_PALABRAS * TAM_PALABRA];
    int Tam_Memo = 0;

    cout << "Ingrese " << CANTIDAD_PALABRAS << " palabras (separadas por espacio): " << endl;

    // Creamos un puntero que apunta al inicio exacto de la línea de memoria
    char* puntero_memoria = arre;

    // 1. LECTURA ULTRA EFICIENTE: El puntero avanza sumando en línea recta
    for(int i = 0; i < CANTIDAD_PALABRAS; i++) {
        cin >> puntero_memoria;
        puntero_memoria += TAM_PALABRA; // Avanza exactamente 10 bytes al siguiente bloque
    }

    cout << "\n--- Palabras recuperadas a maxima velocidad ---" << endl;

    // Reiniciamos el puntero al inicio del arreglo lineal
    puntero_memoria = arre;

    // 2. IMPRESIÓN ULTRA EFICIENTE: Sin multiplicaciones ocultas
    for(int j = 0; j < CANTIDAD_PALABRAS; j++) {
        cout << "Palabra [" << j << "]: " << puntero_memoria << endl;
        puntero_memoria += TAM_PALABRA; // Salta al siguiente bloque de memoria
    }

    return 0;
}

