#include <stdio.h>
 
int fact(int n)
{
  int i;
  int fact = 1;
  {
  for (i = 1; i <= n; i++)
    fact = fact * i;
  }
  return fact;
}
 
int main()
{
  int a;
 
  printf("Veuillez entrez un nombre pour calculer sa factorielle\n");
  scanf("%d", &a);

 if(a <0){
    printf("Impossible d'executer ce calcul, veuillez entrer un nombre positif!!!");
  }
  else if(a==0){
      printf("la factorielle de ce nombre est : 1");
  }
 else{
  printf("%d! = %ld\n", a, fact(a));
 }

  return 0;
}