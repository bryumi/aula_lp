#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#include <conio.h>


void calculadora();
void media();
void desconto();
void fatorial_dowhile();
void fatorial_while();
void fatorial_for();
void fibonacci_dowhile();
void fibonacci_while();
void fibonacci_for();
void pa_for();
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
       printf("1- Calculadora \n");
       printf("2- Media FATEC \n");
       printf("3- Ajuste de preco \n");
       printf("4- Fatorial (DoWhile)\n");
       printf("5- Fatorial (While) \n");
       printf("6- Fatorial (For) \n");
       printf("7- Fibonacci (DoWhile)\n");
       printf("8- Fibonacci (While)\n");
       printf("9- Fibonacci (For)\n");
       printf("10- P.A (For)\n");
       printf("11- maior e menor\n");
       printf("12- ordem inversa\n");
       printf("13- multiplicar\n");
       printf("14- exponenciacao\n");
       printf("15- raiz quadrada\n");
       printf("16 - ponteiro\n");
       printf("0- Sair \n");
       printf("======================================\n");       
       
       scanf("%i", &opcao);
       
       switch(opcao){
                 case 1: calculadora();
                      break;
                 case 2: media();
                      break;
                 case 3: desconto();
                      break;
                 case 4: fatorial_dowhile();
                      break;
                 case 5: fatorial_while();
                      break;
                 case 6: fatorial_for();
                      break;
                 case 7: fibonacci_dowhile();
                      break;
                 case 8: fibonacci_while();
                      break;
                 case 9: fibonacci_for();
                      break;
                 case 10: pa_for();
                      break;
                 case 11: maiorEMenor();
                      break;
                 case 12: ordemInversa();
                      break;
                 case 13: multiplicar();
                      break;
                 case 14: expoente();
                      break;
                 case 15: raizQuadrada();
                      break;
                 case 16: ponteiro();
                      break;
        }
        system("cls");
        }while(opcao != 0);
    return 0;
}
    
    

    //FUNï¿½ï¿½O CALCULADORA
void calculadora(){
    
    int ope, n1, n2, re;
    
    printf("Escolha a operacao: \n Adiï¿½ï¿½o: 1 \n Subtracao: 2 \n Multiplicacao: 3 \n Divisao: 4 \n");
    scanf("%i", &ope);
    
    //Adiï¿½ï¿½o
    if(ope == 1){
           printf("Digite 2 numeros para somar. \n");
           scanf("%i",&n1);   
           scanf("%i",&n2);
           re = n1 + n2;
           printf("O resultado eh: %i", re);
           
    }
    
    //Subtraï¿½ï¿½o
    if(ope == 2){
           printf("Digite 2 numeros para subtrair. \n");
           scanf("%i",&n1);   
           scanf("%i",&n2);
           re = n1 - n2;
           printf("O resultado eh: %i", re);
           
    }
    
    //Multiplicaï¿½ï¿½o
    if(ope == 3){
           printf("Digite 2 numeros para Multiplicar. \n");
           scanf("%i",&n1);   
           scanf("%i",&n2);
           re = n1 * n2;
           printf("O resultado eh: %i", re);
           
    }
    
    //Divisï¿½o
    if(ope == 4){
           printf("Digite 2 numeros para Dividir. \n");
           scanf("%i",&n1);   
           scanf("%i",&n2);
           re = n1 / n2;
           printf("O resultado eh: %i", re);
           
    }
    
    fflush(stdin);
    getchar();
}
    
    //FUNï¿½ï¿½O MEDIA
void media(){
    
    float p1, p2, t1, t2, m1, m2, media;
    
    printf("Calculando media da FATEC.");
    printf("==========================");
    
    printf("\nNota P1: ");
    scanf("%f", &p1); 
     
    
    printf("\nNota T1: ");
    scanf("%f", &t1);
    
    
    m1 = (p1 * 0.7) + (t1 * 0.3);
    
    printf("\nNota P2: ");
    scanf("%f", &p2);
    
    printf("\nNota T2: ");
    scanf("%f", &t2);
    
    m2 = (p2 * 0.8) + (t2 * 0.2);
    
    media = (m1 + m2) / 2;
    
    if(media >= 6){
             printf("A media eh: %f \nStatus: APROVADO!", media);
    
    }else{
          printf("A media eh: %f \nStatus: REPROVADO!", media);
    }
    
    fflush(stdin);
    getchar();

}
    
    //FUNï¿½ï¿½O DESCONTO
