#ifndef ENTIDADES_H
#define ENTIDADES_H

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
    //Set
    void setNome(string nome);
    void setTelefone(string ddi, string ddd, string numero);
    void setEmail(string local, string dominio);
    void setSenha(string senha);
    void setCpf(string cpf);

    //Get
    Nome getNome();
    Telefone getTelefone();
    Email getEmail();
    Senha getSenha();
    Cpf getCpf();

    //Construtor
    Usuario() = default;
};

class Reserva {

private:
    Codigo_reserva codigo;
    Assento assento;
    Bagagem bagagem;

public:
    //Set
    void setCodigo(string codigo);
    void setAssento(char tipo);
    void setBagagem(int numero);

    //Get
    Codigo_reserva getCodigo();
    Assento getAssento();
    Bagagem getBagagem();

    //Construtor
    Reserva() = default;
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
    //Set
    void setCodigo(string codigo);
    void setCidade_origem(string cidade);
    void setEstado_origem(string estado);
    void setCidade_destino(string cidade);
    void setEstado_destino(string estado);
    void setData(string data);
    void setDuracao(int duracao);
    void setVagas(int vagas);
    void setPreco(double preco);

    //Get
    Codigo_carona getCodigo();
    Cidade getCidade_origem();
    Estado getEstado_origem();
    Cidade getCidade_destino();
    Estado getEstado_destino();
    Data getData();
    Duracao getDuracao();
    Vagas getVagas();
    Preco getPreco();

    //Construtor
    Carona() = default;
};

class Conta {

private:
    Codigo_banco banco;
    Numero_agencia agencia;
    Numero_conta numero;

public:
    //Set
    void setBanco(string codigo);
    void setAgencia(string numero, int digito);
    void setNumero(string numero, int digito);

    //Get
    Codigo_banco getBanco();
    Numero_agencia getAgencia();
    Numero_conta getNumero();

    //Construtor
    Conta() = default;

};


#endif // ENTIDADES_H
