#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{

    srand(time(NULL));

    int votos[];
    int uno = 0, dos = 0, tres = 0, cuatro = 0, cinco = 0;
    for (int i = 0; i < 20; i++)
    {
        votos[i] = rand() % 5 + 1;
        if (votos[i] == 1)
        {
            uno++;
        }
        else if (votos[i] == 2)
        {
            dos++;
        }
        else if (votos[i] == 3)
        {
            tres++;
        }
        else if (votos[i] == 4)
        {
            cuatro++;
        }
        else if (votos[i]== 5)
        {
            cinco++;
        }
    }

    for (int i = 0; i < 20; i++)
    {
        printf("%d ", votos[i]);
    }
    printf("\n");

    printf("El candidadato 1 tiene %d votos.\n", uno);
    printf("El candidadato 2 tiene %d votos.\n", dos);
    printf("El candidadato 3 tiene %d votos.\n", tres);
    printf("El candidadato 4 tiene %d votos.\n", cuatro);
    printf("El candidadato 5 tiene %d votos.\n", cinco);


    

    fflush(stdin);
    return 0;
}