#include <iostream>
#include "dominios.h"
#include "entidades.h"
#include "TUdominios.h"

using namespace std;


void TUAssento::validarTipo()
{
    //Variavel local c de teste
    char c;
    cout << "Insira o tipo do assento, dianteiro ou traseiro (D/T): ";
    cin >> c;

    //Instanciamento
    Assento a1;

    try{
        a1.setTipo(c);

        if (a1.getTipo() != c){
            throw invalid_argument("Tipo não suportado. Digite 'D' para dianteiro ou 'T' para traseiro.\n");
        }
        cout << "Sucesso!\n";

    } catch (string x){
        cout << x << endl;
    }
}

void TUBagagem::validarNumero()
{
    //Variavel local i de teste
    int i;
    cout << "Insira a quantidade de bagagens: ";
    cin >> i;

    //Instanciamento
    Bagagem b1;

    try {
        b1.setNumero(i);

        if(b1.getNumero() != i) {
            throw invalid_argument("Tipo não suportado. Insira apenas o número de bagagens (0, 1, 2, 3 ou 4).\n");
        }
        //Cenario de sucesso
        cout << "Sucesso!\n";

    } catch(string x) {
        //Cenario de falha
        cout << x << endl;
    }
}

void TUCidade::validarCidade()
{
    //Variavel local s de teste
    string s;
    cout << "Insira o nome da sua cidade: ";
    cin >> s;

    //Instanciamento
    Cidade c1;

    try{
        c1.setCidade(s);

        if(c1.getCidade() != s){
            throw invalid_argument("Tipo não suportado. Digite apenas o nome da cidade.\n");
        }
        //Cenario de sucesso
        cout << "Sucesso!\n";

    } catch(string x) {
        //Cenario de falha
        cout << x << endl;
    }
}

void TUCpf::validarCpf()
{
    //Variavel local s de teste
    string s;
    cout << "Insira o seu CPF (XXX.XXX.XXX-XX): ";
    cin >> s;

    //Instanciamento
    Cpf c1;

    try{
        c1.setCpf(s);

        if(c1.getCpf() != s){
            throw invalid_argument("Tipo não suportado. Digite o CPF no formato (XXX.XXX.XXX-XX).\n");
        }
        //Cenario de sucesso
        cout << "Sucesso!\n";

    } catch(string x) {
        //Cenario de falha
        cout << x << endl;
    }
}

void TUData::validarData()
{
    //Variavel local s de teste
    string s;
    cout << "Insira a data desejada (DD/MM/AAAA): ";
    cin >> s;

    //Instanciamento
    Data d1;

    try{
        d1.setData(s);

        if(d1.getData() != s){
            throw invalid_argument("Tipo não suportado. Digite a data no formato (DD/MM/AAAA) ex: 30/06/1998.\n");
        }
        //Cenario de sucesso
        cout << "Sucesso!\n";

    } catch(string x) {
        //Cenario de falha
        cout << x << endl;
    }
}

void TUDuracao::validarDuracao()
{
    //Variavel local i de teste
    int i;
    cout << "Insira a duração da carona: ";
    cin >> i;

    //Instanciamento
    Duracao d1;

    try{
        d1.setDuracao(i);

        if(d1.getDuracao() != i){
            throw invalid_argument("Tipo não suportado. Digite apenas a duração da carona.\n");
        }
        //Cenario de sucesso
        cout << "Sucesso!\n";

    } catch(string x) {
        //Cenario de falha
        cout << x << endl;
    }
}

void TUEstado::validarEstado()
{
    //Variaveil local s de teste
    string s;
    cout << "Insira a sigla seu Estado (XX): ";
    cin >> s;

    //Instanciamento
    Estado e1;

    try {

        e1.setEstado(s);

        if (e1.getEstado() != s) {
            throw invalid_argument("Tipo não suportado. Digite apenas a sigla do estado no formato (XX).\n");
        }

        //Cenario de sucesso
        cout << "Sucesso!\n";

    } catch(string x) {
    //Cenario de falha
        cout << x << endl;
    }
}

void TUEmail::validarEmail()
{
    //Variaveis locais, local e dominio de teste
    string local, dominio;
    cout << "Insira o local e o dominio do seu e-mail, nessa ordem (local@dominio): ";
    cin >> local >> dominio;

    //Instanciamento
    Email e1;

    try {
        e1.setLocal(local);
        e1.setDominio(dominio);

        if (e1.getLocal() != local || e1.getDominio() != dominio) {
            throw invalid_argument("Tipo não suportado. Digite o local e o dominio do seu e-mail (local@dominio).\n");
        }
        //Cenario de sucesso
        cout << "Sucesso! seu e-mail é: " << e1.getLocal() << "@" << e1.getDominio() << "." << endl;

    } catch(string x) {
    //Cenario de falha
        cout << x << endl;
    }
}

void TUNome::validarNome()
{
    //Variavel local s de teste
    string s;
    cout << "Insira o seu nome: ";
    cin >> s;

    //Instanciamento
    Nome n1;

    try{

        n1.setNome(s);

        if(n1.getNome() != s){
            throw invalid_argument("Tipo não suportado. Digite seu nome.\n");
        }
        //Cenario de sucesso
        cout << "Sucesso!\n";

    } catch (string x) {
        //Cenario de falha
        cout << x << endl;
    }
}

