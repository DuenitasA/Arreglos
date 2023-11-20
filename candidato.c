#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{

    int votos[5];
    int voto;
    do
    {
        while (voto > 5 && voto < 0)
        {
        printf("Ingrese su voto, cuando sea la ultima persona ingrese 0.\n");
        scanf("%d", &voto);
        }
        

    } while (voto != 0);
    



    for (int i = 0; i < 20; i++)
    {
        printf("%d ", votos[i]);
    }
    printf("\n");

    return 0;
}