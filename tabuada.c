#include <stdio.h>
#include <stdlib.h>

int tabuada;


int resultado (tabuada){
   int multiplicador;
   multiplicador=0;
   int resfinal;
   while (multiplicador<=10) {
      resfinal = tabuada * multiplicador;
      printf("\n%d vezes %d � igual a %d",tabuada,multiplicador,resfinal);
      multiplicador++;
   }
}

int main () {
   printf("\nDigite um n�mero para ver a sua tabuada: ");
   scanf("%d",&tabuada);
   if (tabuada==0) printf ("Que tal digitar um n�mero da pr�xima vez?");
   else resultado (tabuada);
   return 0;
   }
