#ifndef ARBOLBIN_H
#define ARBOLBIN_H
#include <iostream>
#include <stdlib.h>
#include "NodoBinario.h"
using namespace std;

class ArbolBin{
    public:

        ArbolBin();
        ArbolBin(NodoBinario* root);
        virtual ~ArbolBin();
        void insertNodo(NodoBinario** root, NodoBinario* child);
        void deleteNodo(string);
        void preorden(NodoBinario* root);
        void inorden(NodoBinario* root);
        void posorden(NodoBinario* root);
        void primos(NodoBinario* root);
        void pares(NodoBinario* root);
        void impares(NodoBinario* root);
        int suma(NodoBinario* root);
        int maximo(NodoBinario* root);
        int minimo(NodoBinario* root);
        int contar(NodoBinario* root);
        int altura(NodoBinario* root);
    protected:

    private:

        NodoBinario* root;
        bool isPrimo(int numero, int limit);
        int maxValue(int numero1, int numero2);
};
#endif // ARBOLBIN_H
