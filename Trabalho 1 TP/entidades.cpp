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

/** @brief Método set (Entidade)
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado
  * ou protegido do objeto, alterando seu valor. Em objetos do tipo entidade, o método set utiliza
  * o método set do atributo desejado (um objeto de tipo domínio) para salvar o valor.
  */
void Usuario::setNome(string nome)
{
    this->nome.setNome(nome);
}

/** @brief Método set (Entidade)
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado
  * ou protegido do objeto, alterando seu valor. Em objetos do tipo entidade, o método set utiliza
  * o método set do atributo desejado (um objeto de tipo domínio) para salvar o valor.
  */
void Usuario::setTelefone(string ddi, string ddd, string numero)
{
    this->telefone.setDdi(ddi);
    this->telefone.setDdd(ddd);
    this->telefone.setNumero(numero);

}

/** @brief Método set (Entidade)
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado
  * ou protegido do objeto, alterando seu valor. Em objetos do tipo entidade, o método set utiliza
  * o método set do atributo desejado (um objeto de tipo domínio) para salvar o valor.
  */
void Usuario::setEmail(string local, string dominio)
{
    this->email.setLocal(local);
    this->email.setDominio(dominio);
}

/** @brief Método set (Entidade)
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado
  * ou protegido do objeto, alterando seu valor. Em objetos do tipo entidade, o método set utiliza
  * o método set do atributo desejado (um objeto de tipo domínio) para salvar o valor.
  */
void Usuario::setSenha(string senha)
{
    this->senha.setSenha(senha);
}

/** @brief Método set (Entidade)
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado
  * ou protegido do objeto, alterando seu valor. Em objetos do tipo entidade, o método set utiliza
  * o método set do atributo desejado (um objeto de tipo domínio) para salvar o valor.
  */
void Usuario::setCpf(string cpf)
{
    this->cpf.setCpf(cpf);
}

/** @brief Método get (entidade)
  *
  * Método utilizado para acessar um atributo privado ou protegido do objeto de tipo Entidade em questão. Em objetos
  * das classes Entidade, o método get retorna o conteúdo do atributo em si, ou seja, um objeto de classe do tipo Domínio.
  */
Nome Usuario::getNome()
{
    return this->nome;
}

/** @brief Método get (entidade)
  *
  * Método utilizado para acessar um atributo privado ou protegido do objeto de tipo Entidade em questão. Em objetos
  * das classes Entidade, o método get retorna o conteúdo do atributo em si, ou seja, um objeto de classe do tipo Domínio.
  */
Telefone Usuario::getTelefone()
{
    return this->telefone;
}

/** @brief Método get (entidade)
  *
  * Método utilizado para acessar um atributo privado ou protegido do objeto de tipo Entidade em questão. Em objetos
  * das classes Entidade, o método get retorna o conteúdo do atributo em si, ou seja, um objeto de classe do tipo Domínio.
  */
Email Usuario::getEmail()
{
    return this->email;
}

/** @brief Método get (entidade)
  *
  * Método utilizado para acessar um atributo privado ou protegido do objeto de tipo Entidade em questão. Em objetos
  * das classes Entidade, o método get retorna o conteúdo do atributo em si, ou seja, um objeto de classe do tipo Domínio.
  */
Senha Usuario::getSenha()
{
    return this->senha;
}

/** @brief Método get (entidade)
  *
  * Método utilizado para acessar um atributo privado ou protegido do objeto de tipo Entidade em questão. Em objetos
  * das classes Entidade, o método get retorna o conteúdo do atributo em si, ou seja, um objeto de classe do tipo Domínio.
  */
Cpf Usuario::getCpf()
{
    return this->cpf;
}

//Classe RESERVA

/** @brief Método set (Entidade)
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado
  * ou protegido do objeto, alterando seu valor. Em objetos do tipo entidade, o método set utiliza
  * o método set do atributo desejado (um objeto de tipo domínio) para salvar o valor.
  */
void Reserva::setCodigo(string codigo)
{
    this->codigo.setCodigo(codigo);
}

/** @brief Método set (Entidade)
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado
  * ou protegido do objeto, alterando seu valor. Em objetos do tipo entidade, o método set utiliza
  * o método set do atributo desejado (um objeto de tipo domínio) para salvar o valor.
  */
void Reserva::setAssento(char tipo)
{
    this->assento.setTipo(tipo);
}

/** @brief Método set (Entidade)
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado
  * ou protegido do objeto, alterando seu valor. Em objetos do tipo entidade, o método set utiliza
  * o método set do atributo desejado (um objeto de tipo domínio) para salvar o valor.
  */
void Reserva::setBagagem(int numero)
{
    this->bagagem.setNumero(numero);
}

