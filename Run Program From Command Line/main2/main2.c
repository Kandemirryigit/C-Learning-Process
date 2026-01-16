#include <stdio.h>

int main(int argc,char *argv[])
{
    
    printf("Please provide your name!\n");
    return 1;
    
    printf("Hello %s!",argv[1]);

    return 0;
}


// find this directory inside command line
// compile the c code // gcc main1.c -o main1.exe //
// run the code // main1.exe yigit //
// output: hello yigit!