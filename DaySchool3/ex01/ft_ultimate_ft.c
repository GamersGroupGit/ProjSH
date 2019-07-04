#include <unistd.h>
#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main(){
  int a = 42;
  int *ptr = &a;
  int **ptrptr = &ptr;
  int ***ptrptrptr = &ptrptr;
  int ****ptrptrptrptr = &ptrptrptr;
  int *****ptrptrptrptrptr = &ptrptrptrptr;
  int ******ptrptrptrptrptrptr = &ptrptrptrptrptr;
  int *******ptrptrptrptrptrptrptr = &ptrptrptrptrptrptr;
  int ********ptrptrptrptrptrptrptrptr = &ptrptrptrptrptrptrptr;
  int *********ptrptrptrptrptrptrptrptrptr = &ptrptrptrptrptrptrptrptr;
  ft_ultimate_ft(&ptrptrptrptrptrptrptrptr);
  return (0);
}

void ft_ultimate_ft(int *********nbr){
  //printf("%d",*********nbr);
  //printf("\n");
}

