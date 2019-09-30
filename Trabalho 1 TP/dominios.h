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

    //Construtor
    Nome(string nome);
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
};


#endif // DOMINIOS_H
