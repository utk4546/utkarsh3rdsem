#include<stdio.h>
int main()
{ 
    int a,m;
    printf("enter attendance and marks");
  scanf("%d %d",&a,&m);
    if(a>75 && m>=75){ 
        printf("A");
    }else  {if (a>75 && m<75 && m>=65)
     { 
        printf("B");
     } else { if ( a>75 && m<65 && m>=55)
     { 
        printf("C");}
      else { if(a>75 && m<55 && m<=45)
     { 
        printf("D"); }
     else { 
        printf("F");
     }
    } 
}
    }
}






