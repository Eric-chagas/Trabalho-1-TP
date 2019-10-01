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
    cin >> ddi >> ddd >> numero;

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

        if(teste_cpf.getCpf() != c){
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
    //Instanciamento

    Reserva r_teste;

    //Teste do codigo_reserva
    //Variavel local s de teste
    string s;
    cout << "Insira o codigo da reserva (XXXX): ";
    cin >> s;

    try {
        r_teste.setCodigo(s);
        Codigo_reserva teste_codigo = r_teste.getCodigo();

        if (teste_codigo.getCodigo() != s){
            throw invalid_argument("Tipo não suportado.\n");
        }
        //Cenario de sucesso
        cout << "Sucesso!\n";

    } catch (string x) {
        //Cenario de falha
        cout << x << endl;
    }


    //Teste do assento
    //Variavel local c de teste
    char c;
    cout << "Insira o tipo do assento, dianteiro ou traseiro (D/T): ";
    cin >> c;

    try{
        r_teste.setAssento(c);
        Assento teste_assento = r_teste.getAssento();

        if (teste_assento.getTipo() != c){
            throw invalid_argument("Tipo não suportado. Digite 'D' para dianteiro ou 'T' para traseiro.\n");
        }
        cout << "Sucesso!\n";

    } catch (string x){
        cout << x << endl;
    }


    //Teste da bagagem
    //Variavel local i de teste
    int i;
    cout << "Insira a quantidade de bagagens: ";
    cin >> i;

    try {
        r_teste.setBagagem(i);
        Bagagem teste_bagagem = r_teste.getBagagem();

        if(teste_bagagem.getNumero() != i) {
            throw invalid_argument("Tipo não suportado. Insira apenas o número de bagagens (0, 1, 2, 3 ou 4).\n");
        }
        //Cenario de sucesso
        cout << "Sucesso!\n";

    } catch(string x) {
        //Cenario de falha
        cout << x << endl;
    }
}

void TUCarona::validarCarona()
{
    //Instanciamento
    Carona c_teste;


    //Teste do codigo_carona
    //Variavel local s de teste
    string s;
    cout << "Insira o codigo da carona (XXXX): ";
    cin >> s;

    try {
        c_teste.setCodigo(s);
        Codigo_carona teste_codigo = c_teste.getCodigo();

        if (teste_codigo.getCodigo() != s){
            throw invalid_argument("Tipo não suportado.\n");
        }
        //Cenario de sucesso
        cout << "Sucesso!\n";

    } catch (string x) {
        //Cenario de falha
        cout << x << endl;
    }


    //Teste da cidade_origem
    //Variavel local c de teste
    string c;
    cout << "Insira o nome da sua cidade de origem: ";
    getline(cin, c);

    try{
        c_teste.setCidade_origem(c);
        Cidade teste_cidade_origem = c_teste.getCidade_origem();

        if(teste_cidade_origem.getCidade() != c){
            throw invalid_argument("Tipo não suportado. Digite apenas o nome da cidade.\n");
        }
        //Cenario de sucesso
        cout << "Sucesso!\n";

    } catch(string x) {
        //Cenario de falha
        cout << x << endl;
    }


    //Teste da estado_origem
    //Variaveil local e de teste
    string e;
    cout << "Insira a sigla seu Estado de origem(XX): ";
    cin >> e;

    try {

        c_teste.setEstado_origem(e);
        Estado teste_estado_origem = c_teste.getEstado_origem();

        if (teste_estado_origem.getEstado() != e) {
            throw invalid_argument("Tipo não suportado. Digite apenas a sigla do estado no formato (XX).\n");
        }

        //Cenario de sucesso
        cout << "Sucesso!\n";

    } catch(string x) {
    //Cenario de falha
        cout << x << endl;
    }


    //Teste da cidade_destino
    //Variavel local cd de teste
    string cd;
    cout << "Insira o nome da sua cidade de destino: ";
    getline(cin, cd);

    try{
        c_teste.setCidade_destino(cd);
        Cidade teste_cidade_destino = c_teste.getCidade_destino();

        if(teste_cidade_destino.getCidade() != cd){
            throw invalid_argument("Tipo não suportado. Digite apenas o nome da cidade.\n");
        }
        //Cenario de sucesso
        cout << "Sucesso!\n";

    } catch(string x) {
        //Cenario de falha
        cout << x << endl;
    }


    //Teste da estado_destino
    //Variaveil local ed de teste
    string ed;
    cout << "Insira a sigla seu Estado de origem(XX): ";
    cin >> ed;

    try {

        c_teste.setEstado_destino(ed);
        Estado teste_estado_destino = c_teste.getEstado_destino();

        if (teste_estado_destino.getEstado() != ed) {
            throw invalid_argument("Tipo não suportado. Digite apenas a sigla do estado no formato (XX).\n");
        }

        //Cenario de sucesso
        cout << "Sucesso!\n";

    } catch(string x) {
    //Cenario de falha
        cout << x << endl;
    }


    //Teste data
    //Variavel local d de teste
    string d;
    cout << "Insira a data desejada (DD/MM/AAAA): ";
    cin >> d;

    try{
        c_teste.setData(d);
        Data teste_data = c_teste.getData();

        if(teste_data.getData() != d){
            throw invalid_argument("Tipo não suportado. Digite a data no formato (DD/MM/AAAA) ex: 30/06/1998.\n");
        }
        //Cenario de sucesso
        cout << "Sucesso!\n";

    } catch(string x) {
        //Cenario de falha
        cout << x << endl;
    }


    //Teste duracao
    //Variavel local i de teste
    int i;
    cout << "Insira a duração da carona: ";
    cin >> i;

    try{
        c_teste.setDuracao(i);
        Duracao teste_duracao = c_teste.getDuracao();

        if(teste_duracao.getDuracao() != i){
            throw invalid_argument("Tipo não suportado. Digite apenas a duração da carona.\n");
        }
        //Cenario de sucesso
        cout << "Sucesso!\n";

    } catch(string x) {
        //Cenario de falha
        cout << x << endl;
    }


    //Teste vagas
    //Variavel local v de teste
    int v;
    cout << "Insira o numero de vagas: ";
    cin >> v;

    try{

        c_teste.setVagas(v);
        Vagas teste_vagas = c_teste.getVagas();

        if(teste_vagas.getVagas() != v){
            throw invalid_argument("Tipo não suportado. Digite apenas o numero de vagas da carona.\n");
        }

        //Cenario de sucesso
        cout << "Sucesso!\n";

    } catch (string x) {
        //Cenario de falha
        cout << x << endl;
    }


    //Teste preco
    //Variavel local p de teste
    double p;
    cout << "Insira o preco da carona (de 1,00 a 5.000,00): ";
    cin >> p;

    try{

        c_teste.setPreco(p);
        Preco teste_preco = c_teste.getPreco();

        if(teste_preco.getPreco() != p){
            throw invalid_argument("Tipo não suportado. Digite apenas o preço no formato (X.XX).\n");
        }
        //Cenario de sucesso
        cout << "Sucesso!\n";

    } catch (string x) {
        //Cenario de falha
        cout << x << endl;
    }
}



