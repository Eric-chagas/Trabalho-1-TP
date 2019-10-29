#ifndef DOMINIOS_H
#define DOMINIOS_H

using namespace std;

/** @brief Declaração das classes domínio e seus métodos
  * @author Eric Chagas de Oliveira
  * @since 01-10-2019
  *
  * O arquivo header contem a declaração de todas as classes e métodos, e para que sejam utilizados em um sistema
  * basta a inclusão desse arquivo.
  *
  * As classes possuem atributos que são de algum tipo primitivo da linguagem c++.
  * Estão presentes métodos getters e setters, que servem para retornar um valor armazenado no objeto ao usuário, e
  * armazenar um valor no objeto respectivamente.
  * Também foram implementados construtores, que iniciam objetos de determinada classe com valores específicos passados
  * como argumentos.
  */

/** @brief Classe Assento
  *
  * Classe que detém o tipo do assento na carona, dianteiro ou traseiro identificados por um char (D/T).
  *
  */
class Assento {
//D = DIANTEIRO ; T = TRASEIRO
private:
    char tipo;
public:
    //Set
    void setTipo(char tipo);

    //Get
    char getTipo();

    //Construtor
    Assento(char tipo);
    Assento() = default;

    //Validacao
    bool validarTipo(char tipo);
};

/** @brief Classe Bagagem
  *
  * Classe que detém o número de bagagens na carona, identificado por um int (0, 1, 2, 3 ou 4).
  *
  */
class Bagagem {
//Espaco para 0, 1, 2, 3 ou 4 bagagens
private:
    int numero;
public:
    //Set
    void setNumero(int numero);

    //Get
    int getNumero();

    //Construtor
    Bagagem(int numero);
    Bagagem() = default;

    //Validacao
    bool validarNumero(int numero);
};

/** @brief Classe Codigo_banco
  *
  * Classe Codigo_banco, que detem um código de identificação do banco na carona, identificado por uma string (XXX).
  *
  */

class Codigo_banco {
//Codigo de Banco (XXX)
private:
    string codigo;
public:
    //Set
    void setCodigo(string codigo);

    //Get
    string getCodigo();

    //Construtor
    Codigo_banco(string codigo);
    Codigo_banco() = default;

    //Validacao
    bool validarCodigo(string codigo);
};

/** @brief Classe Codigo_carona
  *
  * Classe Codigo_carona, que detém um código de identificação da carona, identificado por uma sring (XXXX).
  *
  */
class Codigo_carona {
//Codigo de Carona (XXXX)
private:
    string codigo;
public:
    //Set
    void setCodigo(string codigo);

    //Get
    string getCodigo();

    //Construtor
    Codigo_carona(string codigo);
    Codigo_carona() = default;

    //Validacao
    bool validarCodigo(string codigo);
};

/** @brief Classe Codigo_reserva
  *
  * Classe Codigo_reserva, que detém um código de identificação da reserva, identificado por uma sring (XXXXX).
  *
  */

class Codigo_reserva {
//Codigo de Reserva (XXXXX)
private:
    string codigo;
public:
    //Set
    void setCodigo(string codigo);

    //Get
    string getCodigo();

    //Construtor
    Codigo_reserva(string codigo);
    Codigo_reserva() = default;

    //Validacao
    bool validarCodigo(string codigo);
};

/** @brief Classe Cidade
  *
  * Classe que detém o nome de uma cidade, de destino ou partida da carona, identificada por uma string.
  *
  */
class Cidade {
//De 1 a 10 caracteres (pode ter " ")
private:
    string cidade;
public:
    //Set
    void setCidade(string cidade);

    //Get
    string getCidade();

    //Construtor
    Cidade(string cidade);
    Cidade() = default;

    //Validacao
    bool validarCidade(string cidade);
};

/** @brief Classe Cpf
  *
  * Classe que detém o CPF do usuário do sistema, identificado por uma string (XXX.XXX.XXX-XX).
  *
  */
class Cpf {
//formato (XXX.XXX.XXX-XX)
private:
    string cpf;
public:
    //Set
    void setCpf(string cpf);

    //Get
    string getCpf();

    //Construtor
    Cpf(string cpf);
    Cpf() = default;

    //Validacao
    bool validarCpf(string cpf);
};

/** @brief Classe Data
  *
  * Classe que detém a data agendada para a carona, identificada por uma string (DD/MM/AAAA).
  *
  */
class Data {
//formato (DD/MM/AAAA)
private:
    string data;
public:
    //Set
    void setData(string data);

    //Get
    string getData();

    //Construtor
    Data(string data);
    Data() = default;

    //Validacao
    bool validarData(string data);
    bool ano_bissexto(int ano);
};

/** @brief Classe Duracao
  *
  * Classe que detem a duração da carona, identificada por um int (entre 1 e 48).
  *
  */
class Duracao {
//Entre 1 e 48 horas
private:
    int duracao;
public:
    //Set
    void setDuracao(int duracao);

    //Get
    int getDuracao();

