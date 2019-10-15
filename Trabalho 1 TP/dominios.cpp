/*Biblioteca de classes Domínio*/
#include <iostream>
#include "dominios.h"

using namespace std;

//Classe ASSENTO

/** @brief Implementação dos métodos das classes domínio
  * @author Eric Chagas de Oliveira
  * @since 01-10-2019
  * A Implementação dos métodos é realizada nesse arquivo, e a declaração no arquivo header correspondente
  * de forma a facilitar a organização do sistema atravéz de módulos.
  */

/** @brief Método construtor
  *
  * É o método utilizado para inicializar atributos ou executar métodos no momento de instanciamento do objeto.
  */

Assento::Assento(char tipo)
{
    this->tipo = tipo;
}

/** @brief Método set
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado ou protegido do objeto, alterando seu valor.
  */
void Assento::setTipo(char tipo)
{
    this->tipo = tipo;
}

/** @brief Método get
  *
  * É o método utilizado para acessar um atributo privado ou protegido de determinado objeto, o método é declarado com o
  * mesmo tipo do atributo, e o retorna.
  */
char Assento::getTipo()
{
    return this->tipo;
}

//Classe BAGAGEM

/** @brief Método construtor
  *
  * É o método utilizado para inicializar atributos ou executar métodos no momento de instanciamento do objeto.
  */
 Bagagem::Bagagem(int numero)
{
    this->numero = numero;
}

/** @brief Método set
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado ou protegido do objeto, alterando seu valor.
  */
void Bagagem::setNumero(int numero)
{
    this->numero = numero;
}

/** @brief Método get
  *
  * É o método utilizado para acessar um atributo privado ou protegido de determinado objeto, o método é declarado com o
  * mesmo tipo do atributo, e o retorna.
  */
int Bagagem::getNumero()
{
    return this->numero;
}

//Classe Codigo_banco

/** @brief Método construtor
  *
  * É o método utilizado para inicializar atributos ou executar métodos no momento de instanciamento do objeto.
  */
 Codigo_banco::Codigo_banco(string codigo)
{
    this->codigo = codigo;
}

/** @brief Método set
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado ou protegido do objeto, alterando seu valor.
  */
void Codigo_banco::setCodigo(string codigo)
{
    this->codigo = codigo;
}

/** @brief Método get
  *
  * É o método utilizado para acessar um atributo privado ou protegido de determinado objeto, o método é declarado com o
  * mesmo tipo do atributo, e o retorna.
  */
string Codigo_banco::getCodigo()
{
    return this->codigo;
}

//Classe Codigo_carona

/** @brief Método construtor
  *
  * É o método utilizado para inicializar atributos ou executar métodos no momento de instanciamento do objeto.
  */
 Codigo_carona::Codigo_carona(string codigo)
{
    this->codigo = codigo;
}


/** @brief Método set
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado ou protegido do objeto, alterando seu valor.
  */
void Codigo_carona::setCodigo(string codigo)
{
    this->codigo = codigo;
}

/** @brief Método get
  *
  * É o método utilizado para acessar um atributo privado ou protegido de determinado objeto, o método é declarado com o
  * mesmo tipo do atributo, e o retorna.
  */
string Codigo_carona::getCodigo()
{
    return this->codigo;
}

//Classe Codigo_reserva

/** @brief Método construtor
  *
  * É o método utilizado para inicializar atributos ou executar métodos no momento de instanciamento do objeto.
  */
 Codigo_reserva::Codigo_reserva(string codigo)
{
    this->codigo = codigo;
}

/** @brief Método set
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado ou protegido do objeto, alterando seu valor.
  */
void Codigo_reserva::setCodigo(string codigo)
{
    this->codigo = codigo;
}

/** @brief Método get
  *
  * É o método utilizado para acessar um atributo privado ou protegido de determinado objeto, o método é declarado com o
  * mesmo tipo do atributo, e o retorna.
  */
string Codigo_reserva::getCodigo()
{
    return this->codigo;
}

// Classe CIDADE

/** @brief Método construtor
  *
  * É o método utilizado para inicializar atributos ou executar métodos no momento de instanciamento do objeto.
  */
 Cidade::Cidade(string cidade)
{
    this->cidade = cidade;
}

/** @brief Método set
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado ou protegido do objeto, alterando seu valor.
  */
void Cidade::setCidade(string cidade)
{
    this->cidade = cidade;
}

/** @brief Método get
  *
  * É o método utilizado para acessar um atributo privado ou protegido de determinado objeto, o método é declarado com o
  * mesmo tipo do atributo, e o retorna.
  */
string Cidade::getCidade()
{
    return this->cidade;
}

// Classe CPF

/** @brief Método construtor
  *
  * É o método utilizado para inicializar atributos ou executar métodos no momento de instanciamento do objeto.
  */
 Cpf::Cpf(string cpf)
{
    this->cpf = cpf;
}

/** @brief Método set
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado ou protegido do objeto, alterando seu valor.
  */
void Cpf::setCpf(string cpf)
{
    this->cpf = cpf;
}

