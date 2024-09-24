#include <stdio.h>

int main(void)
{
 float voto1,voto2,voto3,media;
    printf("inserisci tre voti \n" );
    scanf("%f %f %f",&voto1 ,&voto2 ,&voto3);
    media = (voto1 + voto2 + voto3) / 3;
    printf("media = %f",media);
    return 0;
}
