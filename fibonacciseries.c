#include<stdio.h>
void fab(int);
int main()
{
int n;
 printf("enter the number of terms of a fabonacci series:   ");
 scanf("%d",&n);
 fab(n);
 return 0;
 }
 void fab(int a)
 {
  int b=0,c=1,d,i;
  printf("%d  ",b);
  for(i=1;i<a;i++)
  {
   d=b+c;
   c=b;
   b=d;
   printf("%d   ",d);
  }
  printf("\n");
  }