/** @brief Método get
  *
  * É o método utilizado para acessar um atributo privado ou protegido de determinado objeto, o método é declarado com o
  * mesmo tipo do atributo, e o retorna.
  */
string Cpf::getCpf()
{
    return this->cpf;
}

//Classe DATA

/** @brief Método construtor
  *
  * É o método utilizado para inicializar atributos ou executar métodos no momento de instanciamento do objeto.
  */
 Data::Data(string data)
{
   this->data = data;
}

/** @brief Método set
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado ou protegido do objeto, alterando seu valor.
  */
void Data::setData(string data)
{
    this->data = data;
}

/** @brief Método get
  *
  * É o método utilizado para acessar um atributo privado ou protegido de determinado objeto, o método é declarado com o
  * mesmo tipo do atributo, e o retorna.
  */
string Data::getData()
{
    return this->data;
}

//Classe DURACAO

/** @brief Método construtor
  *
  * É o método utilizado para inicializar atributos ou executar métodos no momento de instanciamento do objeto.
  */
 Duracao::Duracao(int duracao)
{
    this->duracao = duracao;
}

/** @brief Método set
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado ou protegido do objeto, alterando seu valor.
  */
void Duracao::setDuracao(int duracao)
{
    this->duracao = duracao;
}

/** @brief Método get
  *
  * É o método utilizado para acessar um atributo privado ou protegido de determinado objeto, o método é declarado com o
  * mesmo tipo do atributo, e o retorna.
  */
int Duracao::getDuracao()
{
    return this->duracao;
}

//Classe ESTADO

/** @brief Método construtor
  *
  * É o método utilizado para inicializar atributos ou executar métodos no momento de instanciamento do objeto.
  */
 Estado::Estado(string estado)
{
    this->estado = estado;
}

/** @brief Método set
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado ou protegido do objeto, alterando seu valor.
  */
void Estado::setEstado(string estado)
{
    this->estado = estado;
}

/** @brief Método get
  *
  * É o método utilizado para acessar um atributo privado ou protegido de determinado objeto, o método é declarado com o
  * mesmo tipo do atributo, e o retorna.
  */
string Estado::getEstado()
{
    return this->estado;
}

//Classe EMAIL

/** @brief Método construtor
  *
  * É o método utilizado para inicializar atributos ou executar métodos no momento de instanciamento do objeto.
  */
 Email::Email(string local, string dominio)
{
    this->local = local;
    this->dominio = dominio;
}

/** @brief Método set
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado ou protegido do objeto, alterando seu valor.
  */
void Email::setLocal(string local)
{
    this->local = local;
}

/** @brief Método set
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado ou protegido do objeto, alterando seu valor.
  */
void Email::setDominio(string dominio)
{
    this->dominio = dominio;
}

/** @brief Método get
  *
  * É o método utilizado para acessar um atributo privado ou protegido de determinado objeto, o método é declarado com o
  * mesmo tipo do atributo, e o retorna.
  */
string Email::getLocal()
{
    return this->local;
}

/** @brief Método get
  *
  * É o método utilizado para acessar um atributo privado ou protegido de determinado objeto, o método é declarado com o
  * mesmo tipo do atributo, e o retorna.
  */
string Email::getDominio()
{
    return this->dominio;
}

//Classe NOME

/** @brief Método construtor
  *
  * É o método utilizado para inicializar atributos ou executar métodos no momento de instanciamento do objeto.
  */
 Nome::Nome(string nome)
{
    this->nome = nome;
}

/** @brief Método set
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado ou protegido do objeto, alterando seu valor.
  */
void Nome::setNome(string nome)
{
    this->nome = nome;
}

/** @brief Método get
  *
  * É o método utilizado para acessar um atributo privado ou protegido de determinado objeto, o método é declarado com o
  * mesmo tipo do atributo, e o retorna.
  */
string Nome::getNome()
{
    return this->nome;
}

//Classe Numero_agencia
/** @brief Método construtor
  *
  * É o método utilizado para inicializar atributos ou executar métodos no momento de instanciamento do objeto.
  */
 Numero_agencia::Numero_agencia(string numero, int digito)
{
    this->numero = numero;
    this->digito = digito;
}

/** @brief Método set
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado ou protegido do objeto, alterando seu valor.
  */
void Numero_agencia::setNumero(string numero)
{
    this->numero = numero;
}

/** @brief Método set
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado ou protegido do objeto, alterando seu valor.
  */
void Numero_agencia::setDigito(int digito)
{
    this->digito = digito;
}
/*
int Numero_agencia::calculaDigito(string numero)
{

}
*/

/** @brief Método get
  *
  * É o método utilizado para acessar um atributo privado ou protegido de determinado objeto, o método é declarado com o
  * mesmo tipo do atributo, e o retorna.
  */
string Numero_agencia::getNumero()
{
    return this->numero;
}

/** @brief Método get
  *
  * É o método utilizado para acessar um atributo privado ou protegido de determinado objeto, o método é declarado com o
  * mesmo tipo do atributo, e o retorna.
  */
