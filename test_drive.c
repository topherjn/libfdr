#include<stdio.h>
#include<stdlib.h>
#include"fields.h"

int main(void)
{
    IS is;

    is = new_inputstruct(NULL);

    get_line(is);

    int num = atoi(is->fields[0]);

    printf("%d\n", num);

    jettison_inputstruct(is);

    return 0;
}