    //Construtor
    Duracao(int duracao);
    Duracao() = default;

    //Validacao
    bool validarDuracao(int duracao);
};

/** @brief Classe Estado
  *
  * Classe que detém o nome de um estado, de destino ou de partida da carona e identificado por uma string (Sigla: XX).
  *
  */
class Estado {
//Qualquer estado do Brasil (Sigla)
private:
    string estado;
public:
    //Set
    void setEstado(string estado);

    //Get
    string getEstado();

    //Construtor
    Estado(string estado);
    Estado() = default;

    //Validacao
    bool validarEstado(string estado);
};

/** @brief Classe Email
  *
  * Classe que detém os componentes do e-mail do usuário do sistema, identificados por duas strings.
  *
  */
class Email {
//local@dominio
private:
    string email;
public:
    //Set
    void setEmail(string email);

    //Get
    string getEmail();

    //Construtor
    Email(string email);
    Email() = default;

    //Validacao
    bool validarEmail(string email);
};

/** @brief Classe Nome
  *
  * Classe que detém um nome, identificado por uma string (o nome do usuário por exemplo).
  *
  */
class Nome {
//De 1 a 20 caracteres (pode ter " ")
private:
    string nome;
public:
    //Set
    void setNome(string nome);

    //Get
    string getNome();

    //Construtores
    Nome(string nome);
    Nome() = default;

    //Validacao
    bool validarNome(string nome);
};

/** @brief Classe Numero_agencia
  *
  * Classe que detém o número da agência e o dígito verificador, identificados por uma string
  * e um int respectivamente (XXXX-Y, onde X são algarismos do número da agência e Y é o dígito verificador).
  *
  */

class Numero_agencia {
/*Numero de Agencia (XXXX-Y), onde
X = DIGITO ; Y = DIGITO VERIFICADOR (calculado por algoritmo)*/
private:
    string numero;
    int digito;
public:
    //Set
    void setNumero(string numero);
    void setDigito(int digito);

    //Get
    string getNumero();
    int getDigito();

    //Construtor
    Numero_agencia(string numero, int digito);
    Numero_agencia() = default;

    //Validacao
    bool validarNumero(string numero);
};

/** @brief Classe Numero_conta
  *
  * Classe que detém o número da conta e o dígito verificador, identificados por uma string
  * e um int respectivamente (XXXXXX-Y, onde X são algarismos do número da conta e Y é o dígito verificador).
  *
  */

class Numero_conta {
/*Numero de Conta (XXXXXX-Y), onde
X = DIGITO ; Y = DIGITO VERIFICADOR (calculado por algoritmo)*/
private:
    string numero;
    int digito;
public:
    //Set
    void setNumero(string numero);
    void setDigito(int digito);

    //Get
    string getNumero();
    int getDigito();

    //Construtor
    Numero_conta(string numero, int digito);
    Numero_conta() = default;

    //Validacao
    bool validarNumero(string numero);
};

/** @brief Classe Preco
  *
  * Classe que detém o preço da carona, identificado por um double.
  *
  */
class Preco {
//Preco da Carona
private:
    double preco;

public:
    //Set
    void setPreco(double preco);

    //Get
    double getPreco();

    //Construtor
    Preco(double preco);
    Preco() = default;

    //Validacao
    bool validarPreco(double preco);
};

/** @brief Classe Telefone
  *
  * Classe que detém os componentes do telefone do usuário do sistema, identificados por strings. (XX-YY-ZZZZZZZZZ, onde
  * X são algarismos do DDI, Y são algarismos do DDD e Z são algarismos do número de telefone).
  *
  */
class Telefone {
// Telefone (XX-YY-ZZZZZZZZZ) todos digitos
private:
    string ddi;
    string ddd;
    string numero;

public:
    //Set
    void setDdi(string ddi);
    void setDdd(string ddd);
    void setNumero(string numero);

    //Get
    string getDdi();
    string getDdd();
    string getNumero();

    //Construtor
    Telefone(string ddi, string ddd, string numero);
    Telefone() = default;

    //Validacao
    bool validarNumero(string ddi, string ddd, string numero);
};

/** @brief Classe Senha
  *
  * Classe que detém a senha do usuário do sistema, identificada por uma string (XXXXX).
  *
  *
  */
class Senha {
//Senha no formato (XXXXX)
private:
    string senha;

public:
    //Set
    void setSenha(string senha);

    //Get
    string getSenha();

    //Construtor
    Senha(string senha);
    Senha() = default;

    //Validacao
    bool validarSenha(string senha);
};

/** @brief Classe Vagas
  *
  * Classe que detém o número de vagas de uma carona, identificado por um int (0, 1, 2, 3 ou 4).
  *
  *
  */
class Vagas {
// De 0 a 4 vagas disponiveis
private:
    int vagas;

public:
    //Set
    void setVagas(int vagas);

    //Get
    int getVagas();

    //Construtor
    Vagas(int vagas);
    Vagas() = default;

    //Validacao
    bool validarVagas(int vagas);
};


#endif // DOMINIOS_H
