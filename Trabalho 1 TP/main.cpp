/*A funcao main no momento esta sendo utilizada para teste das classes implementadas.*/

#include <iostream>
#include "dominios.h"
#include "entidades.h"
#include "TUdominios.h"
#include "TUentidades.h"

using namespace std;

int main()
{
    //Instanciamento das classes de teste Entidades
    TUUsuario teste_usuario;
    TUReserva teste_reserva;
    TUCarona teste_carona;
    TUConta teste_conta;

    cout << "Rodando os codigos de teste de entidades...\n\n";

    cout << "Classe em teste: Usuario.\n";
    teste_usuario.validarUsuario();

    cout << "Classe em teste: Reserva.\n";
    teste_reserva.validarReserva();

    cout << "Classe em teste: Carona.\n";
    teste_carona.validarCarona();

    cout << "Classe em teste: Conta.\n";
    teste_conta.validarConta();

    cout << "\nTodas as classes entidade funcionam como esperado!\n\n\n";

    //Implementacao das classes de teste de dominio
    TUAssento teste_assento;
    TUBagagem teste_bagagem;
    TUCidade teste_cidade;
    TUCodigo_banco teste_codigo_banco;
    TUCodigo_carona teste_codigo_carona;
    TUCodigo_reserva teste_codigo_reserva;
    TUCpf teste_cpf;
    TUData teste_data;
    TUDuracao teste_duracao;
    TUEmail teste_email;
    TUEstado teste_estado;
    TUNome teste_nome;
    TUNumero_agencia teste_numero_agencia;
    TUNumero_conta teste_numero_conta;
    TUPreco teste_preco;
    TUSenha teste_senha;
    TUTelefone teste_telefone;
    TUVagas teste_vagas;

    cout << "Rodando os codigos de teste de dominios...\n\n";

    cout << "Classe em teste: Assento.\n";

    teste_assento.validarTipo();

    cout << "Classe em teste: Bagagem.\n";

    teste_bagagem.validarNumero();

    cout << "Classe em teste: Cidade.\n";

    teste_cidade.validarCidade();

    cout << "Classe em teste: Codigo_banco.\n";

    teste_codigo_banco.validarCodigo();

    cout << "Classe em teste: Codigo_carona.\n";

    teste_codigo_carona.validarCodigo();

    cout << "Classe em teste: Codigo_reserva.\n";

    teste_codigo_reserva.validarCodigo();

    cout << "Classe em teste: CPF.\n";

    teste_cpf.validarCpf();

    cout << "Classe em teste: Data.\n";

    teste_data.validarData();

    cout << "Classe em teste: Duracao.\n";

    teste_duracao.validarDuracao();

    cout << "Classe em teste: E-mail.\n";

    teste_email.validarEmail();

    cout << "Classe em teste: Estado\n";

    teste_estado.validarEstado();

    cout << "Classe em teste: Nome.\n";

    teste_nome.validarNome();

    cout << "Classe em teste: Numero_agencia\n";

    teste_numero_agencia.validarNumero_agencia();

    cout << "Classe em teste: Numero_conta\n";

    teste_numero_conta.validarNumero_conta();

    cout << "Classe em teste: Preco.\n";

    teste_preco.validarPreco();

    cout << "Classe em teste: Senha.\n";

    teste_senha.validarSenha();

    cout << "Classe em teste: Telefone.\n";

    teste_telefone.validarTelefone();

    cout << "Classe em teste: Vagas.\n";

    teste_vagas.validarVagas();

    cout << "Todas as classes de dominio funcionam como esperado!\n\n";

    return 0;
}
