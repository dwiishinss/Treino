#include <stdio.h>
#include <stdlib.h>

int main()
{
     int codigo = 1;
     int quantidade = 0;
     float valor = 0;
     int qcq = 0;
     float vcq = 0;
     int qbs = 0;
     float vbs = 0;
     int qbco = 0;
     float vbco = 0;
     int qhamburguer = 0;
     float vhamburguer = 0;
     int qcheeseburguer = 0;
     float vcheeseburguer = 0;
     int qrefrigerante = 0;
     float vrefrigerante = 0;

      while(codigo!=0){


     printf("Especificacao        Codigo   Preco\n");
     printf("Cachorro quente       100     R$ 3,50\n");
     printf("Bauru simples         101     R$ 5,40\n");
     printf("Bauru com ovo         102     R$ 7,00\n");
     printf("Hamburguer            103     R$ 9,50\n");
     printf("Cheeseburguer         104     R$ 12,20\n");
     printf("Refrigerante          105     R$ 4,00\n");
     printf("FINALIZAR O PROGRAMA   0\n" );
     printf("\nColoque o codigo?\n");


     scanf("%d",&codigo);

     if(codigo!=0){

     printf("\nQual a quantidade desejada?\n");
     scanf("%d",&quantidade);

     }

     if(codigo == 100){

        valor = 3.50*quantidade;
        vcq = valor;
        qcq = quantidade;

     }else if(codigo == 101){

         valor = 5.40*quantidade;
         vbs = valor;
         qbs = quantidade;


     }else if(codigo == 102){

         valor = 7.00*quantidade;
         vbco = valor;
         qbco = quantidade;


     }else if(codigo == 103){

         valor = 9.50*quantidade;
         vhamburguer = valor;
         qhamburguer = quantidade;

     }else if(codigo == 104){

         valor = 12.20*quantidade;
         vcheeseburguer = valor;
         qcheeseburguer = quantidade;

     }else if(codigo == 105){

         valor = 4.00*quantidade;
         vrefrigerante = valor;
         qrefrigerante = quantidade;

     }else if(codigo == 0){

         valor = vcq + vbs + vbco + vhamburguer + vcheeseburguer + vrefrigerante;

         if(qcq!=0){
         printf("\nForam vendidos %d Cachorros Quentes",qcq);

         }

         if(qbs!=0){
         printf("\nForam vendidos %d Bauru simples",qbs);

         }

         if(qbco!=0){
         printf("\nForam vendidos %d Bauro com ovo",qbco);
         }

         if(qhamburguer!=0){
         printf("\nForam vendidos %d Hamburguer",qhamburguer);
         }

         if(qcheeseburguer!=0){
         printf("\nForam vendidos %d Cheeseburguer",qcheeseburguer);
        }
         if(qrefrigerante!=0){
         printf("\nForam vendidos %d Refrigerante",qrefrigerante);
        }

        printf("\nFoi vendido um total de R$ %.2f",valor);

     }else{}

      }

    return 0;
}
