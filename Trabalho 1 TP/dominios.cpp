/*Biblioteca de classes Domínio*/
#include <iostream>
#include "dominios.h"

using namespace std;

//Classe ASSENTO

/** @brief (one liner)
  *
  * (documentation goes here)
  */
 Assento::Assento(char tipo)
{
    this->tipo = tipo;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Assento::setTipo(char tipo)
{
    this->tipo = tipo;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
char Assento::getTipo()
{
    return this->tipo;
}

//Classe BAGAGEM

/** @brief (one liner)
  *
  * (documentation goes here)
  */
 Bagagem::Bagagem(int numero)
{
    this->numero = numero;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Bagagem::setNumero(int numero)
{
    this->numero = numero;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
int Bagagem::getNumero()
{
    return this->numero;
}

//Classe Codigo_banco

/** @brief (one liner)
  *
  * (documentation goes here)
  */
 Codigo_banco::Codigo_banco(string codigo)
{
    this->codigo = codigo;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Codigo_banco::setCodigo(string codigo)
{
    this->codigo = codigo;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
string Codigo_banco::getCodigo()
{
    return this->codigo;
}

//Classe Codigo_carona

/** @brief (one liner)
  *
  * (documentation goes here)
  */
 Codigo_carona::Codigo_carona(string codigo)
{
    this->codigo = codigo;
}


/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Codigo_carona::setCodigo(string codigo)
{
    this->codigo = codigo;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
string Codigo_carona::getCodigo()
{
    return this->codigo;
}

//Classe Codigo_reserva

/** @brief (one liner)
  *
  * (documentation goes here)
  */
 Codigo_reserva::Codigo_reserva(string codigo)
{
    this->codigo = codigo;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Codigo_reserva::setCodigo(string codigo)
{
    this->codigo = codigo;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
string Codigo_reserva::getCodigo()
{
    return this->codigo;
}

// Classe CIDADE

/** @brief (one liner)
  *
  * (documentation goes here)
  */
 Cidade::Cidade(string cidade)
{
    this->cidade = cidade;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Cidade::setCidade(string cidade)
{
    this->cidade = cidade;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
string Cidade::getCidade()
{
    return this->cidade;
}

// Classe CPF

/** @brief (one liner)
  *
  * (documentation goes here)
  */
 Cpf::Cpf(string cpf)
{
    this->cpf = cpf;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Cpf::setCpf(string cpf)
{
    this->cpf = cpf;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
string Cpf::getCpf()
{
    return this->cpf;
}

//Classe DATA

/** @brief (one liner)
  *
  * (documentation goes here)
  */
 Data::Data(string data)
{
   this->data = data;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Data::setData(string data)
{
    this->data = data;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
string Data::getData()
{
    return this->data;
}

//Classe DURACAO

/** @brief (one liner)
  *
  * (documentation goes here)
  */
 Duracao::Duracao(int duracao)
{
    this->duracao = duracao;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Duracao::setDuracao(int duracao)
{
    this->duracao = duracao;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
int Duracao::getDuracao()
{
    return this->duracao;
}

//Classe ESTADO

/** @brief (one liner)
  *
  * (documentation goes here)
  */
 Estado::Estado(string estado)
{
    this->estado = estado;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Estado::setEstado(string estado)
{
    this->estado = estado;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
string Estado::getEstado()
{
    return this->estado;
}

//Classe EMAIL

/** @brief (one liner)
  *
  * (documentation goes here)
  */
 Email::Email(string local, string dominio)
{
    this->local = local;
    this->dominio = dominio;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */

void Email::setLocal(string local)
{
    this->local = local;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Email::setDominio(string dominio)
{
    this->dominio = dominio;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
string Email::getLocal()
{
    return this->local;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
string Email::getDominio()
{
    return this->dominio;
}

//Classe NOME

/** @brief (one liner)
  *
  * (documentation goes here)
  */
 Nome::Nome(string nome)
{
    this->nome = nome;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Nome::setNome(string nome)
{
    this->nome = nome;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
string Nome::getNome()
{
    return this->nome;
}

//Classe Numero_agencia
/** @brief (one liner)
  *
  * (documentation goes here)
  */
 Numero_agencia::Numero_agencia(string numero, int digito)
{
    this->numero = numero;
    this->digito = digito;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Numero_agencia::setNumero(string numero)
{
    this->numero = numero;
}

/** @brief (one liner)
  *
  * (documentation goes here)
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

/** @brief (one liner)
  *
  * (documentation goes here)
  */
string Numero_agencia::getNumero()
{
    return this->numero;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
int Numero_agencia::getDigito()
{
    return this->digito;
}

//Classe Numero_conta

/** @brief (one liner)
  *
  * (documentation goes here)
  */
 Numero_conta::Numero_conta(string numero, int digito)
{
    this->numero = numero;
    this->digito = digito;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Numero_conta::setNumero(string numero)
{
    this->numero = numero;
}

/** @brief (one liner)
  *
  * (documentation goes here)
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

/** @brief (one liner)
  *
  * (documentation goes here)
  */
string Numero_conta::getNumero()
{
    return this->numero;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
int Numero_conta::getDigito()
{
    return this->digito;
}

//Classe PRECO
/** @brief (one liner)
  *
  * (documentation goes here)
  */
 Preco::Preco(double preco)
{
    this->preco = preco;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Preco::setPreco(double preco)
{
    this->preco = preco;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
double Preco::getPreco()
{
    return this->preco;
}

//Classe TELEFONE
/** @brief (one liner)
  *
  * (documentation goes here)
  */
 Telefone::Telefone(string ddi, string ddd, string numero)
{
    this->ddi = ddi;
    this->ddd = ddd;
    this->numero = numero;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Telefone::setDdi(string ddi)
{
    this->ddi = ddi;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Telefone::setDdd(string ddd)
{
    this->ddd = ddd;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Telefone::setNumero(string numero)
{
    this->numero = numero;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
string Telefone::getDdi()
{
    return this->ddi;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
string Telefone::getDdd()
{
    return this->ddd;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
string Telefone::getNumero()
{
    return this->numero;
}

//Classe SENHA
/** @brief (one liner)
  *
  * (documentation goes here)
  */
 Senha::Senha(string senha)
{
    this->senha = senha;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Senha::setSenha(string senha)
{
    this->senha = senha;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
string Senha::getSenha()
{
    return this->senha;
}

//Classe VAGAS
/** @brief (one liner)
  *
  * (documentation goes here)
  */
 Vagas::Vagas(int vagas)
{
    this->vagas = vagas;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Vagas::setVagas(int vagas)
{
    this->vagas = vagas;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
int Vagas::getVagas()
{
    return this->vagas;
}
