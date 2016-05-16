#include "mensagem.h"

mensagem::mensagem(int id,char conteudo[])
{
    this->id = id;
    strcpy(this->conteudo,conteudo);
    contretweet =0;
}

void mensagem::setid(int id)
{
    this->id = id;
}

void mensagem::setcontretweet(int contretweet)
{
    this->contretweet = contretweet;
}

void mensagem::setconteudo(char conteudo[])
{
    strcpy(this->conteudo,conteudo);
}

int mensagem::getid()
{
    return id;
}

int mensagem::getcontretweet()
{
    return contretweet;
}

char *mensagem::getconteudo()
{
    return *&conteudo;//mitei <--
}

