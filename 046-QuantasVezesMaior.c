#include <stdio.h>

void ordena(int *array, int len);
void repetFirst(int *array, int len, int *bigger, int *rptt);

int main(void){
    int vetor[]={5,2,3,7,8,6,9,8,7,6,4,3,8,1,9};
    int maior, repeticoes;
    ordena(vetor, 15);
    repetFirst(vetor, 15, &maior, &repeticoes);
    printf("%d aparece %d vezes", maior, repeticoes);
}

void ordena(int *array, int len){
    for(int i=0; i<len; i++){
        for(int j=i; j<len; j++){
            if(*(array+i)<*(array+j)){ //Caso um valor seja menor que outro ele ira os comutar de posicao
                *(array+i)+=*(array+j);
                *(array+j)=*(array+i)-*(array+j);
                *(array+i)-=*(array+j);
            }
        }
    }
}

void repetFirst(int *array, int len, int *bigger, int *rptt){
    *(rptt)=0;
    *bigger=*array;
    while(*bigger==*(array+(++(*rptt)))); //Verifica quantos valores soa iguais ao primeiro valor, quando encontrar um diferente para
}