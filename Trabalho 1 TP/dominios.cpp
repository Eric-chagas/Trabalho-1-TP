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

/** @brief Método validar
  *
  * Método utilizado para checar se o formato dos dados a serem gravados nos objetos corresponderm ao formato correto.
  */
bool Assento::validarTipo(char tipo)
{
    try {
        if (tipo != 'D' && tipo != 'T'){
            throw invalid_argument("Formato incorreto.\n");
        }
        //cout << "Formato válido!\n"
        return true;

    } catch (string x) {
        //cout << x;
        return false;
    }
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

/** @brief (one liner)
  *
  * (documentation goes here)
  */
bool Bagagem::validarNumero(int numero)
{
    try {
        if (numero < 0 || numero > 4){
            throw invalid_argument("Formato incorreto.\n");
        }
        //cout << "Formato válido!\n"
        return true;

    } catch (string x) {
        //cout << x;
        return false;
    }
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

/** @brief (one liner)
  *
  * (documentation goes here)
  */
bool Codigo_banco::validarCodigo(string codigo)
{
    bool digito_incorreto = false;

    for (int i = 0; i<3; i++){
        if((int)codigo[i] < 48 || (int)codigo[i] > 57){
            digito_incorreto = true;
        }
    }

    try {
        if (codigo.size() != 3 || digito_incorreto == true){
            throw invalid_argument("Formato incorreto.\n");
        }
        //cout << "Formato válido!\n"
        return true;

    } catch (string x) {
        //cout << x;
        return false;
    }
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
/** @brief (one liner)
  *
  * (documentation goes here)
  */
bool Codigo_carona::validarCodigo(string codigo)
{
    bool digito_incorreto = false;

    for (int i = 0; i<4; i++){
        if((int)codigo[i] < 48 || (int)codigo[i] > 57){
            digito_incorreto = true;
        }
    }

    try {
        if (codigo.size() != 4 || digito_incorreto == true){
            throw invalid_argument("Formato incorreto.\n");
        }
        //cout << "Formato válido!\n"
        return true;

    } catch (string x) {
        //cout << x;
        return false;
    }
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

/** @brief (one liner)
  *
  * (documentation goes here)
  */
bool Codigo_reserva::validarCodigo(string codigo)
{
    bool digito_incorreto = false;

    for (int i = 0; i<5; i++){
        if((int)codigo[i] < 48 || (int)codigo[i] > 57){
            digito_incorreto = true;
        }
    }

    try {
        if (codigo.size() != 5 || digito_incorreto == true){
            throw invalid_argument("Formato incorreto.\n");
        }
        //cout << "Formato válido!\n"
        return true;

    } catch (string x) {
        //cout << x;
        return false;
    }
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

/** @brief (one liner)
  *
  * (documentation goes here)
  */
bool Cidade::validarCidade(string cidade)
{
    bool caracter_invalido = false, ponto_sem_letra = false, espaco_duplo = false;
    int numero_de_letras = 0, tamanho = cidade.size();

    for(int i = 0; i < tamanho; i++){
        if((int)cidade[i] >= 48 && (int)cidade[i] <= 57){
            numero_de_letras++;
        }
        if(((int)cidade[i] < 97 && cidade[i] != '.' && cidade[i] != ' ') || ((int)cidade[i] > 122 && cidade[i] != '.' && cidade[i] != ' ')){
            caracter_invalido = true;
        }
        if((i != 0 && cidade[i] == '.' && (int)cidade[i-1] < 97) || (i != 0 && cidade[i] == '.' && (int)cidade[i-1] > 122)){
            ponto_sem_letra = true;
        }
        if(i < (tamanho - 1) && cidade[i] == ' ' && cidade[i+1] == ' '){
            espaco_duplo = true;
        }
    }

    try {
        if ((tamanho < 1 || tamanho > 10) || numero_de_letras == 0 || caracter_invalido == true || ponto_sem_letra == true || espaco_duplo == true){
            throw invalid_argument("Formato incorreto.\n");
        }
        //cout << "Formato válido!\n"
        return true;

    } catch (string x) {
        //cout << x;
        return false;
    }
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

/** @brief (one liner)
  *
  * (documentation goes here)
  */
bool Cpf::validarCpf(string cpf)
{
    bool caracter_invalido = false;
    for (int i = 0; i < 14; i++){
        if (cpf[i] == '.' || cpf[i] == '-'){
            continue;
        }
        else if((int)cpf[i] < 48 || (int)cpf[i] > 57){
           caracter_invalido = true;
        }
    }

    try {
        if(caracter_invalido == true){
            throw invalid_argument("Formato incorreto.\n");
        }
        //cout << "Formato valido!\n";
        return true;

    } catch (string x){
        //cout << x;
        return false;
    }
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

/** @brief Método ano_bissexto
  *
  * Esse é o método utilizado para verificar a presença de um ano bissexto na data recebida.
  */
bool Data::ano_bissexto(int ano)
{
    if (ano%4 == 0){
        if(ano%100 != 0) {
            return true;
        } else {
            if(ano%400 == 0){
                return true;
            } else {
                return false;
            }
        }
    } else{
        return false;
    }
}



/** @brief (one liner)
  *
  * (documentation goes here)
  */
bool Data::validarData(string data)
{
    bool dia_valido = true, mes_valido = true, ano_valido = true;

    int dia = stoi(data.substr(0, 2));
    int mes = stoi(data.substr(3, 2));
    int ano = stoi(data.substr(6));

    //Dia
    if(mes != 2){
        if(dia < 1 || dia > 31){
            dia_valido = false;
        }
    } else if (mes == 2) {
        //Ano bissexto
        if(ano_bissexto(ano) == true){
            if(dia < 1 || dia > 29){
                dia_valido = false;
            }
        } else {
            if(dia < 1 || dia > 28){
                dia_valido = false;
            }
        }
    }

    //Mês
    if(mes < 1 || mes > 12){
        mes_valido = false;
    }

    //Ano
    if (ano < 2000 || ano > 2099){
        ano_valido = false;
    }


    try {
        if(dia_valido == false || mes_valido == false || ano_valido == false){
            throw invalid_argument("Formato incorreto.\n");
        }
        //cout << "Formato valido!\n";
        return true;

    } catch (string x){
        //cout << x;
        return false;
    }

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

/** @brief (one liner)
  *
  * (documentation goes here)
  */
bool Duracao::validarDuracao(int duracao)
{
    try {
        if(duracao < 1 || duracao > 48){
            throw invalid_argument("Formato incorreto.\n");
        }
        //cout << "Formato valido!\n";
        return true;

    } catch (string x){
        //cout << x;
        return false;
    }
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

/** @brief (one liner)
  *
  * (documentation goes here)
  */
bool Estado::validarEstado(string estado)
{
    //AC, AL, AP, AM, BA, CE, DF, ES, GO, MA, MT, MS, MG, PA, PB, PR, PE,
    //PI, RJ, RN, RS, RO, RR, SC, SP, SE, TO

    try{
        if(estado != "AC" && estado != "AL" && estado != "AP" && estado != "AM" && estado != "BA" && estado != "CE" && estado != "DF" && estado != "ES" && estado != "GO" && estado != "MA" && estado != "MT" && estado != "MS" && estado != "MG" && estado != "PA" && estado != "PB" && estado != "PR" && estado != "PE" && estado != "PI" && estado != "RJ" && estado != "RN" && estado != "RS" && estado != "RO" && estado != "RR" && estado != "SC" && estado != "SP" && estado != "SE" && estado != "TO"){
            throw invalid_argument("Formato incorreto!\n");
        }
        //cout << "Formato valido!\n";
        return true;
    } catch (string x){
        //cout << x;
        return false;
    }
}

//Classe EMAIL

/** @brief Método construtor
  *
  * É o método utilizado para inicializar atributos ou executar métodos no momento de instanciamento do objeto.
  */
 Email::Email(string email)
{
    this->email = email;
}

/** @brief Método set
  *
  * É o método utilizado para salvar um valor passado pelo usuário em um atributo privado ou protegido do objeto, alterando seu valor.
  */
void Email::setEmail(string email)
{
    this->email = email;
}

/** @brief Método get
  *
  * É o método utilizado para acessar um atributo privado ou protegido de determinado objeto, o método é declarado com o
  * mesmo tipo do atributo, e o retorna.
  */
string Email::getEmail()
{
    return this->email;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
bool Email::validarEmail(string email)
{
    //Posição na string email, do @
    int pos = email.find('@');
    string local = email.substr(0, pos);
    string dominio = email.substr(pos+1);
    int tamanho_local = local.size(), tamanho_dominio = dominio.size();
    bool caracter_invalido_local = false, caracter_invalido_dominio = false;

    //Checando o local
    for (int i = 0; i < tamanho_local; i++){
        if (((int)local[i] < 97 && local[i] != '.') || ((int)local[i] > 122 && local[i] != '.')){
            caracter_invalido_local = true;
        }
    }

    //Checando o dominio
    for (int i = 0; i < tamanho_dominio; i++){
        if(((int)dominio[i] < 97 && dominio[i] != '.') || ((int)dominio[i] > 122 && dominio[i] != '.')){
            caracter_invalido_dominio = true;
        }
    }

    try{
        if(tamanho_dominio > 20 || tamanho_local > 20 || caracter_invalido_dominio == true || caracter_invalido_local == true){
            throw invalid_argument("Formato incorreto!.\n");
        }

        //cout << "Formato valido!\n";
        return true;
    } catch(string x){
        //cout << x;
        return false;
    }
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

/** @brief (one liner)
  *
  * (documentation goes here)
  */
bool Nome::validarNome(string nome)
{
    bool caracter_invalido = false, ponto_sem_letra = false, espaco_duplo = false;
    int numero_de_letras = 0, tamanho = nome.size();

    for(int i = 0; i < tamanho; i++){
        if((int)nome[i] >= 48 && (int)nome[i] <= 57){
            numero_de_letras++;
        }
        if(((int)nome[i] < 97 && nome[i] != '.' && nome[i] != ' ') || ((int)nome[i] > 122 && nome[i] != '.' && nome[i] != ' ')){
            caracter_invalido = true;
        }
        if((i != 0 && nome[i] == '.' && (int)nome[i-1] < 97) || (i != 0 && nome[i] == '.' && (int)nome[i-1] > 122)){
            ponto_sem_letra = true;
        }
        if(i < (tamanho - 1) && nome[i] == ' ' && nome[i+1] == ' '){
            espaco_duplo = true;
        }
    }

    try {
        if ((tamanho < 1 || tamanho > 20) || numero_de_letras == 0 || caracter_invalido == true || ponto_sem_letra == true || espaco_duplo == true){
            throw invalid_argument("Formato incorreto.\n");
        }
        //cout << "Formato válido!\n"
        return true;

    } catch (string x) {
        //cout << x;
        return false;
    }
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
