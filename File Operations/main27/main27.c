
#include <stdio.h>
#include <string.h>


struct person
{
    char name[21];
    char surname[21];
    char address[101];

}employee;


int main()
{
    printf("Name Surname Address: ");
    scanf("%s %s %s",employee.name,employee.surname,employee.address);

    FILE *fp;
    unsigned long int size;
    fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/File Operations/main27/data.dat","rt");
    fprintf(fp,"%21s %21s %101s\n",employee.name,employee.surname,employee.address);
    fseek(fp,0L,SEEK_END);
    size=ftell(fp);

    printf("Count: %d\n",size/sizeof(employee));
    fclose(fp);
    
    return 0;

}







