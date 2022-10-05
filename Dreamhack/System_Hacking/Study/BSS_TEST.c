#include <stdio.h>

void func() {
    int choice = 0;
    scanf("%d", &choice);
    if (choice)
        call_true();
    else
        call_false();
    return 0;
}