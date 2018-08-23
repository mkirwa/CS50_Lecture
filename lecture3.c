//A program to pick initials from a string

#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void){

    string name = get_string("name: ");
    //creates a space for 4 characters, 3 characters from the user
	//and the fourth character /0 that shows the end of the string
    char initials[4];

    int counter = 0;

    for(int i = 0; i<strlen(name); i++){

        if(isupper(name[i])){

            initials [counter] = name[i];
            counter++;
        }

    }

    initials[counter] = '\0';
    printf("%s\n",initials);

}

