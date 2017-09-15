#include "NodoBinario.h"

#include <sstream>

NodoBinario::NodoBinario(string dataN, int valueN) {
    data = dataN;
    value = valueN;
    izq = NULL;
    der = NULL;
}

NodoBinario::~NodoBinario(){}

string NodoBinario::getData() {
    return data;
}

void NodoBinario::setData(string dataN) {
    data = dataN;
}

int NodoBinario::getValue() {
    return value;
}

void NodoBinario::setValue(int valueN) {
    value = valueN;
}

NodoBinario* NodoBinario::getIzq() {
    return izq;
}

void NodoBinario::setIzq(NodoBinario* izqN) {
    izq = izqN;
}

NodoBinario* NodoBinario::getDer() {
    return der;
}

void NodoBinario::setDer(NodoBinario* derN) {
    der = derN;
}

string NodoBinario::toString() {
    stringstream str;
    str << getData() << "(" << getValue() << ")";
    return str.str();
}
