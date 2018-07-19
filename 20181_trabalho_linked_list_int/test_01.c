#include <stdio.h>
#include "linked_list_int.h"

int main(){
  linked_list_int l1 = lli_create();
	
  int i,t;
  for (i=0; i < 8 ; ++i)
    lli_push_back(l1,i*3+1);
  t = lli_size(l1);
  printf("Tamanho de l1: %d\n",t);

	printf("Porcentagem ocupado: %2.f%\n", lli_percent_occuped(l1));//teste
	printf("\nTeste o encontar: %d\n\n", lli_find(l1, 19));

	lli_remove_from(l1, 2);//teste remover
	lli_insert_at(l1, 4, 100);//teste inserir
  printf("l1 = { ");
  for (i=0; i < t ; ++i)
    printf("%d ", lli_get(l1,i));
  printf("}\n");
	lli_remove_from(l1, 2);//teste 
	lli_pop_back(l1);//teste
  /*for (i=0; i < 8 ; ++i)
    lli_pop_back(l1);*/
  t = lli_size(l1);
  printf("Tamanho de l1: %d\n",t);

  printf("l1 = { ");
  for (i=0; i < t ; ++i)
    printf("%d ", lli_get(l1,i));
  printf("}\n");
  lli_destroy(l1); 
  return 0;
}
