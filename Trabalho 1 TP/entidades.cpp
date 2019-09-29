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

private:
    Codigo_reserva codigo;
    Assento assento;
    Bagagem bagagem;

public:
};

class Carona {

private:
    Codigo_carona codigo;
    Cidade cidade_origem;
    Estado estado_origem;
    Cidade cidade_destino;
    Estado estado_destino;
    Data data;
    Duracao duracao;
    Vagas vagas;
    Preco preco;

public:
};

class Conta {

private:
    Codigo_banco banco;
    Numero_agencia agencia;
    Numero_conta numero;

public:
};
