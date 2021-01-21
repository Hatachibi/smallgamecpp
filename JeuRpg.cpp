#include <JeuRpg.h>

int readCharacter(char* toRead, int size)
{
    char* enterPosition = NULL;

    if(fgets(toRead, size, stdin) != NULL)
    {
        enterPosition = strchr(toRead, '\n');
        if(enterPosition != NULL)
        {
            *enterPosition = '\0';
        }
        return 1;
    }
    else
    {
        return 0;
    }
}

nameCharacter enterName()
{
    nameCharacter name;

    printf("What's your name ?\n");
    while(readCharacter(name.name, NAMESIZEMAX))
    {
        perror("capture problem");
    }

    return name;
}



int main(void)
{
    enterName();
    return 1;
}