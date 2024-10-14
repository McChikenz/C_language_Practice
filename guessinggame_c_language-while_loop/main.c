/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    /**
     * Guessing game
     * 
     * */
     
     int userIn;
     int secretNum = 98;
     
    //  printf("guess my number: ");
    //  scanf("%d", &userIn);
     
    //  while(userIn != secretNum) { // to guess  infinitly
         
    //  printf("guess my number: ");
    //  scanf("%d", &userIn);

    //  }
     
    //   printf(" you guess my number %d", secretNum);
     //gues a number with a limit;
     int guestCount = 0;
     int guessLimit = 3;
     int outOfGuesses = 0;
     
     while(userIn != secretNum && outOfGuesses ==0) { // to guess  infinitly
         if(guestCount < guessLimit ) {
            printf("guess my number: ");
            scanf("%d", &userIn);
             guestCount++;

         } else {
             outOfGuesses = 1;
         }
         
         


     }
     
     if(outOfGuesses == 1) {
                   printf("out of gueses");

     } else {
         printf("You win");
     }


     
    printf("Hello World");

    return 0;
}
