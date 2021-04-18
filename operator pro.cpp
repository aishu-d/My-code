//Write a program,which accepts two integers and an operator as a character (+,-,*,/),performs corresponding operation and displays the result.

#include<stdio.h>


int main()
{
  int a,b;
  float res;
  char c;

  printf("\n Enter any one operator +, -, *, / :");
  scanf("%c",&c);
  switch(c)
  {
    case '+':
 printf("\n Enter two numbers: ");
    scanf("%d%d",&a,&b);
 res=a+b;
    printf("\n The sum is %f",res);
    break;
    
    case '-': 
 printf("\n Enter two numbers: ");
    scanf("%d%d",&a,&b);
 res=a-b;
    printf("\n The difference is %f",res);
    break;
    
    case '*':
 printf("\n Enter two numbers: ");
    scanf("%d%d",&a,&b);
    res=a*b;
    printf("\n The product is %f",res);
    break;
    
    case '/':
 printf("\n Enter two numbers: ");
    scanf("%d%d",&a,&b);
    res=a/b;
    printf("\n The quotient is %f",res);
    break;
    
    default: printf ("\n Invalid entry");
    return 0;
  }
}