/** @brief Método get (entidade)
  *
  * Método utilizado para acessar um atributo privado ou protegido do objeto de tipo Entidade em questão. Em objetos
  * das classes Entidade, o método get retorna o conteúdo do atributo em si, ou seja, um objeto de classe do tipo Domínio.
  */
Codigo_reserva Reserva::getCodigo()
{
    return this->codigo;
}

/** @brief Método get (entidade)
  *
  * Método utilizado para acessar um atributo privado ou protegido do objeto de tipo Entidade em questão. Em objetos
  * das classes Entidade, o método get retorna o conteúdo do atributo em si, ou seja, um objeto de classe do tipo Domínio.
  */
Assento Reserva::getAssento()
{
    return this->assento;
}

/** @brief Método get (entidade)
  *
  * Método utilizado para acessar um atributo privado ou protegido do objeto de tipo Entidade em questão. Em objetos
  * das classes Entidade, o método get retorna o conteúdo do atributo em si, ou seja, um objeto de classe do tipo Domínio.
  */
Bagagem Reserva::getBagagem()
{
    return this->bagagem;
}

//Classe CARONA

/** @brief Método set (Entidade)
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado
  * ou protegido do objeto, alterando seu valor. Em objetos do tipo entidade, o método set utiliza
  * o método set do atributo desejado (um objeto de tipo domínio) para salvar o valor.
  */
void Carona::setCodigo(string codigo)
{
    this->codigo.setCodigo(codigo);
}

/** @brief Método set (Entidade)
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado
  * ou protegido do objeto, alterando seu valor. Em objetos do tipo entidade, o método set utiliza
  * o método set do atributo desejado (um objeto de tipo domínio) para salvar o valor.
  */
void Carona::setCidade_origem(string cidade)
{
    this->cidade_origem.setCidade(cidade);
}

/** @brief Método set (Entidade)
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado
  * ou protegido do objeto, alterando seu valor. Em objetos do tipo entidade, o método set utiliza
  * o método set do atributo desejado (um objeto de tipo domínio) para salvar o valor.
  */
void Carona::setEstado_origem(string estado)
{
    this->estado_origem.setEstado(estado);
}

/** @brief Método set (Entidade)
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado
  * ou protegido do objeto, alterando seu valor. Em objetos do tipo entidade, o método set utiliza
  * o método set do atributo desejado (um objeto de tipo domínio) para salvar o valor.
  */
void Carona::setCidade_destino(string cidade)
{
    this->cidade_destino.setCidade(cidade);
}

/** @brief Método set (Entidade)
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado
  * ou protegido do objeto, alterando seu valor. Em objetos do tipo entidade, o método set utiliza
  * o método set do atributo desejado (um objeto de tipo domínio) para salvar o valor.
  */
void Carona::setEstado_destino(string estado)
{
    this->estado_destino.setEstado(estado);
}

/** @brief Método set (Entidade)
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado
  * ou protegido do objeto, alterando seu valor. Em objetos do tipo entidade, o método set utiliza
  * o método set do atributo desejado (um objeto de tipo domínio) para salvar o valor.
  */
void Carona::setData(string data)
{
    this->data.setData(data);
}

/** @brief Método set (Entidade)
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado
  * ou protegido do objeto, alterando seu valor. Em objetos do tipo entidade, o método set utiliza
  * o método set do atributo desejado (um objeto de tipo domínio) para salvar o valor.
  */
void Carona::setDuracao(int duracao)
{
    this->duracao.setDuracao(duracao);
}

/** @brief Método set (Entidade)
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado
  * ou protegido do objeto, alterando seu valor. Em objetos do tipo entidade, o método set utiliza
  * o método set do atributo desejado (um objeto de tipo domínio) para salvar o valor.
  */
void Carona::setVagas(int vagas)
{
    this->vagas.setVagas(vagas);
}

/** @brief Método set (Entidade)
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado
  * ou protegido do objeto, alterando seu valor. Em objetos do tipo entidade, o método set utiliza
  * o método set do atributo desejado (um objeto de tipo domínio) para salvar o valor.
  */
void Carona::setPreco(double preco)
{
    this->preco.setPreco(preco);
}

/** @brief Método get (entidade)
  *
  * Método utilizado para acessar um atributo privado ou protegido do objeto de tipo Entidade em questão. Em objetos
  * das classes Entidade, o método get retorna o conteúdo do atributo em si, ou seja, um objeto de classe do tipo Domínio.
  */
Codigo_carona Carona::getCodigo()
{
    return this->codigo;
}

/** @brief Método get (entidade)
  *
  * Método utilizado para acessar um atributo privado ou protegido do objeto de tipo Entidade em questão. Em objetos
  * das classes Entidade, o método get retorna o conteúdo do atributo em si, ou seja, um objeto de classe do tipo Domínio.
  */
