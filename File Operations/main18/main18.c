#include <stdio.h>

int main()
{
    int arr[10];
    int i=0;

    FILE *fp;
    fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/File Operations/main18/data.txt","r");
    if(fp==NULL)
    {
        printf("File cannot open");
        return 1;
    }

    while(fscanf(fp,"%d",&arr[i])==1)
    {
        printf("%d\n",arr[i]);
        i++;
    }

    fclose(fp);

    return 0;
}