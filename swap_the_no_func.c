#include<stdio.h>

int swap( int n1,int n2);

int main(){
  int a,b;
  printf("enter two numbers :");
  scanf("%d%d",&a,&b);
  swap(a,b);

 return 0;
}
int swap( int n1,int n2){
  int temp;
  temp=n1;
  n1=n2;
  n2=temp;
   printf("the swaped numbers are %d%d",n1,n2);

}