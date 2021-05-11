#include "jogo.h"

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int i=0;
    int j=0;
    int k;
    char campo[21][21];
    char dig=0, campoM[21][21];
    char campoB[21][21];
    int  col_jogador = 10;
    int lin_jogador = 10;
    int escolha1;
    int escolha2;
    int pontos=0;

    printf("Bem-vindo ao Jogo Treinador pokemon\nInstru��es:\nA - Esquerda\nD - Direita\nW - Para cima\nS- Baixo\n\n");

    pokemon_t pok[5];

    for(i=0; i<5; i++)
    {
        printf("Entre com o nome do seu %d� pokemon: ",i+1);
        scanf("%s", &pok[i].nome);
        printf(" \n");
        printf("Entre com o n�vel do pok�mon: ");
        scanf("%d", &pok[i].level);
        printf(" \n");
        printf("Entre com o tipo do pok�mon: \n");
        printf("1- Fogo \n2- Ar \n3- El�trico\n4- Terra\n5-�gua \n");
        printf("Tipo: ");
        scanf("%d", &pok[i].tipo);
        printf(" \n");
    }

    printf("Seus pok�mons: \n");
    for(i=0; i<5; i++)
    {
        printf("%d� Pokemon: \n", i+1);
        printf("Nome: %s \nN�vel: %d \n", pok[i].nome,pok[i].level);
        if(pok[i].tipo==1)
        {
            printf("Tipo: Fogo\n");
        }
        else if(pok[i].tipo==2)
        {
            printf("Tipo: Ar\n");
        }
        else if(pok[i].tipo==3)
        {
            printf("Tipo: El�trico\n");
        }
        else if(pok[i].tipo==4)
        {
            printf("Tipo: Terra\n");
        }
        else if(pok[i].tipo==5)
        {
            printf("Tipo: �gua\n");
        }
        printf(" \n");
    }
    pokemon_t mestre[5];

    for(i=0; i<5; i++)
    {
        printf("Entre com o nome do %d� pokemon dos outros mestres: ",i+1);
        scanf("%s", &mestre[i].nome);
        printf(" \n");
        printf("Entre com o n�vel do pok�mon: ");
        scanf("%d", &mestre[i].level);
        printf(" \n");
        printf("Entre com o tipo do pok�mon: \n");
        printf("1- Fogo \n2- Ar \n3- El�trico\n4- Terra\n5- �gua\n");
        printf("Tipo: ");
        scanf("%d", &mestre[i].tipo);
        printf(" \n");
    }

    printf("Mestres pok�mons: \n");
    for(j=0; j<5; j++)
    {
        printf("%d� Pokemon: \n", j+1);
        printf("Nome: %s \nN�vel: %d \n", mestre[j].nome,mestre[j].level);
        if(mestre[j].tipo==1)
        {
            printf("Tipo: Fogo\n");
        }
        else if(mestre[j].tipo==2)
        {
            printf("Tipo: Ar\n");
        }
        else if(mestre[j].tipo==3)
        {
            printf("Tipo: El�trico\n");
        }
        else if(mestre[j].tipo==4)
        {
            printf("Tipo: Terra\n");
        }
        else if(mestre[j].tipo==5)
        {
            printf("Tipo: �gua\n");
        }
    }

    inicializa_Bioma(campoB);
    inicializa_Mapa(campoM);
    desenha_Mapa(campoM, col_jogador,lin_jogador);

    do
    {
        while(campoM[lin_jogador][col_jogador]!=TREINADOR)
        {

            scanf("%s",&dig);
            if((dig == 'a' || dig == 'A') && (col_jogador > 1))
            {

                col_jogador--;
                //atualiza_Mapa(campo);
                desenha_Mapa(campoM, col_jogador,lin_jogador);

            }
            else if((dig == 'd' || dig == 'D') && (col_jogador < 19))
            {

                col_jogador++;
                //atualiza_Mapa(campo);
                desenha_Mapa(campoM, col_jogador,lin_jogador);

            }
            else if((dig == 'w' || dig == 'W') && (lin_jogador > 1))
            {

                lin_jogador--;
                //atualiza_Mapa(campo);
                desenha_Mapa(campoM, col_jogador,lin_jogador);
            }
            else if((dig == 's' || dig == 'S') && (lin_jogador < 19))
            {

                lin_jogador++;
                //atualiza_Mapa(campo);
                desenha_Mapa(campoM, col_jogador,lin_jogador);
            }

        }
        printf("Voc� encontrou um mestre, escolha o seu pokemon, sendo 0 para o primeiro: \n");
        if(campoB[lin_jogador][col_jogador]==AGUA)
        {
            printf("Voc� ir� batalhar na �gua! +20 niveis para os pokemons desse tipo! \n");
        }
        else if(campoB[lin_jogador][col_jogador]==AR)
        {
            printf("Voc� ir� batalhar na ar! +20 niveis para os pokemons desse tipo! \n");
        }
        else if(campoB[lin_jogador][col_jogador]==TERRA)
        {
            printf("Voc� ir� batalhar na terra! +20 niveis para os pokemons desse tipo! \n");
        }
        else if(campoB[lin_jogador][col_jogador]==FOGO)
        {
            printf("Voc� ir� batalhar na fogo! +20 niveis para os pokemons desse tipo! \n");
        }
        else if(campoB[lin_jogador][col_jogador]==ELETRICIDADE)
        {
            printf("Voc� ir� batalhar na eletricidade! +20 niveis para os pokemons desse tipo! \n");
        }

        printf("Seus pok�mons: \n");
        for(i=0; i<5; i++)
        {
            printf("%d� Pokemon: \n", i+1);
            printf("Nome: %s \nN�vel: %d \n", pok[i].nome,pok[i].level);
            if(pok[i].tipo==1)
            {
                printf("Tipo: Fogo\n");
            }
            else if(pok[i].tipo==2)
            {
                printf("Tipo: Ar\n");
            }
            else if(pok[i].tipo==3)
            {
                printf("Tipo: El�trico\n");
            }
            else if(pok[i].tipo==4)
            {
                printf("Tipo: Terra\n");
            }
            else if(pok[i].tipo==5)
            {
                printf("Tipo: �gua\n");
            }
            printf(" \n");
        }

        scanf("%d",&escolha1);
        printf("Voc� escolheu %s \n", pok[escolha1].nome);
        printf(" \n");
        printf("Agora voc� ir� descobrir com quem voc� ir� duelar: \n");
        printf(" \n");

        srand(time(NULL));
        escolha2= rand()%5 +1;
        printf(" \n");

        printf("Voc� esta contra o %s\nN�vel: %d\n", mestre[escolha2].nome,mestre[escolha2].level);
        printf(" \n");

        if(mestre[escolha2].tipo==campoB[lin_jogador][col_jogador])
        {
            mestre[escolha2].level=mestre[escolha2].level+20;
            if(mestre[escolha2].level>pok[escolha1].level)
            {
                printf("Voc� perdeu!!\n");
                lin_jogador++;
            }
            else if(mestre[escolha2].level<pok[escolha1].level)
            {
                printf("Voc� ganhou, continue assim e voc� ser� o melhor! \n" );
                campoM[lin_jogador][col_jogador]=VAZIO;
                pontos++;
                pok[escolha1].level=pok[escolha1].level+10;
            }
        }

        else if(pok[escolha1].tipo==campoB[lin_jogador][col_jogador])
        {
            pok[escolha1].level=pok[escolha1].level+20;
            if(mestre[escolha2].level>pok[escolha1].level)
            {
                printf("Voc� perdeu!!\n");
                lin_jogador++;
                pok[escolha1].level=pok[escolha1].level-20;
            }
            else if(mestre[escolha2].level<pok[escolha1].level)
            {
                printf("Voc� ganhou, continue assim e voc� ser� o maior! \n" );
                campoM[lin_jogador][col_jogador]=VAZIO;
                pontos++;
                pok[escolha1].level=pok[escolha1].level-20;
                pok[escolha1].level=pok[escolha1].level+5;
            }
        }

        else
        {
            if(mestre[escolha2].level>pok[escolha1].level)
            {
                printf("Voc� perdeu!!\n");
                lin_jogador++;
            }
            else if(mestre[escolha2].level<pok[escolha1].level)
            {
                printf("Voc� ganhou, continue assim e voc� ser� o maior! \n" );
                campoM[lin_jogador][col_jogador]=VAZIO;
                pontos++;
            }
        }

        desenha_Mapa(campoM, col_jogador,lin_jogador);
        printf("Voc� est� com %d\n",pontos);
        printf(" \n");
        printf("Voce quer continuar jogando? Aperte 1 para continuar 1 e 0 para sair.\n");
        scanf("%d", &k);

    }
    while (k!=0);
    printf("Voc� saiu do jogo, espero que tenha se divertido =)");
    return 0;
}