int Numero_agencia::getDigito()
{
    return this->digito;
}

//Classe Numero_conta

/** @brief Método construtor
  *
  * É o método utilizado para inicializar atributos ou executar métodos no momento de instanciamento do objeto.
  */
 Numero_conta::Numero_conta(string numero, int digito)
{
    this->numero = numero;
    this->digito = digito;
}

/** @brief Método set
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado ou protegido do objeto, alterando seu valor.
  */
void Numero_conta::setNumero(string numero)
{
    this->numero = numero;
}

/** @brief Método set
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado ou protegido do objeto, alterando seu valor.
  */
void Numero_conta::setDigito(int digito)
{
    this->digito = digito;
}
/*
int Numero_conta::calculaDigito(string numero)
{
    //Algoritmo de Luhn
    int l = numero.length(), soma = 0;

    for (int i = 0; i<l ; i++){
        numero[i]-49
    }
}
*/

/** @brief Método get
  *
  * É o método utilizado para acessar um atributo privado ou protegido de determinado objeto, o método é declarado com o
  * mesmo tipo do atributo, e o retorna.
  */
string Numero_conta::getNumero()
{
    return this->numero;
}

/** @brief Método get
  *
  * É o método utilizado para acessar um atributo privado ou protegido de determinado objeto, o método é declarado com o
  * mesmo tipo do atributo, e o retorna.
  */
int Numero_conta::getDigito()
{
    return this->digito;
}

//Classe PRECO

/** @brief Método construtor
  *
  * É o método utilizado para inicializar atributos ou executar métodos no momento de instanciamento do objeto.
  */
 Preco::Preco(double preco)
{
    this->preco = preco;
}

/** @brief Método set
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado ou protegido do objeto, alterando seu valor.
  */
void Preco::setPreco(double preco)
{
    this->preco = preco;
}

/** @brief Método get
  *
  * É o método utilizado para acessar um atributo privado ou protegido de determinado objeto, o método é declarado com o
  * mesmo tipo do atributo, e o retorna.
  */
double Preco::getPreco()
{
    return this->preco;
}

//Classe TELEFONE

/** @brief Método construtor
  *
  * É o método utilizado para inicializar atributos ou executar métodos no momento de instanciamento do objeto.
  */
 Telefone::Telefone(string ddi, string ddd, string numero)
{
    this->ddi = ddi;
    this->ddd = ddd;
    this->numero = numero;
}

/** @brief Método set
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado ou protegido do objeto, alterando seu valor.
  */
void Telefone::setDdi(string ddi)
{
    this->ddi = ddi;
}

/** @brief Método set
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado ou protegido do objeto, alterando seu valor.
  */
void Telefone::setDdd(string ddd)
{
    this->ddd = ddd;
}

/** @brief Método set
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado ou protegido do objeto, alterando seu valor.
  */
void Telefone::setNumero(string numero)
{
    this->numero = numero;
}

/** @brief Método get
  *
  * É o método utilizado para acessar um atributo privado ou protegido de determinado objeto, o método é declarado com o
  * mesmo tipo do atributo, e o retorna.
  */
string Telefone::getDdi()
{
    return this->ddi;
}

/** @brief Método get
  *
  * É o método utilizado para acessar um atributo privado ou protegido de determinado objeto, o método é declarado com o
  * mesmo tipo do atributo, e o retorna.
  */
string Telefone::getDdd()
{
    return this->ddd;
}

/** @brief Método get
  *
  * É o método utilizado para acessar um atributo privado ou protegido de determinado objeto, o método é declarado com o
  * mesmo tipo do atributo, e o retorna.
  */
string Telefone::getNumero()
{
    return this->numero;
}

//Classe SENHA

/** @brief Método construtor
  *
  * É o método utilizado para inicializar atributos ou executar métodos no momento de instanciamento do objeto.
  */
Senha::Senha(string senha)
{
    this->senha = senha;
}

/** @brief Método set
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado ou protegido do objeto, alterando seu valor.
  */
void Senha::setSenha(string senha)
{
    this->senha = senha;
}

/** @brief Método get
  *
  * É o método utilizado para acessar um atributo privado ou protegido de determinado objeto, o método é declarado com o
  * mesmo tipo do atributo, e o retorna.
  */
string Senha::getSenha()
{
    return this->senha;
}

//Classe VAGAS

/** @brief Método construtor
  *
  * É o método utilizado para inicializar atributos ou executar métodos no momento de instanciamento do objeto.
  */
 Vagas::Vagas(int vagas)
{
    this->vagas = vagas;
}

/** @brief Método set
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado ou protegido do objeto, alterando seu valor.
  */
void Vagas::setVagas(int vagas)
{
    this->vagas = vagas;
}

/** @brief Método get
  *
  * É o método utilizado para acessar um atributo privado ou protegido de determinado objeto, o método é declarado com o
  * mesmo tipo do atributo, e o retorna.
  */
int Vagas::getVagas()
{
    return this->vagas;
}
