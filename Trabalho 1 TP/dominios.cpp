/*Biblioteca de classes Domínio*/
#include <iostream>
#include "dominios.h"

using namespace std;

//Classe ASSENTO

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

//Classe BANCO

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Banco::setCodigo(string codigo)
{
    this->codigo = codigo;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
string Banco::getCodigo()
{
    return this->codigo;
}

//Classe CARONA

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Carona::setCodigo(string codigo)
{
    this->codigo = codigo;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
string Carona::getCodigo()
{
    return this->codigo;
}

//Classe RESERVA

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Reserva::setCodigo(string codigo)
{
    this->codigo = codigo;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
string Reserva::getCodigo()
{
    return this->codigo;
}

// Classe CIDADE

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

//Classe AGENCIA

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Agencia::setNumero(string numero)
{
    this->numero = numero;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Agencia::setDigito(int digito)
{
    this->digito_verificador = digito;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
string Agencia::getNumero()
{
    return this->numero;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
int Agencia::getDigito()
{
    return this->digito_verificador;
}

//Classe CONTA

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Conta::setNumero(string numero)
{
    this->numero = numero;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Conta::setDigito(int digito)
{
    this->digito = digito;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
string Conta::getNumero()
{
    return this->numero;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
int Conta::getDigito()
{
    return this->digito;
}

//Classe PRECO

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
