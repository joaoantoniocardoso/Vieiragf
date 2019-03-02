#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define false 0
#define true 1
#include <windows.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int introducao=true,cenario1=false,cenario2=false,cenario3=false,cenario4=false,escolha=false,decisao1,atalho1=false,tam=20;
    printf("##PROTOCOLO MESSIAS##\neste modo de mensagem é melhor compreendido\ncom respostas binárias como:\nsim ou nao\n#TRADUÇÃO AUTOMÁTICA ATIVADA#\n\n");
    Sleep(2500);
    printf("Eu preciso de você!\nPodes me ajudar?!\n\n");
    fflush(stdin);
    char* resposta = (char*) malloc (sizeof(char)*tam);
    fgets(resposta,sizeof(resposta),stdin);

    //Introdução ao jogo
    while(introducao)
    {
        if ((strcmp("sim",resposta)== 0))
        {
            introducao=false;
            escolha=true;
        }

        else if ((strcmp("nao",resposta)== 0)||(strcmp("NAO",resposta)==0)||(strcmp("nao quero",resposta)== 0))
        {
            printf("\nPoR favor!\nÉ muito importante senhor,\nVocê vai me ajudar, certo?\n\n");

            fflush(stdin);
            fgets(resposta,sizeof(resposta),stdin);

            if (strcmp("nao",resposta)== 0)
            {
                printf("\nA sociedade se perdeu quando o homem deixou\nde encarar ao próximo como seu semelhante\n\n#FIM DE TRANSMISSÃO#");
                system("start fim01.png");
                return 0;
            }

            else if (strcmp("sim",resposta)== 0)
            {
                introducao=false;
                escolha=true;
            }

            else
            {
                printf("Não consegui entender a mensagem, mande-a novamente\n\n");
                fflush(stdin);
                char* resposta = (char*) malloc (sizeof(char)*tam);
                fgets(resposta,sizeof(resposta),stdin);

                while ((strcmp(resposta,"sim")!=0)&&(strcmp(resposta,"nao")!=0))
                {

                    printf("Não consegui entender a mensagem, mande-a novamente\n\n");
                    fflush(stdin);
                    char* resposta = (char*) malloc (sizeof(char)*tam);
                    fgets(resposta,sizeof(resposta),stdin);
                }

                if ((strcmp("sim",resposta)== 0))
                {
                    introducao=false;
                    escolha=true;
                }
                else if (strcmp("nao",resposta)== 0)
                {
                    printf("\nA sociedade se perdeu quando o homem deixou\nde encarar ao próximo como seu semelhante\n\n#FIM DE TRANSMISSÃO#");
                    return 0;
                }
            }
        }

        else
        {

            printf("Não entendi, pode repetir a mensagem?\n\n");
        }

        fflush(stdin);
        fgets(resposta,sizeof(resposta),stdin);
    }

    while(escolha)
    {
        printf("\nOBRIGADO!\n");
        Sleep(2000);
        printf("Não sei o que aconteceu, meus amigos estão em celas e meu ouvido está zunindo forte,\n");
        Sleep(4000);
        printf("consegui fugir da cela e achei um notebook\n");
        Sleep(4000);
        printf("\nTentei acessar os arquivos militares, mas tudo que havia neste computador\nera um dossiê do protocolo MESSIAS e uma foto...\n");
        Sleep(5000);
        printf("Seu IP é o primeiro que estou contatando pois é o que consta nos registros da resistência\n");
        Sleep(4000);
        printf("Enquanto tento estabelecer uma conexão melhor é preferível que você digite mensagens\n");
        Sleep(4000);
        printf("curtas e sem acentuação por conta do código\n");
        Sleep(4000);
        printf("Você está a par de nossa situação senhor?\n\n");

        fflush(stdin);
        fgets(resposta,sizeof(resposta),stdin);

        if (strcmp("sim",resposta)== 0)
        {
            escolha=false;
            cenario1=true;
        }
        else if (strcmp("nao",resposta)== 0)
        {
            escolha=false;
            cenario2=true;
        }
        else
        {

            printf("Não entendi, podes repetir?\n\n");
        }

        fflush(stdin);
        fgets(resposta,sizeof(resposta),stdin);

    }

    while (cenario1)
    {
        printf("\nOkay senhor, eu não sei minha localização exata, mas essa é a imagem que lhe dará uma pista\nVocê sabe onde fica?\n\n");
        system(" start mapa.png");
        decisao1=true;
        cenario1=false;
    }

    while (cenario2)
    {
        printf("\nOkay senhor, desde o dia que o comandante das forças táticas de espionagem dos EUA/BR morreu\n");
        Sleep(4000);
        printf("em um dos caminhões de suprimentos em um confronto com o exército venezuelano, nós do exército brasileiro\n");
        Sleep(4000);
        printf("juntamente com a resistência anti-chavista, estamos em alerta máximo para\n");
        Sleep(2000);
        printf("qualquer sinal de fraqueza que o ditador venha expor\n\n");
        Sleep(4000);
        printf("Contudo, para surpresa de meu batalhão, fomos atacados durante a noite no território brasileiro e aparentemente\nestamos em condições de prisioneiros sob essa localização da imagem\n");
        Sleep(4000);
        system(" start mapa.png");
        printf("O senhor tem noção de onde isso fica?\n\n");
        decisao1=true;
        cenario2=false;
    }

    while (decisao1)
    {
        fflush(stdin);
        fgets(lugar,sizeof(lugar),stdin);
        char* resposta = (char*) malloc (sizeof(char)*tam);

        if(strcmp("Pacaraima",lugar)==0)
        {
            printf("arroz com batata assada");
            cenario3=true;
        }

        else if (strcmp("Roraima",lugar)==0)
        {
            printf("meu tenis ta com chulé de vaca");
        }

    }

    while (atalho1)
    {
        printf("batata e repolho");
    }

    return 0;
}


