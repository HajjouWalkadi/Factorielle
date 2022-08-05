#include <stdio.h>

int main()
{
  int nombre, i, F;

  printf("Veuillez entrez un nombre pour calculer sa factorielle\n");
  scanf("%d", &nombre);

  if(nombre <0){
    printf("Veuillez entrer un nombre positif");
  }
  else if(nombre==0){
      printf("la factorielle de ce nombre est : 1");
  }
     else{
      F = 1;
      for(i=1; i<= nombre; i++)
      {
      F = F * i;
      }
  printf("La factorielle de %d = %d\n", nombre, F);
     }

}