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
};

class Banco {
//Codigo de banco (XXX)
private:
    string codigo;
public:
    //Set
    void setCodigo(string codigo);

    //Get
    string getCodigo();
};

class Carona {
//Codigo de carona (XXXX)
private:
    string codigo;
public:
    //Set
    void setCodigo(string codigo);

    //Get
    string getCodigo();
};

class Reserva {
//Codigo de reserva (XXXXX)
private:
    string codigo;
public:
    //Set
    void setCodigo(string codigo);

    //Get
    string getCodigo();
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
};

class Agencia {
/*Numero de agencia (XXXX-Y), onde
X = DIGITO ; Y = DIGITO VERIFICADOR (calculado por algoritmo)*/
private:
    string numero;
    int digito_verificador;
public:
    //Set
    void setNumero(string numero);
    void setDigito(int digito);

    //Get
    string getNumero();
    int getDigito();
};

class Conta {
/*Numero de conta (XXXXXX-Y), onde
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
};

class Preco {
//Preco da carona
private:
    double preco;

public:
    //Set
    void setPreco(double preco);

    //Get
    double getPreco();
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
};


#endif // DOMINIOS_H
