#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

#define NULL ((void *)0)

int main(int argc, char *argv[]) {
    int a, b ,c;
    int *pi;

    a = 5;
    pi = &a; // pi points to a
    b = *pi; // b is now 5

    printf("Values before NULL pointer dereference:\n");
    printf("NULL Pointer Value: %p\n", *pi);
    printf("a Pointer Value: %p\n", a);
    printf("b Pointer Value: %p\n", b);

    pi = NULL;
    c = *pi; // this is a NULL pointer dereference

    printf("\nValues after NULL pointer dereference:\n");
    printf("NULL Pointer Value: %p\n", *pi);
    printf("a Pointer Value: %p\n", a);
    printf("b Pointer Value: %p\n", b);
    printf("c Pointer Value: %p\n", c);
    
    exit(0);
}