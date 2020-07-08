#include <stdio.h>

int main(int argc, char *argv[])
{
    int numbers[4] = { 0 };
    char name[5] = { 'a' };

    printf("numbers: %d %d %d %d \n",
        numbers[0], numbers[1], numbers[2], numbers[3]);
    
    printf("name each: %c %c %c %c %c \n",
        name[0], name[1], name[2], name[3], name[4]);

    printf("name %s\n", name);

    // setup the numbers
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;

    name[0] = 'R';
    name[1] = 'e';
    name[2] = 'z';
    name[3] = 'a';
    name[4] = '\0';

    printf("numbers: %d %d %d %d \n",
        numbers[0], numbers[1], numbers[2], numbers[3]);
    
    printf("name each: %c %c %c %c %c \n",
        name[0], name[1], name[2], name[3], name[4]);

    printf("name %s\n", name);

    char *another = "Reza";

    printf("another each: %c %c %c %c %c \n",
        another[0], another[1], another[2], another[3], another[4]);

    int *numbers_1 = numbers;

    printf("numbers_1 %p\n", numbers_1);
    printf("numbers_1 %d\n", *numbers_1);

    return 0;
}