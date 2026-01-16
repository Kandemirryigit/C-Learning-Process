#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];

    fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/File Operations/main7/data.txt","w");
    if(fp==NULL)
    {
        printf("Cannot open file");
        return 1;
    }

    printf("Enter Your name: ");
    fgets(name,sizeof(name),stdin);

    fprintf(fp,"%s",name);

    fclose(fp);


    return 0;
}



// fgets:
// Reads a whole line of text from a stream (usually stdin)
// Stops when: newline \n is read,buffer size − 1 is reached,EOF
// syntax: fgets(buffer, size, stdin);

// scanf:
// Reads formatted input
// Stops reading at: whitespace (space, \n, \t) unless you tell it otherwise
