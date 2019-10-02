/*Biblioteca de classes Entidade*/
#include <iostream>
#include "dominios.h"
#include "entidades.h"

using namespace std;

/** @brief Implementação dos métodos das classes entidade
  * @author Eric Chagas de Oliveira
  * @since 01-10-2019
  * A Implementação dos métodos é realizada nesse arquivo, e a declaração no arquivo header correspondente
  * de forma a facilitar a organização do sistema atravéz de módulos.
  */

//Classe USUARIO

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Usuario::setNome(string nome)
{
    this->nome.setNome(nome);
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Usuario::setTelefone(string ddi, string ddd, string numero)
{
    this->telefone.setDdi(ddi);
    this->telefone.setDdd(ddd);
    this->telefone.setNumero(numero);

}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Usuario::setEmail(string local, string dominio)
{
    this->email.setLocal(local);
    this->email.setDominio(dominio);
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Usuario::setSenha(string senha)
{
    this->senha.setSenha(senha);
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void Usuario::setCpf(string cpf)
{
    this->cpf.setCpf(cpf);
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
Nome Usuario::getNome()
{
    return this->nome;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
Telefone Usuario::getTelefone()
{
    return this->telefone;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
Email Usuario::getEmail()
{
    return this->email;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
Senha Usuario::getSenha()
{
    return this->senha;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
Cpf Usuario::getCpf()
{
    return this->cpf;
}

//Classe RESERVA

void Reserva::setCodigo(string codigo)
{
    this->codigo.setCodigo(codigo);
}

void Reserva::setAssento(char tipo)
{
    this->assento.setTipo(tipo);
}

void Reserva::setBagagem(int numero)
{
    this->bagagem.setNumero(numero);
}

Codigo_reserva Reserva::getCodigo()
{
    return this->codigo;
}

Assento Reserva::getAssento()
{
    return this->assento;
}

Bagagem Reserva::getBagagem()
{
    return this->bagagem;
}

//Classe CARONA

void Carona::setCodigo(string codigo)
{
    this->codigo.setCodigo(codigo);
}

void Carona::setCidade_origem(string cidade)
{
    this->cidade_origem.setCidade(cidade);
}

void Carona::setEstado_origem(string estado)
{
    this->estado_origem.setEstado(estado);
}

void Carona::setCidade_destino(string cidade)
{
    this->cidade_destino.setCidade(cidade);
}

void Carona::setEstado_destino(string estado)
{
    this->estado_destino.setEstado(estado);
}

void Carona::setData(string data)
{
    this->data.setData(data);
}

void Carona::setDuracao(int duracao)
{
    this->duracao.setDuracao(duracao);
}

void Carona::setVagas(int vagas)
{
    this->vagas.setVagas(vagas);
}

void Carona::setPreco(double preco)
{
    this->preco.setPreco(preco);
}

Codigo_carona Carona::getCodigo()
{
    return this->codigo;
}

Cidade Carona::getCidade_origem()
{
    return this->cidade_origem;
}

Estado Carona::getEstado_origem()
{
    return this->estado_origem;
}

Cidade Carona::getCidade_destino()
{
    return this->cidade_destino;
}

Estado Carona::getEstado_destino()
{
    return this->estado_destino;
}

Data Carona::getData()
{
    return this->data;
}

Duracao Carona::getDuracao()
{
    return this->duracao;
}

Vagas Carona::getVagas()
{
    return this->vagas;
}

Preco Carona::getPreco()
{
    return this->preco;
}

//Classe CONTA

void Conta::setBanco(string codigo)
{
    this->banco.setCodigo(codigo);
}

void Conta::setAgencia(string numero, int digito)
{
    this->agencia.setNumero(numero);
    this->agencia.setDigito(digito);
}

void Conta::setNumero(string numero, int digito)
{
    this->numero.setNumero(numero);
    this->numero.setDigito(digito);
}

Codigo_banco Conta::getBanco()
{
    return this->banco;
}

Numero_agencia Conta::getAgencia()
{
    return this->agencia;
}

Numero_conta Conta::getNumero()
{
    return this->numero;
}