void desconto(){
    
    float preco, re;
    int desc;
    
    printf("Digite o preï¿½o do produto: \n");
    scanf("%f", &preco);
    
    printf("Escolha o desconto que deseja aplicar: \n 1- 5%% \n 2- 8%% \n 3- 15%% \n 4- 40%% \n");
    scanf("%i", &desc);
    
    if(desc == 1){
            re = preco - preco * (5.0/100);
            printf("O valor com descoto eh: %.2f", re);
         
    } else{
           if(desc == 2){
            re = preco - preco * (8.0/100);
            printf("O valor com descoto eh: %.2f", re);
         
            }else{
                  if(desc == 3){
                          re = preco - preco * (15.0/100);
                          printf("O valor com descoto eh: %.2f", re);
         
                   } else{
                          if(desc == 4){
                                  re = preco - preco * (40.0/100);
                                  printf("O valor com descoto eh: %.2f", re);
         
                          }
                     }
          
            }
           
           
    }
    
    fflush(stdin);
    getchar();
}

    //FATORIAL
void fatorial_dowhile(){
     int fat;
     int re;
     int cont;
     re = 0;
     
     printf("\nInsira um numero para calcular o fatorial: ");
     scanf("%i", &fat);
     
     cont = fat;
     
     do{
        fat = fat*(cont-1);
        re = fat;
        cont = cont - 1;
                  
     }while(cont >1);
     
     printf("O fatorial do numero eh: %i", re);
     
     fflush(stdin);
     getchar();
     }
     
void fatorial_while(){
     int fat;
     int re;
     int cont;
     re = 0;
     
     printf("\nInsira um numero para calcular o fatorial: ");
     scanf("%i", &fat);
     
     cont = fat;
     
     while(cont >1){
        fat = fat*(cont-1);
        re = fat;
        cont = cont - 1;
                  
     }
     
     printf("O fatorial do numero eh: %i", re);
     
     fflush(stdin);
     getchar();
     }
     
void fatorial_for(){
     int fat;
     int re;
     int i;
     re = 0;
     
     printf("\nInsira um numero para calcular o fatorial: ");
     scanf("%i", &fat);
     
     for(i=fat ; i>1 ; i--){
        fat = fat*(i-1);
        re = fat;
                  
     }
     
     printf("O fatorial do numero eh: %i", re);
     
     fflush(stdin);
     getchar();
}
     
void fibonacci_dowhile(){
     int atu, ant, prox, pausa;
     atu = 1;
     ant = 0;
     prox = ant + atu;
     pausa = 0;

     printf("\nInsira numero de parada: ");    
     scanf("%i", &pausa);
     
     do{
        prox = ant + atu;
        ant = atu;
        atu = prox;
        pausa = pausa - 1;
        printf("Sequencia: %i\n", ant);
                                 
     } while(pausa != 0);

     fflush(stdin);
     getchar();
     }
     
void fibonacci_while(){
     int atu, ant, prox, pausa;
     atu = 1;
     ant = 0;
     prox = ant + atu;
     pausa = 0;

     printf("\nInsira numero de parada: ");    
     scanf("%i", &pausa);
     
     
     while(pausa != 0){
        prox = ant + atu;
        ant = atu;
        atu = prox;
        pausa = pausa - 1;
        printf("Sequencia: %i\n", ant);
                                
     }
     
     fflush(stdin);
     getchar();
     
     }
     