Cidade Carona::getCidade_origem()
{
    return this->cidade_origem;
}

/** @brief Método get (entidade)
  *
  * Método utilizado para acessar um atributo privado ou protegido do objeto de tipo Entidade em questão. Em objetos
  * das classes Entidade, o método get retorna o conteúdo do atributo em si, ou seja, um objeto de classe do tipo Domínio.
  */
Estado Carona::getEstado_origem()
{
    return this->estado_origem;
}

/** @brief Método get (entidade)
  *
  * Método utilizado para acessar um atributo privado ou protegido do objeto de tipo Entidade em questão. Em objetos
  * das classes Entidade, o método get retorna o conteúdo do atributo em si, ou seja, um objeto de classe do tipo Domínio.
  */
Cidade Carona::getCidade_destino()
{
    return this->cidade_destino;
}

/** @brief Método get (entidade)
  *
  * Método utilizado para acessar um atributo privado ou protegido do objeto de tipo Entidade em questão. Em objetos
  * das classes Entidade, o método get retorna o conteúdo do atributo em si, ou seja, um objeto de classe do tipo Domínio.
  */
Estado Carona::getEstado_destino()
{
    return this->estado_destino;
}

/** @brief Método get (entidade)
  *
  * Método utilizado para acessar um atributo privado ou protegido do objeto de tipo Entidade em questão. Em objetos
  * das classes Entidade, o método get retorna o conteúdo do atributo em si, ou seja, um objeto de classe do tipo Domínio.
  */
Data Carona::getData()
{
    return this->data;
}

/** @brief Método get (entidade)
  *
  * Método utilizado para acessar um atributo privado ou protegido do objeto de tipo Entidade em questão. Em objetos
  * das classes Entidade, o método get retorna o conteúdo do atributo em si, ou seja, um objeto de classe do tipo Domínio.
  */
Duracao Carona::getDuracao()
{
    return this->duracao;
}

/** @brief Método get (entidade)
  *
  * Método utilizado para acessar um atributo privado ou protegido do objeto de tipo Entidade em questão. Em objetos
  * das classes Entidade, o método get retorna o conteúdo do atributo em si, ou seja, um objeto de classe do tipo Domínio.
  */
Vagas Carona::getVagas()
{
    return this->vagas;
}

/** @brief Método get (entidade)
  *
  * Método utilizado para acessar um atributo privado ou protegido do objeto de tipo Entidade em questão. Em objetos
  * das classes Entidade, o método get retorna o conteúdo do atributo em si, ou seja, um objeto de classe do tipo Domínio.
  */
Preco Carona::getPreco()
{
    return this->preco;
}

//Classe CONTA

/** @brief Método set (Entidade)
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado
  * ou protegido do objeto, alterando seu valor. Em objetos do tipo entidade, o método set utiliza
  * o método set do atributo desejado (um objeto de tipo domínio) para salvar o valor.
  */
void Conta::setBanco(string codigo)
{
    this->banco.setCodigo(codigo);
}

/** @brief Método set (Entidade)
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado
  * ou protegido do objeto, alterando seu valor. Em objetos do tipo entidade, o método set utiliza
  * o método set do atributo desejado (um objeto de tipo domínio) para salvar o valor.
  */
void Conta::setAgencia(string numero, int digito)
{
    this->agencia.setNumero(numero);
    this->agencia.setDigito(digito);
}

/** @brief Método set (Entidade)
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado
  * ou protegido do objeto, alterando seu valor. Em objetos do tipo entidade, o método set utiliza
  * o método set do atributo desejado (um objeto de tipo domínio) para salvar o valor.
  */
void Conta::setNumero(string numero, int digito)
{
    this->numero.setNumero(numero);
    this->numero.setDigito(digito);
}

/** @brief Método get (entidade)
  *
  * Método utilizado para acessar um atributo privado ou protegido do objeto de tipo Entidade em questão. Em objetos
  * das classes Entidade, o método get retorna o conteúdo do atributo em si, ou seja, um objeto de classe do tipo Domínio.
  */
Codigo_banco Conta::getBanco()
{
    return this->banco;
}

/** @brief Método get (entidade)
  *
  * Método utilizado para acessar um atributo privado ou protegido do objeto de tipo Entidade em questão. Em objetos
  * das classes Entidade, o método get retorna o conteúdo do atributo em si, ou seja, um objeto de classe do tipo Domínio.
  */
Numero_agencia Conta::getAgencia()
{
    return this->agencia;
}

/** @brief Método get (entidade)
  *
  * Método utilizado para acessar um atributo privado ou protegido do objeto de tipo Entidade em questão. Em objetos
  * das classes Entidade, o método get retorna o conteúdo do atributo em si, ou seja, um objeto de classe do tipo Domínio.
  */
Numero_conta Conta::getNumero()
{
    return this->numero;
}
