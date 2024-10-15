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
