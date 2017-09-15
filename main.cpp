#include <iostream>
#include "NodoBinario.h"
#include "ArbolBin.h"

using namespace std;

int main() {
    NodoBinario* nodoA = new NodoBinario("A", 2);
    NodoBinario* nodoB = new NodoBinario("B", 1);
    NodoBinario* nodoC = new NodoBinario("C", 4);
    NodoBinario* nodoD = new NodoBinario("D", 3);
    NodoBinario* nodoE = new NodoBinario("E", 7);
    NodoBinario* nodoF = new NodoBinario("F", 22);
    NodoBinario* nodoG = new NodoBinario("G", 20);
    NodoBinario* root = NULL;

    ArbolBin* arbolBinario = new ArbolBin();
    arbolBinario->insertNodo(&root, nodoA);
    arbolBinario->insertNodo(&root, nodoB);
    arbolBinario->insertNodo(&root, nodoC);
    arbolBinario->insertNodo(&root, nodoD);
    arbolBinario->insertNodo(&root, nodoE);
    arbolBinario->insertNodo(&root, nodoF);
    arbolBinario->insertNodo(&root, nodoG);

    arbolBinario -> primos(root);
    int suma = arbolBinario -> altura(root);
    cout << endl;
    cout << suma << endl;
    return 0;
}
