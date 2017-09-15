#ifndef NODOBINARIO_H
#define NODOBINARIO_H
#include <iostream>

using namespace std;

class NodoBinario {
    public:

        NodoBinario(string dataN, int valueN);
        virtual ~NodoBinario();
        string getData();
        void setData(string dataN);
        int getValue();
        void setValue(int valueN);
        NodoBinario* getIzq();
        void setIzq(NodoBinario* izqN);
        NodoBinario* getDer();
        void setDer(NodoBinario* derN);
        string toString();

    protected:

    private:

        int value;
        string data;
        NodoBinario* izq;
        NodoBinario* der;
};
#endif // NODOBINARIO_H
