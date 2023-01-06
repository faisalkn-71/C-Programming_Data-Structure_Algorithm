#include <stdio.h>

int main()
{
    FILE *logFile = fopen("log.txt", "a");
    FILE *inputFile = fopen("habijabi.txt", "r");

    if (inputFile == NULL)
    {
        fprintf(logFile, "Hello at 09:20 AM.\n");
    }

    fclose(logFile);
    fclose(inputFile);

    return 0;
}