void TUNumero_agencia::validarNumero_agencia()
{
    //Variavel local numero de teste
    string numero;
    cout << "Insira o numero da sua agencia (XXXX): ";
    cin >> numero;

    //Instanciamento
    Numero_agencia n1;

    try{
        n1.setNumero(numero);

        if(n1.getNumero() != numero){
            throw invalid_argument("Tipo não suportado. Digite o numero no formato (XXXX).\n");
        }
        //Cenario de sucesso
        cout << "Sucesso!\n";

    } catch (string x) {
        //Cenario de falha
        cout << x << endl;
    }
}

void TUNumero_conta::validarNumero_conta()
{
    //Variavel local numero de teste
    string numero;
    cout << "Insira o numero da sua conta (XXXXXX): ";
    cin >> numero;

    //Instanciamento
    Numero_conta n1;

    try{

        n1.setNumero(numero);

        if(n1.getNumero() != numero){
            throw invalid_argument("Tipo não suportado. Digite o numero da conta no formato (XXXXXX).\n");
        }
        //Cenario de sucesso
        cout << "Sucesso!\n";

    } catch (string x) {
        //Cenario de falha
        cout << x << endl;
    }
}

void TUPreco::validarPreco()
{
    //Variavel local d de teste
    double d;
    cout << "Insira o preco da carona (de 1,00 a 5.000,00): ";
    cin >> d;

    //Instanciamento
    Preco p1;

    try{

        p1.setPreco(d);

        if(p1.getPreco() != d){
            throw invalid_argument("Tipo não suportado. Digite apenas o preço no formato (X.XX).\n");
        }
        //Cenario de sucesso
        cout << "Sucesso!\n";

    } catch (string x) {
        //Cenario de falha
        cout << x << endl;
    }
}

void TUTelefone::validarTelefone()
{
    //Variaveis locais ddi, ddd e numero de teste
    string ddi, ddd, numero;
    cout << "Insira o seu ddd, o seu ddi e o seu número de telefone (separados por espaços): ";
    cin >> ddi >> ddd >> numero;

    //Instanciamento
    Telefone t1;

    try{

        t1.setDdi(ddi);
        t1.setDdd(ddd);
        t1.setNumero(numero);

        if(t1.getDdi() != ddi || t1.getDdd() != ddd || t1.getNumero() != numero){
            throw invalid_argument("Tipo não suportado. Digite o ddi, o ddd e o numero nessa ordem separados por espaços.\n");
        }
        //Cenario de sucesso
        cout << "Sucesso!\n";

    } catch (string x) {
        //Cenario de falha
        cout << x << endl;
    }
}

void TUSenha::validarSenha()
{
    //Variavel local s de teste
    string s;
    cout << "Insira a sua senha (XXXXX): ";
    cin >> s;

    //Instanciamento
    Senha s1;

    try{

        s1.setSenha(s);

        if(s1.getSenha() != s){
            throw invalid_argument("Tipo não suportado. Digite a senha no formato (XXXXX).\n");
        }

        //Cenario de sucesso
        cout << "Sucesso!\n";

    } catch (string x) {
        //Cenario de falha
        cout << x << endl;
    }
}

void TUVagas::validarVagas()
{
    //Variavel local i de teste
    int i;
    cout << "Insira o numero de vagas: ";
    cin >> i;

    //Instanciamento
    Vagas v1;

    try{

        v1.setVagas(i);
        if(v1.getVagas() != i){
            throw invalid_argument("Tipo não suportado. Digite apenas o numero de vagas da carona.\n");
        }

        //Cenario de sucesso
        cout << "Sucesso!\n";

    } catch (string x) {
        //Cenario de falha
        cout << x << endl;
    }
}

void TUCodigo_banco::validarCodigo()
{
    //Variavel local s de teste
    string s;
    cout << "Insira o codigo do banco (XXX): ";
    cin >> s;

    //Instanciamento
    Codigo_banco c1;

    try {
        c1.setCodigo(s);

        if (c1.getCodigo() != s){
            throw invalid_argument("Tipo não suportado.\n");
        }
        //Cenario de sucesso
        cout << "Sucesso!\n";

    } catch (string x) {
        //Cenario de falha
        cout << x << endl;
    }

}

void TUCodigo_carona::validarCodigo()
{
    //Variavel local s de teste
    string s;
    cout << "Insira o codigo da carona (XXXX): ";
    cin >> s;

    //Instanciamento
    Codigo_carona c1;

    try {
        c1.setCodigo(s);

        if (c1.getCodigo() != s){
            throw invalid_argument("Tipo não suportado.\n");
        }
        //Cenario de sucesso
        cout << "Sucesso!\n";

    } catch (string x) {
        //Cenario de falha
        cout << x << endl;
    }
}

void TUCodigo_reserva::validarCodigo()
{
    //Variavel local s de teste
    string s;
    cout << "Insira o codigo da reserva (XXXX): ";
    cin >> s;

    //Instanciamento
    Codigo_reserva c1;

    try {
        c1.setCodigo(s);

        if (c1.getCodigo() != s){
            throw invalid_argument("Tipo não suportado.\n");
        }
        //Cenario de sucesso
        cout << "Sucesso!\n";

    } catch (string x) {
        //Cenario de falha
        cout << x << endl;
    }
}
