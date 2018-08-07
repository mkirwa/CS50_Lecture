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
      //putting the int before the s[i] is referred to as type casting 
       printf("%c %i\n",s[i],(int)s[i]);

    }
}


//program changing lowercases to upper cases

int main(void){

   string s = get_string("enter string: ");

   //saves time. with the comma, the program does not have to go check 
   //the length of the string every time the program is running
   for(int i=0, n=strlen(s); i<n; i++){

      if(s[i]>='a'&& s[i]<='z'){
       printf("%c",s[i]-('a'-'A'));
      }
      else{
         printf("%c",s[i]);
      }

    }
    printf("\n");
}

//Main program taking in two arguments
int main(int argc, string argv[]){

   if(argc==2){
      printf("hello, %s\n",argv[1]);
   }
   else{
      printf("hello world\n");
   }


}


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

int sigma(int m);

int main(void){

        int num;

        do{
           num = get_int("positive integer: ");
        }
        //While the input is not a positive integer, ask the user for a positive integer.
        //That's how the while works. While the number entered is not a positive integer, 
        // continue asking the user for a positive integer. 
        while(num<1);

        int answer = sigma(num);
        printf("%i",answer);

}

int sigma(int m){
    m = 0;
    int sum=0;
   for(int i=0; i<=m; i++){
     sum+=i;
   }
   return sum;
}


//A progam printing out bricks
int sigma(int m);

int main(void){

    int n;

    //get a positive integer
    do {

        n = get_int("enter the square of bricks you want: ");

    }
    while(n<=0);

    //prints out rows
    for(int i=0;i<n;i++){
        //prints out columns
        for(int j=0;j<n;j++){
            printf(" # ");
        }
        printf("\n");
    }

}

//program to count the number of characters in a string

int main(void){
  string s = get_string("Name: ");
  int n = 0;
  while(s[n]!='\0')
  {
    n++;
  }
  printf("%i\n");
}




