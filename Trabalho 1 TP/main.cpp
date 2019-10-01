#include <iostream>
#include "dominios.h"
#include "entidades.h"

using namespace std;

int main()
{
    Usuario u1;

    u1.setNome("eric");

    Nome n1 = u1.getNome();
    cout << n1.getNome() << endl;

    return 0;
}
