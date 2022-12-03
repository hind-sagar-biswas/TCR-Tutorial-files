#include <stdio.h>
#include <stdbool.h>

void main()
{
    int sugarCount = 12;
    char firstLetter = 'H';
    char myName[] = "Hind";
    float randomVal = 2.14;
    double pi = 3.1416;
    bool isTCRBest = true;
    bool isItBad = false;

    printf("I have %d sugar cubes\n", sugarCount);
    printf("Those %d cubes are quite big\n", sugarCount);
    printf("%d", sugarCount);

    char favAnime[] = "Death Note";
    char name[] = "Light Yagami";
    int age = 17;

    printf("His name is %s and he is %d years old. He is a fan of %s\n", name, age, favAnime);

    return;
}