#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

int main();

void instrucao();
void menu();

int informa(int &linhas, int &colunas);///Função responsavel por capturar o tamanho da matriz,
                                       ///e verificar se ela não ultrapssa o limite.

int alimenta(int linhas, int colunas,char matriz[][5]);///Função responsavel por alimentar a matriz


int converte(int linhas, int colunas, char matriz[][5],int converte[][5]);///Função responsavel por converter a matriz de CHAR para INT


int matriz_resultado(int linhas,int colunas,int convertida[][5],int resultado[][5]);///Função responsavel por criptografar com a matriz chave


int descripto(int linhas, int colunas,int resultado[][5]);///Função que multiplica pela inversa retornando a mensagem original.




#endif // FUNCOES_H_INCLUDED
