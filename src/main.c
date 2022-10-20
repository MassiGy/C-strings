#include "../headers/main.h"


int main(void)
{
    char *sub = malloc(10 * sizeof(char));
    char *str = malloc(20 * sizeof(char));
    char *dest = malloc(29 * sizeof(char)); // 10 + 20 -1

    copyStr(str, "theretherethere");

    replace(str, "there", "body!");

    printf("-----\n");
    printStr(str);

    /* deallocation */

    str != NULL ? free(str) : true;
    sub != NULL ? free(sub) : true;
    return 0;
}
