#include <stdio.h>

int main() {
    
    char ch;
    printf("enter a character\n");
    scanf("%c ,"&ch);
    switch(ch)  {  
    case 'a': case 'e': case 'i': case 'o': case 'u':
  case 'A': case 'E': case 'I': case 'O': case 'U':
  printf("this is vowel\n");
  break;
  default:
  printf("this is consonant \n");
  break;

}
return 0;
}
