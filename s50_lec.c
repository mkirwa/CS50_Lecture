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

//program taking inputs and printing out their ascii codes

int main(void){

   string s = get_string("enter string: ");

   for(int i=0; i<strlen(s); i++){

       printf("%c %i\n",s[i],(int)s[i]);

    }
}

//Programing changing lowercases to upper cases

int main(void){

   string s = get_string("enter string: ");


   for(int i=0; i<strlen(s); i++){

      if(s[i]>='a'&& s[i]<='z'){
       printf("%c",s[i]-('a'-'A'));
      }
      else{
         printf("%c",s[i]);
      }

    }
    printf("\n");
}
