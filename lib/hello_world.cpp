#include <stdio.h>
/*  <iostream> should not be avoided since it requires to statically include
    big libraries to the executable, which results in very big programs (+2MB). */

void hello_world() {
    printf("Hello world!\n");
}