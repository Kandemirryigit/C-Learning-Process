//---------------------
//READ FROM A BINARY FILE
//----------------------

#include <stdio.h>
#include <string.h>


// fprintf and fscanf uses with text files
// fwrite and fread uses with binary files

// w,r modes uses with text files
// wb,rb modes uses with binary files


int A;
FILE *fp;  // File pointer created
int main()
{
    if((fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/File Operations/main25/data.dat","rb"))==NULL)
    {
        printf("File cannot opened!!!");
        return 1;
    }
    else
    {
      while (fread(&A, sizeof(int), 1, fp) == 1) {
        printf("%d\n", A);
    }

    }

    fclose(fp);
    printf("We read the positive integer values from binary file");  
    return 0;
}






