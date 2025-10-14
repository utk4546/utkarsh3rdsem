#include<stdio.h>
int main()
{ 
    int a,b,result,p;
    printf("enter the numberes:");
    scanf("%d%d",&a,&b);
    printf("enter operators:\nadd 1,\nsub 2,\nmul 3,\ndiv 4");
    printf("\n");
    scanf("%d",&p);
    if(p==1){
        result = a+b;
        printf("%d",result);
    }
    else{ if(p==2){ 
        result=a-b;
        printf("%d",result);
    } 
     else{ if(p==3){
         result=a*b;
         printf("%d",result);
      }else{if (p==4){ 
        result=a/b;
        printf("%d",result);
    }else{ 
        printf("invalid operater");
       }
    } }
     
       
       
      }
    }
