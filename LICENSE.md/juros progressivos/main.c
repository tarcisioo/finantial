#include <stdio.h>
#include <stdlib.h>

int main()
{
   float P,D;
   float i;
   int a,b;
   
   printf("entre com Montante, taxa e n_meses:\n");
   
   scanf("%f",&P);
   scanf("%f",&i);
   scanf("%d",&b);
   
   D = P;
   
   for(a=0;a<b-1;a++){
    D = D*(i+1);
    D = D + P;
    
   }
   
   printf("valor: %0.2f",D);
   
   getchar();
   getchar();
   
  return 0;
}
