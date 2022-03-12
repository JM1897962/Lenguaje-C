#include <stdio.h>
#include <math.h>
int main()
{
    float hora, min, seg, cen, vkh, vms, tse, dis;
    
    printf("Escribe la cantidad de metros de la competencia: ");
    scanf("%f", &dis);
    printf("Escribe los minutos que tardo: ");
    scanf("%f", &min);
    printf("Escribe los segundos que tardo: ");
    scanf("%f", &seg);
    printf("Escribe las centesimas que tardo: ");
    scanf("%f", &cen);
    tse = min * 60 + seg + cen/100;
    vms = dis / tse;
    vkh = (vms  * 3600)/1000;
    
    printf("\nTu velocidad expresada en m/s es %1.2f", vms);
    printf("\nTu velocidad expresada en km/h es %1.2f", vkh);
     
    return 0;
    
}
