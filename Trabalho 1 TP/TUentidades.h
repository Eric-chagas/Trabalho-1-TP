#ifndef TUENTIDADES_H_INCLUDED
#define TUENTIDADES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"
#include "TUdominios.h"

using namespace std;

class TUUsuario {
public:
    void validarNome();
    void validarTelefone();
    void validarEmail();
    void validarSenha();
    void validarCpf();
};

class TUReserva {
public:
    void validarCodigo();
    void validarAssento();
    void validarBagagem();
};

class TUCarona {
public:
    void validarCodigo();
    void validarCidade_origem();
    void validarEstado_origem();
    void validarCidade_destino();
    void validarEstado_destino();
    void validarData();
    void validarDuracao();
    void validarVagas();
    void validarPreco();
};

class TUConta {
public:
    void validarBanco();
    void validarAgencia();
    void validarNumero();
};

#endif // TUENTIDADES_H_INCLUDED
