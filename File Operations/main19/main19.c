//---------------------
// WRITE TO A FILE
//---------------------


#include <stdio.h>
#include <string.h>


int main()
{
    FILE *fp;  // File pointer created
    char name[30],surname[30];
    int age;
    float fever;

    // File opened in this path in append mode
    fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/File Operations/main19/data.txt","a");
    if (fp == NULL) {
        printf("File could not be opened!\n");
        return 1;
    }

    // We should use strcpy to give a string to a variable
    strcpy(name,"Yigit");
    strcpy(surname,"Kandemir");
    age=20;
    fever=38.5;

    // The type of the file
    fprintf(fp,"%s %s %d %2.1f\n",name,surname,age,fever);
    fclose(fp);

    return 0;
}