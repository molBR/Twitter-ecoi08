#include <iostream>
#include <string.h>
#include <unordered_map>
using namespace std;

unordered_multimap <string,string>
DATA;

class mensagem
{
public:
    char conteudo [140];
};

void armazena(mensagem buffer)
{
    char aux[140];
    string a = (buffer.conteudo);
    bool auxInsere = true;
    for(int i = 0; i<140; ++i)
    {
        for (int j = i; buffer.conteudo[j]!='\0' || buffer.conteudo[j]!=' '; j++)
        {
            aux[j-i] = buffer.conteudo[j];
            aux[(j+1)-i] = '\0';
        }
        if (auxInsere)
            auxInsere = false;
        DATA.insert({aux,buffer.conteudo});
    }
    return;
}


int main()
{
    return 0;
}
