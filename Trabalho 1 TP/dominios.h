#ifndef DOMINIOS_H
#define DOMINIOS_H

using namespace std;

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
};

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
};

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
};

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
};

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
};

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
};

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
};

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
};

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
};

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
};

class Email {
//local@dominio
private:
    string local;
    string dominio;
public:
    //Set
    void setLocal(string local);
    void setDominio(string dominio);

    //Get
    string getLocal();
    string getDominio();

    //Construtor
    Email(string local, string dominio);
    Email() = default;
};

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
};

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
};

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
};

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
};

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
};

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
};

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
};


#endif // DOMINIOS_H
