#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b);

int main(){
  int a,b;
  int *ptr1,*ptr2 ;
  a = 42;
  b = 21;
  ptr1 = &a;
  ptr2 = &b;
  ft_swap(ptr1,ptr2);
  return (0);
}

void ft_swap(int *a, int *b){
  *a += *b;
  *b = *a -*b;
  *a -= *b;
  //printf("%d",*a);
  //printf("\n");
  //printf("%d",*b);
  //printf("\n");
}
