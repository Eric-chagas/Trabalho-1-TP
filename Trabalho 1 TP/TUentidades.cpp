#include <iostream>
#include "dominios.h"
#include "entidades.h"
#include "TUdominios.h"
#include "TUentidades.h"

using namespace std;

void TUUsuario::validarUsuario()
{
    //Instanciamento

    Usuario u_teste;

    //Validação do Nome:
    //Variavel local n de teste
    string n;
    cout << "Insira o seu nome: ";
    getline(cin, n);

    //Teste

    try{
        u_teste.setNome(n);
        Nome teste_nome = u_teste.getNome();
        if(teste_nome.getNome() != n){
            throw invalid_argument("Tipo não suportado.\n");
        }
        //Cenario de sucesso
        cout << "Sucesso!\n";

    } catch (string x){
        //Cenario de falha
        cout << x << endl;
    }

    //Validação do Telefone
    //Variaveis locais ddi, ddd e numero de teste

    string ddi, ddd, numero;
    cout << "Insira o seu ddi, ddd e numero de telefone nessa ordem separados por espaços: ";
    cin << ddi << ddd << numero;

    try{
        u_teste.setTelefone(ddi, ddd, numero);
        Telefone teste_telefone = u_teste.getTelefone();

        if(teste_telefone.getDdi() != ddi || teste_telefone.getDdd() != ddd || teste_telefone.getNumero() != numero){
            throw invalid_argument("Tipo não suportado.\n");
        }
        //Cenario de sucesso
        cout << "Sucesso! seu telefone: " << "+" << teste_telefone.getDdi() << " (" << teste_telefone.getDdd() << ") " << teste_telefone.getNumero() << endl;

    } catch (string x){
        //Cenario de falha
        cout << x << endl;
    }


    //Validação do Email
    //Variaveis locais, local e dominio de teste
    string local, dominio;
    cout << "Insira o local e o dominio do seu e-mail, nessa ordem (local@dominio): ";
    cin >> local >> dominio;

    try {
        u_teste.setEmail(local, dominio);
        Email teste_email = u_teste.getEmail();

        if (teste_email.getLocal() != local || teste_email.getDominio() != dominio) {
            throw invalid_argument("Tipo não suportado. Digite o local e o dominio do seu e-mail (local@dominio).\n");
        }
        //Cenario de sucesso
        cout << "Sucesso! seu e-mail é: " << teste_email.getLocal() << "@" << teste_email.getDominio() << "." << endl;

    } catch(string x) {
    //Cenario de falha
        cout << x << endl;
    }


    //Validação do Senha
    //Variavel local s de teste
    string s;
    cout << "Insira a sua senha (XXXXX): ";
    cin >> s;

    try{

        u_teste.setSenha(s);
        Senha teste_senha = u_teste.getSenha();

        if(teste_senha.getSenha() != s){
            throw invalid_argument("Tipo não suportado. Digite a senha no formato (XXXXX).\n");
        }

        //Cenario de sucesso
        cout << "Sucesso!\n";

    } catch (string x) {
        //Cenario de falha
        cout << x << endl;
    }


    //Validação do CPF
    //Variavel local s de teste
    string c;
    cout << "Insira o seu CPF (XXX.XXX.XXX-XX): ";
    cin >> c;

    try{
        u_teste.setCpf(c);
        Cpf teste_cpf = u_teste.getCpf();

        if(c1.getCpf() != c){
            throw invalid_argument("Tipo não suportado. Digite o CPF no formato (XXX.XXX.XXX-XX).\n");
        }
        //Cenario de sucesso
        cout << "Sucesso!\n";

    } catch(string x) {
        //Cenario de falha
        cout << x << endl;
    }

}

void TUReserva::validarReserva()
{
    //Teste do codigo_reserva

    //Teste do assento

    //Teste da bagagem
}

void TUCarona::validarCarona()
{

}

void TUConta::validarConta()
{

}

