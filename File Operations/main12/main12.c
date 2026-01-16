#include <stdio.h>

int main()
{
    char username[50];
    char password[50];
    FILE *fp;
    fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/File Operations/main12/data.txt","w");

    if(fp==NULL)
    {
        printf("File cannot open");
        return 1;
    }

    printf("Username: ");
    fgets(username,sizeof(username),stdin);
    

    printf("Password: ");
    fgets(password,sizeof(password),stdin);
    

    fprintf(fp,"Username: %sPassword:%s",username,password);

    fclose(fp);

    return 0;
}