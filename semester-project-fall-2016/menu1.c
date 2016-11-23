/* menu.c */
#include <stdio.h>
#include "menu.h"

int main(void)
{
        int option;
        printf("\tHere's my Demo\n");
        printf("-----------------------------------------\n");
        printf("1. Lab 1\n2. Lab 2\n3. Lab 3\n4. Lab 4\n5. Optional Requirement: RPi in action\n0 for exit\n");
        printf("Enter your Selection : ");
        scanf("%d",&option);
        return (option);
}
