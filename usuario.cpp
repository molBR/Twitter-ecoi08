#include "usuario.h"

usuario::usuario(int id,int seguidores,int seguindo, char *login, char *nome)
{
    this->id =id;
    this->seguidores = seguidores;
    this->seguindo = seguindo;
    this->login = new char [(strlen(login))];
    this->nome = new char [(strlen(nome))];
}

void usuario::setid(int id)
{
    this->id = id;
}

void usuario::setseguidores(int seguidores)
{
    this->seguidores = seguidores;
}

void usuario::setseguindo(int seguindo)
{
    this->seguindo = seguindo;
}

void usuario::setlogin(char *login)
{
    this->login = new char [(strlen(login))];
}

void usuario::setnome(char *nome)
{
    this->nome = new char [(strlen(nome))];
}
