
#include <unistd.h>
#include <stdio.h>
void ft_ft(int *nbr);

int main(){
  int a;
  int *ptr;
  a = 42;
  ptr = &a;
  ft_ft(ptr);
  return (0);
}


void ft_ft(int *nbr){
  //printf("%d",*nbr);
  //printf("\n");
}