void TUConta::validarConta()
{
    //Instanciamento
    Conta co_teste;


    //Teste do codigo_banco
    //Variavel local s de teste
    string s;
    cout << "Insira o codigo do banco (XXX): ";
    cin >> s;

    try {
        co_teste.setBanco(s);
        Codigo_banco teste_banco = co_teste.getBanco();

        if (teste_banco.getCodigo() != s){
            throw invalid_argument("Tipo não suportado.\n");
        }
        //Cenario de sucesso
        cout << "Sucesso!\n";

    } catch (string x) {
        //Cenario de falha
        cout << x << endl;
    }


    //Teste da agencia
    //Variaveis locais numero e digito de teste
    string numero;
    int digito;
    cout << "Insira o numero da sua agencia e o digito (XXXX X): ";
    cin >> numero >> digito;

    try{
        co_teste.setNumero(numero, digito);
        Numero_agencia teste_agencia = co_teste.getAgencia();

        if(teste_agencia.getNumero() != numero || teste_agencia.getDigito() != digito){
            throw invalid_argument("Tipo não suportado. Digite o numero e o digito no formato (XXXX X).\n");
        }
        //Cenario de sucesso
        cout << "Sucesso!\n";

    } catch (string x) {
        //Cenario de falha
        cout << x << endl;
    }


    //Teste do numero_conta
   //Variaveis locais numeroc e digitoc de teste
    string numeroc;
    int digitoc;
    cout << "Insira o numero e o digito da sua conta (XXXXXX X): ";
    cin >> numeroc >> digitoc;

    try{

        co_teste.setNumero(numeroc, digitoc);
        Numero_conta teste_numero = co_teste.getNumero();

        if(teste_numero.getNumero() != numeroc || teste_numero.getDigito() != digitoc){
            throw invalid_argument("Tipo não suportado. Digite o numero da conta no formato (XXXXXX).\n");
        }
        //Cenario de sucesso
        cout << "Sucesso!\n";

    } catch (string x) {
        //Cenario de falha
        cout << x << endl;
    }

}

