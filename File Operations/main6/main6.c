#include <stdio.h>

struct Student {
    int id;
    float grade;
};

int main()
{
    struct Student s={1,90.5};
    FILE *fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/File Operations/main6/student.bin","wb");
    fwrite(&s,sizeof(s),1,fp);
    fclose(fp);

    return 0;

}