#include <stdio.h>
#include <stdlib.h>

int main (){

  int opt1;
  int opt2;
  int qtd;
  float valor_compra;
  float valor_caixa;

  valor_caixa=0;

   while(1){
        printf("\n\nDeseja iniciar a compra?: \n\n1 - sim\n2 - fechar caixa\n\n opcao ");
        scanf("%d",&opt1);

        if(opt1==1) {//Opcao:sim}
            valor_compra=0;

             while (1){
                printf("\n\n");
                printf("1- Banana\t R$ 10,00\n");
                printf("2- Bala de Coco\t R$ 15,00\n");
                printf("3- Macarrão\t R$ 20,00\n");
                printf("4- Sabonete\t R$8,00\n");
                printf("5- Nutella\t R$40,00\n");
                printf("6- Batata frita\t R$25,00\n");
                printf("98 - cancelar compra\n");
                printf("99 - fechar compra\n\n");

                scanf("%d",&opt2);

                if(opt2==1){
                    printf("\n\nquantidade do produto 1:");
                    scanf("%d",&qtd);
                    valor_compra = valor_compra + qtd*10;
                    printf("\n\nvalor parcial:R$ %.2f",valor_compra);
                }
                else{
                    if(opt2==98){
                        valor_compra=0;
                        printf("********* COMPRA CANCELADA*********\n\n\n");
                        break;
                    }
                    else{
                        if(opt2==99){
                            printf("\nvalor a pagar: R$%.2f",valor_compra);
                            valor_caixa= valor_caixa + valor_compra;
                            break;
                        }
                        else{
                            if(opt2==2){
                                printf("\n\nquantidade do produto 2:");
                                scanf("%d",&qtd);
                                valor_compra = valor_compra + qtd*15;
                                printf("\n\nvalor parcial:R$ %.2f",valor_compra);
                            }
                            else{
                                if(opt2==3) {
                                 printf("\n\nquantidade do produto 3:");
                                 scanf("%d",&qtd);
                                 valor_compra = valor_compra + qtd*20;
                                 printf("\n\nvalor parcial:R$ %.2f",valor_compra);
                                }
                             else {
                                 if (opt2==4){
                                    printf("\n\nquantidade do produto 4:");
                                scanf("%d",&qtd);
                                valor_compra = valor_compra + qtd*8;
                                printf("\n\nvalor parcial:R$ %.2f",valor_compra);
                                }
                            else {
                                if (opt2==5){
                                printf("\n\nquantidade do produto 5:");
                                scanf("%d",&qtd);
                                valor_compra = valor_compra + qtd*40;
                                printf("\n\nvalor parcial:R$ %.2f",valor_compra);
                                }
                            else {
                                if(opt2==6){
                                printf("\n\nquantidade do produto 6:");
                                scanf("%d",&qtd);
                                valor_compra = valor_compra + qtd*25;
                                printf("\n\nvalor parcial:R$ %.2f",valor_compra);
                                        }
                                    }
                                }
                              }
                            }
                        }
                    }
                }
            }
        }
        else {
            if(opt1==2){//Opcao:fechar caixa
                printf("\n\n VALOR DO CAIXA: R$%.2f\n\n", valor_caixa);
                valor_caixa=0;
                printf("\n\n*******CAIXA ZERADO*****\n\n");
            }
            else {//opcao invalida
                printf("****OPÇÂO INVALIDA****\n\n\n");
            }
        }









 }
return 0;
 }
