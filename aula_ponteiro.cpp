#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#include <conio.h>

void maiorEMenor();
void ordemInversa();
void multiplicar();
void expoente();
void raizQuadrada();
void ponteiro();

int main(){
   
    int opcao;
    do {    
       printf("======================================\n");
       printf("Escolha uma das opcoes abaixo: \n");
       printf("1- maior e menor\n");
       printf("2- ordem inversa\n");
       printf("3- multiplicar\n");
       printf("4- exponenciacao\n");
       printf("5- raiz quadrada\n");
       printf("6 - ponteiro\n");
       printf("0- Sair \n");
       printf("======================================\n");      
       
       scanf("%i", &opcao);
       
       switch(opcao){
                 case 1: maiorEMenor();
                      break;
                 case 2: ordemInversa();
                      break;
                 case 3: multiplicar();
                      break;
                 case 4: expoente();
                      break;
                 case 5: raizQuadrada();
                      break;
                 case 6: ponteiro();
                      break;
        }
        system("cls");
        }while(opcao != 0);
    return 0;
}
   
   

void maiorEMenor(){
     int valores[5], contador, maior, menor, *pont;
     maior =0;
     menor = 0;
     
     for(contador = 0; contador < 5; contador++){
                    printf("Digite um valor: ");
                    scanf("%i", &valores[contador]);
                    if(contador == 0){
                        maior = valores[contador];
                        menor = valores[contador];
                    }
                    if(maior < valores[contador]){
                             maior = valores[contador];
                    }
                    if(menor > valores[contador]){
                             menor = valores[contador];
                    }
     }
     pont = valores;
     printf("\nValores digitados\n");
     for(contador = 0; contador < 5; contador++){
                  printf("%i", pont[contador]);
                  printf("\n");
     }
     printf("Maior valor:%i",maior);
     printf("\n");
     printf("Menor valor:%i",menor);
     fflush(stdin);
     getchar();

}
void ordemInversa(){
     int valores[5], contador, *pont;
     
     for(contador = 0; contador < 5; contador++){
                    printf("Digite um valor: ");
                    scanf("%i", &valores[contador]);
           
     }
     pont = valores;
     printf("\nValores inverso\n");
     for(contador = 4; contador >= 0; contador--){
                  printf("%i", pont[contador]);
                  printf("\n");
     }
     
     fflush(stdin);
     getchar();
}

void multiplicar(){
          int valores[5], contador, multiplicador, resultado[5], *pontVal, *pontRes;
          multiplicador = 0;
          printf("Digite o multiplicador: ");
          scanf("%i", &multiplicador);
     
     for(contador = 0; contador < 5; contador++){
                    printf("Digite um valor: ");
                    scanf("%i", &valores[contador]);
                    resultado[contador] = valores[contador] * multiplicador;        
     }
        pontVal = valores;
        pontRes = resultado;
     printf("\nValores originais e multipicados\n");
     for(contador = 0; contador < 5; contador++){
                  printf("%i", pontVal[contador]);
                  printf(" X %i", multiplicador);
                  printf(" = ");
                  printf("%i", pontRes[contador]);
                  printf("\n");
     }
     
     fflush(stdin);
     getchar();
}

void expoente(){
     double valores[5], resultado[5], *pontVal, *pontRes;
     int contador, expoente;
          expoente = 0;
          printf("Digite o expoente: ");
          scanf("%i", &expoente);
     
     for(contador = 0; contador < 5; contador++){
                    printf("Digite um valor: ");
                    scanf("%lf", &valores[contador]);
                    resultado[contador] = pow(valores[contador], expoente);        
     }
    pontVal = valores;
    pontRes = resultado;
     printf("\nValores originais resultado da exponenciacao\n");
     for(contador = 0; contador < 5; contador++){
                  printf("%lf", pontVal[contador]);
                  printf(" ** %i", expoente);
                  printf(" = ");
                  printf("%lf", pontRes[contador]);
                  printf("\n");
     }
     
     fflush(stdin);
     getchar();

}
void raizQuadrada(){
     float valores[5], resultado[5], *pontVal, *pontRes;
     int contador;
          printf("Raiz Quadrada\n");
     
     for(contador = 0; contador < 5; contador++){
                    printf("Digite um valor: ");
                    scanf("%f", &valores[contador]);
                    resultado[contador] = sqrt(valores[contador]);        
     }
    pontVal = valores;
    pontRes = resultado;

     printf("\nValores originais resultado da exponenciacao\n");
     
     for(contador = 0; contador < 5; contador++){
                  printf(" raiz quadrada de ");
                  printf("%f", pontVal[contador]);
                  printf(" = ");
                  printf("%f", pontRes[contador]);
                  printf("\n");
     }
     
     fflush(stdin);
     getchar();
}

void ponteiro() {
  //valor é a variável que
  //será apontada pelo ponteiro
  int valor = 27;
 
  //declaração de variável ponteiro
  int *ptr;
 
  //atribuindo o endereço da variável valor ao ponteiro
  ptr = &valor;
 
  printf("Utilizando ponteiros\n\n");
  printf ("Conteudo da variavel valor: %d\n", valor);
  printf ("Endereço da variavel valor: %x \n", &valor);
  printf ("Conteudo da variavel ponteiro ptr: %x", ptr);
 
  fflush(stdin);
  getchar();  
}
