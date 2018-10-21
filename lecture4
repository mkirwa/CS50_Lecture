#include <cs50.h>
#include <stdio.h>
#include <string.h>
//program to compare two strings 
int main(void){

    char *s = get_string("S: ");
    char *t = get_string("T: ");

    if(strcmp(s,t)==0){
        printf("same\n");
    }else{
        printf("different\n");
    }
}


#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//program that gets a string, converts the first character to an upper case
//prints the previous string and the new string.
int main(void){

    char *s = get_string("S: ");
    //this statement makes sure that the program does not crash
    //if the user enters a big value and you run out of memory
    //then the program returns the null value and save the comp
    //from crushing you could as well say (if s==null) then return 1
    if(!s){
        return 1;
    }

    //allocate memory for another string
    char *t = malloc((strlen(s)+1)*sizeof(char));
    //char t declares a variable called t that it's going to store the addess of a character
    //char *t gives you the box
    //malloc --- memory allocation. It takes one argument, the number of bytes you want
    //returns a chunk of memory that is equal to that length
    //s in this arbitrary case. +1 takes into consideration the /0 the user typed in
    //malloc is completely generic. Has nothing to do with strings or integers or anything like that
    //*sizeof(char) Just to be super precise, I want that many chunks of memory times the size of the chunk of memory that I want
    //technically in C char is always 1 byte so technically this isn't necessary. Give me this size of memory each of which should be
    //this size.
    if(!t){
        return 1;
    }

    for(int i=0; i<strlen(s); i++){
        t[i] = s[i];
    }
    if(strlen(s)>0){
        t[0] = toupper(t[0]);
    }
    printf("S: %s\n",s);
    printf("T: %s\n", t);

    //free memory
    free(t);
    return 0;
}
