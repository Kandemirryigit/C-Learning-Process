// Writing to a file



#include <stdio.h> // FILE,fopen,fprintf,fclose,printf

int main()
{


    FILE *fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/File Operations/main2/data.txt","w");

    // If fopen can't open the file then it returns NULL
    if(fp==NULL)
    {
        printf("File could not be opened\n");
        return 1;
    }

    // we use fprintf to write a file
    fprintf(fp, "Hello File!\n");
    fprintf(fp, "Number: %d\n", 42);

    // I should close the file when I'm done with it
    fclose(fp);

    return 0;

}