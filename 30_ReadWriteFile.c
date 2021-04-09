// Author: Shakir Hussain Itoo
// Creation Date:  March 2021
// Purpose: // C program to read and write a file.
#include <stdio.h> //Including standard input output header files.
#include <stdlib.h>//Including standard library header files.
#include <string.h>//Including string header files. 

const char* getfield(char* line, int num)
{
    const char* tok;
    for (tok = strtok(line, ";");
            tok && *tok;
            tok = strtok(NULL, ";\n"))
    {
        if (!--num)
            return tok;
    }
    return NULL;
}
int main()
{
    FILE* stream = fopen("E:\\Shakir_185_C_Repository\\read.csv", "r"); //Path of the .csv file.

    char line[1024];
    while (fgets(line, 1024, stream))
    {
        char* tmp = strdup(line);
        printf("Field 3 would be %s\n", getfield(tmp, 3));
        free(tmp);
    }
}