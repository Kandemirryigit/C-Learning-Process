//-------------------------------
// TAKE INPUT AND WRITE TO A FILE
//-------------------------------


// If you use %10s this type of method so if you say this take max 10 char then you don't need to use getchar after it with taking string input
// But you have to use getchar every time when you are working with integer and floats


#include <stdio.h>
#include <string.h>


int main()
{

    FILE *fp;  // File pointer created
    char name[16],surname[16];
    int age,count=0;
    float fever;

    printf("Name Surname: ");
    scanf("%15s %15s",name,surname);  // Look at this.I saw this first time in my life
    

    printf("Age:");
    scanf("%d",&age);
    getchar();

    printf("Fever: ");
    scanf("%f",&fever);
    getchar();


    fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/File Operations/main24/data.txt","a");
    if (fp == NULL) {
        printf("File could not be opened!\n");
        return 1;
    }

    fprintf(fp,"%s %s %d %3.1f\n",name,surname,age,fever);
    fclose(fp);

    return 0;
}