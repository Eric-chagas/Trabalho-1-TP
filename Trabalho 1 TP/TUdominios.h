#ifndef TUDOMINIOS_H_INCLUDED
#define TUDOMINIOS_H_INCLUDED
#include "dominios.h"
#include "entidades.h"

using namespace std;

/** @brief Declaração das classes de teste das classes domínio e seus métodos
  * @author Eric Chagas de Oliveira
  * @since 01-10-2019
  *
  * O arquivo header contem a declaração de todas as classes e métodos, e para que sejam utilizados em um sistema
  * basta a inclusão desse arquivo. Caso seja necessario testar o funcionamento das classes domínio, esse arquivo deve
  * ser incluido.
  * Os métodos checam se os dados recebidos correspondem com o esperado, e em caso de tipo invalido, é lançada excessão
  * avisando o usuário do erro.
  */

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
