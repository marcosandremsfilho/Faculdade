#include "exerc�cio_3.h"

int main()
{
    setlocale(LC_ALL, "Portuguese"); //adiciona caracteres especiais ao c�digo
    printf("Voc� deseja inserir quantos livros? \n");
    scanf("%d", &quanti);
    inicializavetor();
    anota_livro();
    mostra_livro();
    limpa_vetor();
}
