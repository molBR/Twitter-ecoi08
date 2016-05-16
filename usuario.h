#include <iostream>
#include <string.h>
using namespace std;

class usuario
{
private:
    int id;
    int seguidores;
    int seguindo;
    char *login;
    char *nome;
public:
    usuario(int id,int seguidores,int seguindo,char *login,char *nome);
    void setid(int id);
    void setseguidores(int seguidores);
    void setseguindo(int seguindo);
    void setlogin(char *login);
    void setnome(char *nome);

};
