#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

//int main(){
  //int a,b;
  //int *ptr1,*ptr2 ;
  //a = 42;
  //b = 21;
  //ptr1 = &a;
  //ptr2 = &b;
  //ft_div_mod(a,b, ptr1,ptr2);
  //return (0);
  //}

void ft_div_mod(int a, int b, int *div, int *mod){
  *div = a / b;
  *mod = a % b;
  //printf("%d",*div);
  //printf("\n");
  //printf("%d",*mod);
  //printf("\n");
}
