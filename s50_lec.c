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

//program changing lowercases to upper cases

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


int main(int argc, string argv[]){

   if(argc==2){
      printf("hello, %s\n",argv[1]);
   }
   else{
      printf("hello world\n");
   }


}

//A program to pick initials from a string name

//A program to pick initials from a string name
//e.g Mahlon Kirwa will be M K
int main(void){

         string name = get_string("name: ");
         //creates a space for 4 characters 3 characters from the user and the fourth character /o that
         //shows the end input
         char initials[4];

         int counter = 0;

         for(int i=0; i<strlen(name); i++){
            if(isupper(name[i])){
               initials[counter]=name[i];
               counter++;
            }

            initials[counter]='\0';
            printf("%s\n",initials);
         }


}

//A progam with a function to add two sums.
//introduction to recurssion 

int main(void){

        int num;

        do{
           num = get_int("positive integet: ");
        }
        while(n<1);

        int answer = sigma(num);
        printf("%i",answer);

}

int sigma(int m){
   int m = 0;
   for(int i=0; i<=m; i++){
     int sum+=i;
   }
   return sum;
}



