#include<stdio.h>
int lcm(int a, int b);
int main()
{
  int num1,num2,lcm
    printf("Enter any two numbers to find lcm");
  scanf("%d%d",&num1,&num2);
  if(num1>num2)
    LCM =lcm(num2,num1);
  else
    LCM =lcm(num1,num2);
  printf("LCM of %d and %d =%d",num1,num2,lcm);
  return 0;
}
int lcm(int a,int b);
{
  static int multiple =0;
  multiple +=b;
  if((multiple % a == 0)&&(multiple %b ==0))
  {
    return multiple;
  }
  else
  {
    return lcm(a,b);
  }
}



Input
12,30
  Output
  60
  
    
