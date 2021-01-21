#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define NAMESIZEMAX 15

struct nameCharacter
{
    char name[NAMESIZEMAX];
};

int readCharacter(char* toRead, int size);

nameCharacter enterName();