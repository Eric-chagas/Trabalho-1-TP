#ifndef TUENTIDADES_H_INCLUDED
#define TUENTIDADES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"
#include "TUdominios.h"

using namespace std;

class TUUsuario {
public:
    void validarUsuario();
};

class TUReserva {
public:
    void validarReserva();
};

class TUCarona {
public:
    void validarCarona();
};

class TUConta {
public:
    void validarConta();
};

#endif // TUENTIDADES_H_INCLUDED
