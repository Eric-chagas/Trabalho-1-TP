/*Biblioteca de classes Entidade*/
#include <iostream>
#include "dominios.h"

using namespace std;

class Usuario {

private:
    Nome nome;
    Telefone telefone;
    Email email;
    Senha senha;
    Cpf cpf;

public:

};

class Reserva {
    Codigo_reserva codigo;
    Assento assento;
    Bagagem bagagem;
};

class Carona {
    Codigo_carona codigo;
    Cidade cidade_origem;
    Estado estado_origem;
    Cidade cidade_destino;
    Estado estado_destino;
    Data data;
    Duracao duracao;
    Vagas vagas;
    Preco preco;
};

class Conta {
    Codigo_banco banco;
    Agencia agencia;
    Conta conta;
};
