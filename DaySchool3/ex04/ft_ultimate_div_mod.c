#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(){
  int a,b;
  int *ptr1,*ptr2 ;
  a = 42;
  b = 21;
  ptr1 = &a;
  ptr2 = &b;
  ft_ultimate_div_mod(ptr1,ptr2);
  return (0);
}

void ft_ultimate_div_mod(int *a, int *b){
  int temp;
  temp = *a;
  *a = *a / *b;
  *b = temp % *b;
  //printf("%d",*a);
  //printf("\n");
  //printf("%d",*b);
  //printf("\n");
}
