#include <iostream>
#include "dominios.h"
#include "entidades.h"
#include "TUdominios.h"
#include "TUentidades.h"

using namespace std;

//Classe USUARIO

void TUUsuario::validarNome()
{
    //Variavel local s de teste
    string s;
    cout << "Insira o seu nome: ";
    getline(cin, s);

    //Instanciamento
    ;

    try {



        if(){
            throw invalid_argument("Tipo não suportado.\n")
        }
        //Cenario de sucesso

    } catch (string x){
        //Cenario de falha
        cout << x << endl;
    }
}

void TUUsuario::validarTelefone()
{

}

void TUUsuario::validarEmail()
{

}

void TUUsuario::validarSenha()
{

}

void TUUsuario::validarCpf()
{

}

//Classe RESERVA

void TUReserva::validarCodigo()
{

}

void TUReserva::validarAssento()
{

}

void TUReserva::validarBagagem()
{

}

//Classe CARONA

void TUCarona::validarCodigo()
{

}

void TUCarona::validarCidade_origem()
{

}

void TUCarona::validarEstado_origem()
{

}

void TUCarona::validarCidade_destino()
{

}

void TUCarona::validarEstado_destino()
{

}

void TUCarona::validarData()
{

}

void TUCarona::validarDuracao()
{

}

void TUCarona::validarVagas()
{

}

void TUCarona::validarPreco()
{

}

//Classe CONTA

void TUConta::validarBanco()
{

}

void TUConta::validarAgencia()
{

}

void TUConta::validarNumero()
{

}

