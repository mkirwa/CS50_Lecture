#include <stdio.h>
#include <cs50.h>
#include <string.h>

//program to take in a string and output the string word by word

int main(void){

   string s = get_string("enter string: ");

   for(int i=0; i<strlen(s); i++){

       printf("%c\n",s[i]);

    }
}