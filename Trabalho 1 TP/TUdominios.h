#ifndef TUDOMINIOS_H_INCLUDED
#define TUDOMINIOS_H_INCLUDED
#include "dominios.h"
#include "entidades.h"

using namespace std;

class TUAssento {
public:
    void validarTipo(); //char
};

class TUBagagem {
public:
    void validarNumero(); //int
};

class TUCodigo_banco{
public:
    void validarCodigo(); //string
};

class TUCodigo_carona{
public:
    void validarCodigo(); //string
};

class TUCodigo_reserva{
public:
    void validarCodigo(); //string
};

class TUCidade{
public:
    void validarCidade(); //string
};

class TUCpf{
public:
    void validarCpf(); //string
};

class TUData{
public:
    void validarData(); //string
};

class TUDuracao{
public:
    void validarDuracao(); //int
};

class TUEstado{
public:
    void validarEstado(); //string
};

class TUEmail{
public:
    void validarEmail(); //strings

};

class TUNome{
public:
    void validarNome(); //string
};

class TUNumero_agencia{
public:
    void validarNumero_agencia(); //string e int
};

class TUNumero_conta{
public:
    void validarNumero_conta(); //string e int
};

class TUPreco{
public:
    void validarPreco(); //double
 };

class TUTelefone{
public:
    void validarTelefone(); //strings
 };

class TUSenha{
public:
    void validarSenha(); //string
 };

class TUVagas{
public:
    void validarVagas(); //int
 };


#endif // TUDOMINIOS_H_INCLUDED