void fibonacci_for(){
     
     int atu, ant, prox, pausa;
     
     printf("\nInsira numero de parada: ");    
     scanf("%i", &pausa);
     
     
     for(atu = 1, ant = 0, prox = ant + atu; pausa>0 ; pausa--){
        prox = ant + atu;
        ant = atu;
        atu = prox;
        printf("Sequencia: %i\n", ant);
                                
     }
     
     fflush(stdin);
     getchar();
     }
    
void pa_for(){
     
     int re, atu, cont, num;
     
     printf("insira numero de parada: ");
     scanf("%i", &num);
     
     for(re = 0, atu = 0, cont = 0; cont<=num ; cont++){
            
        atu = cont;
        re = re + atu;
        
        
        
     }
        printf("Resultado: %i", re);
     
     fflush(stdin);
     getchar();
}

void maiorEMenor(){
     int valores[5], contador, maior, menor;
     maior =0;
     menor = 0;
     
     for(contador = 0; contador < 5; contador++){
                    printf("Digite um valor: ");
                    scanf("%i", &valores[contador]);
                    if(contador = 0){
                        maior = valores[contador];
                        menor = valores[contador];
                        fflush(stdin);
                    }
                    if(maior < valores[contador]){
                             maior = valores[contador];
                             fflush(stdin);
                    }
                    if(menor > valores[contador]){
                             menor = valores[contador];
                             fflush(stdin);
                    }
     }
     printf("\nValores digitados\n");
     for(contador = 0; contador < 5; contador++){
                  printf("%i", valores[contador]);
                  printf("\n");
     }
     printf("Maior valor:%i",maior);
     printf("\n");
     printf("Menor valor:%i",menor);
     fflush(stdin);
     getchar();

}
void ordemInversa(){
     int valores[5], contador;
     
     for(contador = 0; contador < 5; contador++){
                    printf("Digite um valor: ");
                    scanf("%i", &valores[contador]);
            
     }
     printf("\nValores inverso\n");
     for(contador = 4; contador >= 0; contador--){
                  printf("%i", valores[contador]);
                  printf("\n");
     }
     
     fflush(stdin);
     getchar();
}

void multiplicar(){
          int valores[5], contador, multiplicador, resultado[5];
          multiplicador = 0;
          printf("Digite o multiplicador: ");
          scanf("%i", &multiplicador);
     
     for(contador = 0; contador < 5; contador++){
                    printf("Digite um valor: ");
                    scanf("%i", &valores[contador]);
                    resultado[contador] = valores[contador] * multiplicador;        
     }

     printf("\nValores originais e multipicados\n");
     for(contador = 0; contador < 5; contador++){
                  printf("%i", valores[contador]);
                  printf(" X %i", multiplicador);
                  printf(" = ");
                  printf("%i", resultado[contador]);
                  printf("\n");
     }
     
     fflush(stdin);
     getchar();
}

void expoente(){
     double valores[5], resultado[5];
     int contador, expoente;
          expoente = 0;
          printf("Digite o expoente: ");
          scanf("%i", &expoente);
     
     for(contador = 0; contador < 5; contador++){
                    printf("Digite um valor: ");
                    scanf("%lf", &valores[contador]);
                    resultado[contador] = pow(valores[contador], expoente);        
     }

     printf("\nValores originais resultado da exponenciacao\n");
     for(contador = 0; contador < 5; contador++){
                  printf("%lf", valores[contador]);
                  printf(" ** %i", expoente);
                  printf(" = ");
                  printf("%lf", resultado[contador]);
                  printf("\n");
     }
     
     fflush(stdin);
     getchar();

}
void raizQuadrada(){
     float valores[5], resultado[5];
     int contador; 
          printf("Raiz Quadrada\n");
     
     for(contador = 0; contador < 5; contador++){
                    printf("Digite um valor: ");
                    scanf("%f", &valores[contador]);
                    resultado[contador] = sqrt(valores[contador]);        
     }

     printf("\nValores originais resultado da exponenciacao\n");
     
     for(contador = 0; contador < 5; contador++){
                  printf(" raiz quadrada de ");
                  printf("%f", valores[contador]);
                  printf(" = ");
                  printf("%f", resultado[contador]);
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

