//-----------------
// READ FROM A FILE
//-----------------


#include <stdio.h>
#include <string.h>


int main()
{

    FILE *fp;  // File pointer created
    char name[16],surname[16];
    int age;
    float fever;

    fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/File Operations/main20/data.txt","r");
    if (fp == NULL) {
        printf("File could not be opened!\n");
        return 1;
    }

    while (fscanf(fp, "%15s %15s %d %f", name, surname, &age, &fever) == 4) {
        printf("%-15s %-15s %3d %2.1f\n", name, surname, age, fever);
    }
    fclose(fp);

    return 0;
}
