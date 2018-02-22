#include <stdio.h>
#include <stdlib.h>

int main()
{

    float x,y,alta,baixa;
    int i;
    for(i=0;i<100;i++){

        printf("\n Valor %%:");
        scanf("%f",&x);
        printf("Atual: %0.2f%%............Oposto: ",x);

        y =(x/100 + 1);
        y = 1/y;
        y = y - 1;
        y = 100*y;
        alta = y*0.618;
        baixa = y*0.382;




        printf("%0.2f%%..........FIB: alta %0.2f%%  baixa %0.2f%%\n",y,alta,baixa);

    }



    return 0;
}
