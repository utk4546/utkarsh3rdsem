//fizzbuzz
#include <stdio.h>

int main() 
{ 
    int i;
    for(i=0;i<=100;i++)
    if(i % 3 == 0 && i % 5 == 0){
        printf("fizzbuzz\n");
    }else{ 
        if(i % 3 == 0)
        { 
            printf("fizz\n");
        }else{ 
            if(i % 5 == 0){ 
                printf("bizz\n");
            }else{ 
                printf("%d\n",i);
            }
        }
    }
}