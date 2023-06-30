#include <stdio.h>
#include <stdlib.h>

main(){
    int n, fat=1;
    printf("Insira um valor inteiro: ");
    scanf("%i",&n);
    while(n>1){
        fat= fat*n;     // Multiplica por n e armazena em fat
        n--;   // (Subtrai 1)
    }
    printf("Fatorial = %i", fat);

}