#include <iostream>
#include <stdio.h>
#include<string.h>
class mensagem
{
private:
    int id;
    char conteudo [140];
    int contretweet;
public:
    mensagem(int id,char conteudo[]);
    void setid(int id);
    void setconteudo(char conteudo[]);
    void setcontretweet(int contretweet);
    int getid();
    int getcontretweet();
    char* getconteudo ();
};
