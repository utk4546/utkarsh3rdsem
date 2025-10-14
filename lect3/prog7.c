#include<stdio.h>
int main()
{ 

   int a,b,result,choice ;
   printf("enter the numbers:");
   scanf("%d%d",&a,&b);
   printf("ennter choice 1 for add\n 2 for sub\n 3 for mul\n 4 for div:\n");
   scanf("%d",&choice);
   switch(choice){ 
      case 1: 
      result=a+b;
      printf("%d",result);
      break;
      case 2:
      result=a-b;
      printf("%d",result);
      break;
      case 3:
      result=a*b;
      printf("%d",result);
      break;
      case 4:
      
      if(b!=0){
         result=a/b;
      printf("%d",result);
      }else{ printf("division not possible ");}
      break;
      default : 
      printf("invalid choice ");
   }
   return 0;
}   

