#include <stdio.h>

int main()
{
    // VARIAVEL "INSERIR" PARA OS ESPAÇOS VAZIOS PREECHER COM "0" 
    int inserir = 0;
    // GERANDO UM GRAFICO 10X10
    int graficoBatalha[10][10];

    // CRIANDO COLUNAS DE "A" ATE "J" 
    printf("  A B C D E F G H I J\n");
    for (int l = 0; l < 10; l++)
    {
        // CRIANDO LINHAS DE "0" E "9" 
        printf("%d ", l);
        for (int c = 0; c <= 10; c++)
        {
            // SE CHEGAR NA COLUNA 10 PARE!
            if (c == 10)
            {
                printf("\n");
                break;
            }

            // ADICIONANDO ">" E "V" PARA O ESPAÇO DO NAVIO
            else if (l == 3 && c >= 1 && c < 4)
            {
                printf("> ");
            }
            else if (l >= 6 && l <= 8 && c == 7)
            {
                printf("v ");
            }

            // ADICIONANDO "5" PARA O ESPAÇO DO FORMATO OCTAEDRO
            else if (l == 1 && c >= 6 && c <= 8)
            {
                printf("5 ");
            }
            else if ((l <= 0 || l == 2) && c == 7)
            {
                printf("5 ");
            }

            // ADICIONANDO "3" PARA O ESPAÇO DO FORMATO EM CRUZ
            else if (l == 5 && c >= 1 && c <= 5)
            {
                printf("3 ");
            }
            else if ((l == 4 || l == 6) && c == 3)
            {
                printf("3 ");
            }

            // ADICIONANDO "1" PARA O ESPAÇO DO FORMATO CONE
            else if (l == 9 && (c >= 0 && c <= 4))
            {
                printf("1 ");
            }
            else if (l == 8 && c >=1 && c <=3 )
            {
                printf("1 ");
            }
            else if (l == 7 && c == 2)
            {
                printf("1 ");
            }
            

            // CASO O ESPAÇO NÃO SEJA ESCOLHIDO, ADICIONE "0" PARA ESPAÇO VAZIO
            else
            {
                graficoBatalha[l][c] = inserir;
                printf("%d ", graficoBatalha[l][c]);
            }
        }
    }

    return 0;
}