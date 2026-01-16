//---------------------
//WRITE TO A BINARY FILE
//----------------------

#include <stdio.h>
#include <string.h>


int A;
FILE *fp;  // File pointer created
int main()
{
    if((fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/File Operations/main25/data.dat","wb"))==NULL)
    {
        printf("File cannot opened!!!");
        return 1;
    }
    else
    {
        do{
            printf("Enter a number: ");
            scanf("%d",&A);
            if(A>0)
                fwrite(&A,sizeof(int),1,fp);
        }while(A>0);
    }

    fclose(fp);
    printf("We wrote the Positive integer values to the binary file ");
    
    return 0;
}






