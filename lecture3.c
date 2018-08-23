//summing up two numbers

#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int sigma(int m);
int main(void){

    int num;
        do{
            num = get_int("positive integer: ");
        }
        while(n<1);

        int answer = sigma(num);
        printf("%i", answer);

}

int sigma(int m){
    int m=0;
    for(int i=0; i<m; i++){

        sum+=i;

    }
    return sum;

}