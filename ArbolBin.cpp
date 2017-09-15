#include "ArbolBin.h"

ArbolBin::ArbolBin() {
    root = NULL;
}

ArbolBin::ArbolBin(NodoBinario* root) {
    this ->root = root;
}

ArbolBin::~ArbolBin() {}

void ArbolBin::insertNodo(NodoBinario** root, NodoBinario* child) {
    if(*root == NULL) {
        *root = child;
    } else {
        NodoBinario* auxiliar = *root;
        while(true) {
            if(auxiliar -> getValue() < child -> getValue()) {
                if(auxiliar -> getDer() == NULL) {
                    auxiliar->setDer(child);
                    break;
                } else {
                    auxiliar = auxiliar -> getDer();
                }
            } else {
                if(auxiliar -> getValue() > child -> getValue()) {
                    if(auxiliar -> getIzq() == NULL) {
                        auxiliar -> setIzq(child);
                        break;
                    } else {
                        auxiliar = auxiliar -> getIzq();
                    }
                } else {
                    cout << "Ya existe un Nodo con ese Value" << endl;
                }
            }
        }
    }
}

void ArbolBin::preorden(NodoBinario* root) {
    if(root == NULL) {
        return;
    } else {
        cout << root ->toString() << " ";
        preorden(root -> getIzq());
        preorden(root -> getDer());
    }
}

void ArbolBin::inorden(NodoBinario* root) {
    if(root == NULL) {
        return;
    } else {
        inorden(root -> getIzq());
        cout << root ->toString() << " ";
        inorden(root -> getDer());
    }
}

void ArbolBin::posorden(NodoBinario* root) {
    if(root == NULL) {
        return;
    } else {
        posorden(root -> getIzq());
        posorden(root -> getDer());
        cout << root ->toString() << " ";
    }
}

bool ArbolBin::isPrimo(int numero, int limit) {
    bool estado = true;
    if(limit > 1) {
        if(limit < numero) {
            if(numero%limit == 0) {
                estado = false;
            } else {
                estado = isPrimo(numero, limit-1);
            }
        } else {
            estado = isPrimo(numero, limit-1);
        }
    }
    return estado;
}

void ArbolBin::primos(NodoBinario* root) {
    if(root == NULL) {
        return;
    } else {
        if(ArbolBin::isPrimo(root -> getValue(), root -> getValue())) {
            cout << root -> toString() << " ";
        }
        primos(root -> getIzq());
        primos(root -> getDer());
    }
}

void ArbolBin::pares(NodoBinario* root) {
    if(root == NULL) {
        return;
    } else {
        if(root -> getValue()%2 == 0) {
            cout << root -> toString() << " ";
        }
        pares(root -> getIzq());
        pares(root -> getDer());
    }
}

void ArbolBin::impares(NodoBinario* root) {
    if(root == NULL) {
        return;
    } else {
        if(root -> getValue()%2 != 0) {
            cout << root -> toString() << " ";
        }
        impares(root -> getIzq());
        impares(root -> getDer());
    }
}

int ArbolBin::suma(NodoBinario* root) {
    int s;
    if(root == NULL) {
        s = 0;
    } else {
        s = root -> getValue();
        s = s + suma(root -> getIzq()) + suma(root -> getDer());
    }
    return s;
}

int ArbolBin::maximo(NodoBinario* root) {
    int m;
    if(root == NULL) {
        exit(0);
    } else {
        m = root -> getValue();
        if(root -> getDer() != NULL) {
            m = maximo(root -> getDer());
        }
    }
    return m;
}

int ArbolBin::minimo(NodoBinario* root) {
    int m;
    if(root == NULL) {
        exit(0);
    } else {
        m = root -> getValue();
        if(root -> getIzq() != NULL) {
            m = minimo(root -> getIzq());
        }
    }
    return m;
}

int ArbolBin::contar(NodoBinario* root){
    int c;
    if(root == NULL) {
        exit(0);
    } else {
        c = 1 + contar(root -> getIzq()) + contar(root -> getDer());
    }
    return c;
}

int ArbolBin::maxValue(int numero1, int numero2) {
    if(numero1 >= numero2) {
        return numero1;
    } else {
        return numero2;
    }
}

int ArbolBin::altura(NodoBinario* root) {
    int a;
    if(root == NULL) {
        a = 0;
    } else {
        int i = altura(root -> getIzq());
        int j = altura(root -> getDer());
        a = 1 + maxValue(i, j);
    }
    return a;
}
