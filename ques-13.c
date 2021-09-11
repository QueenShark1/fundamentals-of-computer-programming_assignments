#include <stdio.h>
#include <conio.h>
 
int main(){
    char c;
    printf("Enter a Character: ");
    scanf("%c", &c);
    /* Check if input alphabet is member of set{A,E,I,O,U,a,e,i,o,u} */
    if(c == 'a' || c == 'e' || c =='i' || c=='o' || c=='u' || c=='A'
          || c=='E' || c=='I' || c=='O' || c=='U'){
        printf("%c is a Vowel\n", c);
    } else {
        printf("%c is a Consonant\n", c);
    }
    getch();
    return 0;
}                              