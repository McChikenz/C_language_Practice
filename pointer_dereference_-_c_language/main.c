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
     * Dereference Pointer -> go to physical mmeory and go to the physical memory
     * Pointer-> dereference(int)
     * grabbing the value of the referencing
     *  printf("%d", *pAge); *
     * */
    int age = 30;
    int *pAge = &age;
    
    
    printf("%d\n", *pAge);
    printf("%p", &*&age);

    return 0;
}
