#ifndef TUENTIDADES_H_INCLUDED
#define TUENTIDADES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"
#include "TUdominios.h"

using namespace std;

/** @brief Declaração das classes de teste das classes entidade e seus métodos
  * @author Eric Chagas de Oliveira
  * @since 01-10-2019
  *
  * O arquivo header contem a declaração de todas as classes e métodos, e para que sejam utilizados em um sistema
  * basta a inclusão desse arquivo. Caso seja necessario testar o funcionamento das classes entidade, esse arquivo deve ser
  * incluido.
  *
  * Os métodos checam se os dados recebidos correspondem com o esperado, e em caso de tipo invalido, é lançada excessão
  * avisando o usuário do erro.
  *
  */

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
