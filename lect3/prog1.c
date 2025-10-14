#include<stdio.h>
int main() 
{ 
    int m,a ;
    printf("enter marks\n:");
    scanf("%d",&m);
    printf("enter attendamce:\n");
    scanf("%d",&a);
    if(a>=75 && m>=75)
    { 
        printf("A");
    } else {
        if(a>=75 && m<75 && m>=60)
    { 
        printf("B");
    }else{ 
        if(a>=75 && m<60 && m>50)
        { 
            printf("C");  
        }else { 
            if (a>75 && m<50 && m>=40)
            { 
                printf("D");
            }else{ 
                printf("fail");
            }
        }

        }
    }

}