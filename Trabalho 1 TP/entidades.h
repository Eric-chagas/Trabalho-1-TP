#ifndef ENTIDADES_H
#define ENTIDADES_H

#include "dominios.h"

using namespace std;

/** @brief Declaração das classes entidade e seus métodos
  * @author Eric Chagas de Oliveira
  * @since 01-10-2019
  *
  * O arquivo header contem a declaração de todas as classes e métodos, e para que sejam utilizados em um sistema
  * basta a inclusão desse arquivo.
  * As classes possuem atributos que são objetos de algum tipo presente nas classes Domínio.
  * Estão presentes métodos getters e setters, que servem para retornar um valor armazenado no objeto ao usuário, e
  * armazenar um valor no objeto respectivamente.
  */

  /** @brief Classe Usuario
  *
  * Classe que detém as informações pessoais do usuário do sistema, identificados como objetos do tipo nome, telefone,
  * email, senha e cpf.
  *
  */
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

/** @brief Classe Reserva
  *
  * Classe que detém as informações da reserva da carona, identificados por objetos dos tipos Codigo_reserva, Assento e
  * Bagagem.
  *
  */
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

/** @brief Classe Carona
  *
  * Classe que detém as informações da carona, identificados por objetos dos tipos Codigo_carona, Cidade, Estado, Data,
  * Duracao, Vagas e Preco.
  *
  */
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

/** @brief Classe Conta
  *
  * Classe que detém as informações da conta bancária de pagamento da carona, identificadas por objetos dos tipos
  * Codigo_banco, Numero_agencia e Numero_conta.
  *
  */
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
