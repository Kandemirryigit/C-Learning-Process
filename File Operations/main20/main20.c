//-----------------------------
// WRITE TO A FILE LEFT ALIGNED
//-----------------------------


#include <stdio.h>
#include <string.h>


int main()
{

    FILE *fp;  // File pointer created
    char name[16],surname[16];
    int age;
    float fever;

    fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/File Operations/main20/data.txt","a");
    if (fp == NULL) {
        printf("File could not be opened!\n");
        return 1;
    }
    
    strcpy(name,"ALI_3000000000");
    strcpy(surname,"DURU_3000000");
    age=23;
    fever=38.3;

    fprintf(fp,"%-15s %-15s %3d %2.1f\n",name,surname,age,fever);
    fclose(fp);

    return 0;
}

