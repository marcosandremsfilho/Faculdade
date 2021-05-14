#include "exerc�cio_3.h"

void inicializavetor()
{
    srand(time(NULL));
    vetor = malloc(10*sizeof (int*));
}

void anota_livro()
{
    int i=0;
    int lanca;
    for(i=0; i<quanti; i++)
    {
        printf("Insira o nome do Livro: \n");
        fflush(stdin);
        fgets(vetor[i].nome,30, stdin);

        printf("Insira o nome do autor: \n");
        fflush(stdin);
        fgets(vetor[i].autor,30, stdin);

        printf("Insira o ano de lan�amento: \n");
        scanf("%d", &lanca);
        vetor[i].lancamento = lanca;

        printf("Insira o nome da editora: \n");
        fflush(stdin);
        fgets(vetor[i].editora,30, stdin);

        printf("Insira a classifica��o do livro: \n");
        fflush(stdin);
        fgets(vetor[i].classificacao,30, stdin);
    }
}

void mostra_livro()
{
    int i=0;
    for(i=0; i<quanti; i++)
    {
        printf("\nLivro: %s \nAuto: %s \nLan�amento: %d\nEditora: %s\nClassifica��o: %s\n", vetor[i].nome, vetor[i].autor,vetor[i].lancamento, vetor[i].editora, vetor[i].classificacao);
    }
}
