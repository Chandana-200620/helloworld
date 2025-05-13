#include <stdio.h>
char ch;
int main() {
    printf("Enter the character:");
    scanf("%c",&ch);
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
      printf("%c is vowel",ch);
      
  }
  else{
      printf("%c is not vowel",ch);
  }
  
    
    
}
Enter the character:A
A is vowel
