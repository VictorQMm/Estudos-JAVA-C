#include<stdio.h>
#include<stdlib.h>
main(){
    int x, cont=0;
        printf("Qual o valor ? ");
        scanf("%i", &x);
        for(int i=1; i<=x; i++){
            printf(" Valor de  i = %i \n", i);
            if(x%i==0){     // Se o resto da divisao de x por i for 0, significa que a divisao é exata
                cont++;
            }
        } if(cont==2){
         printf("%i Eh primo!", x);

         } else{
        printf("%i Nao eh primo!", x);
}

}
