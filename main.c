#include  <stdio.h>
#include <locale.h>

int main ()
{
  setlocale(LC_ALL,"portuguese");

  int i, j, k, m, n, H; /*Vari�veis da �rvore*/
  int o, p, q;
  int continuar;

  do
  {
        system("cls || clear"); /*limpar e come�ar de novo*/
        printf("-------------------------------------------------------------------------- Merry Christmas ----------------------------------------------------------------------------------------- \n\n"); /*cabe�alho*/

        printf ("Feliz natal! Qual a altura da sua �rvore?:\n");
        scanf ("%i", &H);

       for (i=1; i<=H; i++)/*Limita as a��es dentro da quantidade de linhas dada pelo usu�rio*/
       {
         for (j=H; j>=i; j--)/*Decresce os espa�os*/
           printf (" ");
         for (k=1; k<=i*2-1; k++) /*Imprime asteriscos de 3 em 3*/
           printf ("*");

         printf ("\n");
       }

       /*Tronco da �rvore*/
       for (m=H/2; m<H; m++)/*tamanho do tronco*/
       {
         for (n=1; n<=k/2; n++)/*quantidade padr�o de espa�os em branco para centralizar o tronco*/
           printf (" ");

         printf ("*\n");/*impress�o do tronco*/
       }

        printf("\n\nVamos imprimir mais uma?\n1. Continuar\n0. Sair\n");
        scanf("%d", &continuar);
  }
  while(continuar);

  printf("\n\n-------------------------------------------------------------------------- Boas Festas!!!----------------------------------------------------------------------------------\n\n");
  printf("By: Alisson Bispo\n");

  return 0;
}
