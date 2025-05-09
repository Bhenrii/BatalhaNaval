#include <stdio.h>

int main()
{
    int inserir;

    int *graficoBatalha[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
    printf("  A B C D E F G H I J\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", i);
        for (int j = 0; j <= 10; j++)
        {
            if (j == 10)
            {
                printf("\n");
                break;
            }
            else if (i == 3 && j >= 3 && j < 6)
            {
                printf("> ");
            }
            else if (i >= 6 && i <=8 && j == 7)
            {
                printf("v ");
            }
            
            else
            {
                printf("%d ", graficoBatalha[i][j]);
            }
        }
    }

    return 0;
}