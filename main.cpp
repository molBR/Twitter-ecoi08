#include "mensagem.h"
#include "usuario.h"
#include "binarioarq.h"
using namespace std;

int main()
{
    mensagem g(1,"belezamermaaao");
    arquivo_binario a;
    cout<<g.getid();
    cout<<g.getconteudo();
}
