#include <stdio.h>
int main(){
    double imposto, totalgasto, multa1, multa2;
    printf("Digite quantos dolares voce esta levando:\n");
    scanf("%lf", &totalgasto);
    imposto = 0.5;
    if (totalgasto > 500){
        printf("Você está levando um valor acima do permitido.\n");
        multa1 = totalgasto - 500;
        multa2 = multa1 * imposto;
        printf("Você deve pagar: %.lf dolares de imposto.", multa2);
    }
    else{
        printf("Sem multa");
    }
return 0;
}
