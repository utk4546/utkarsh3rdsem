#include<stdio.h>
#include<conio.h> 
int main ()
{     int arr[7]={1 ,3,4,5,6,-5,7};
     int k=7;
     for (int i=0;i<7;i++)
     { 
        for (int j=0;j<7;j++){
            if(arr[i]+arr[j]==k){
                printf("\nelement of index %d and %d = %d",i,j,k);
                return 1;
            }
         }

     }
    
    
    return 0;
}