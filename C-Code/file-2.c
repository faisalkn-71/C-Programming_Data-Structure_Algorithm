#include <stdio.h>
int main()
{
    FILE *inputFile;
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL)
    {
        printf("No file found!");
    }

    FILE *outputFile;
    outputFile = fopen("output-2.txt", "w");

    while (1)
    {
        char ch = fgetc(inputFile);
        if (ch == EOF)
        {
            break;
        }
        fputc(ch, outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}