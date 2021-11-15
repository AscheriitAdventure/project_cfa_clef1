/*
*   Exercice 0,1,2:
*   --> créer 2 fonctions qui affiche leurs nom sur le terminal
*   --> créer/exécuter 2 threads
*
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>

// Structure
typedef struct{
  char nomThread[20];
}ListThread;

// Fonctions fonctionnelles
void afficherLigne(int n);

// Fontions but exercices
ListThread insertNom(ListThread numberThead[50]);
static void *fonctionA(void *value)

int main(int argc, char const *argv[])
{
  ListThread numberThead[50];
  // Remplissage-Recencement
  insertNom(numberThead);
  for (int i = 0; i < 5; ++i)
  {
    for (int j = 0; j < 10; ++j)
    {
      printf("%s\n",numberThead[i].nomThread);
    }
    afficherLigne(30);
  }
  return 0;
}

void afficherLigne(int n){
    int i;
    for( i = 0; i < n; i++)
    {
        printf("-");
    }
    printf("\n");
}

ListThread insertNom(ListThread numberThead[50]){
  ListThread list;
  for (int i = 0; i < 4; ++i)
  {
    sprintf(list.numberThread,"Thread%d",i);
    numberThead[i] = list;
  }
}
