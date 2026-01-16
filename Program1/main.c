#include <stdio.h>
#include <stdlib.h>



struct Student
{
    int id;
    char name[30];
    char surname[30];
    int firstGrade;
    int secondGrade;
};



int addStudent()
{
    FILE *fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/Program1/data.txt","a");
    if(fp==NULL)
    {
        printf("File cannot open");
        return 1;
    }

    struct Student s;

    printf("\n\n\n\n----------------------------\n");
    printf("-------- ADD STUDENT -------\n");
    printf("----------------------------\n");

    printf("\nId: ");
    scanf("%d",&s.id);
    
    printf("Name: ");
    scanf("%s",s.name);

    printf("Surname: ");
    scanf("%s",s.surname);
    
    printf("First Grade: ");
    scanf("%d",&s.firstGrade);

    printf("Second Grade: ");
    scanf("%d",&s.secondGrade);

    fprintf(fp,"%d %s %s %d %d\n",s.id,s.name,s.surname,s.firstGrade,s.secondGrade);

    fclose(fp);


    return 0;

   
}





int showStudents()
{
    char line[200];
    FILE *fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/Program1/data.txt","r");
    
    printf("\n\n\n\n----------------------------\n");
    printf("-------- SHOW STUDENT -------\n");
    printf("----------------------------\n");

    if(fp==NULL)
    {
        printf("File cannot open");
        return 1;
    }

    while(fgets(line,sizeof(line),fp)!=NULL)
    {
        printf("%s",line);
    }

    fclose(fp);


}







int deleteStudent()
{
    int deleteId;
    int found=0;

    FILE *fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/Program1/data.txt","r");
    FILE *temp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/Program1/temp.txt","w");

    printf("\n\n\n\n--------------------------------\n");
    printf("-------- DELETE STUDENT ---------\n");
    printf("---------------------------------\n");

    if(fp==NULL || temp==NULL)
    {
        printf("File cannot open");
        return 1;
    }

    printf("Enter student ID to delete: ");
    scanf("%d", &deleteId);

    struct Student s;

    // This block means if you found the given id then skip if not write it.
    while(fscanf(fp,"%d %s %s %d %d",&s.id,s.name,s.surname,&s.firstGrade,&s.secondGrade)==5)
    {
        if(s.id==deleteId)
        {
            found=1;
            continue;
        }
    

    fprintf(temp,"%d %s %s %d %d\n",s.id,s.name,s.surname,s.firstGrade,s.secondGrade);

    }

    fclose(fp);
    fclose(temp);

    remove("C:/Users/CASPER/Desktop/C-Learning-Proccess/Program1/data.txt");
    rename("C:/Users/CASPER/Desktop/C-Learning-Proccess/Program1/temp.txt",
           "C:/Users/CASPER/Desktop/C-Learning-Proccess/Program1/data.txt");
        

    if(found)
        printf("Student Deleted Successfully\n");
    else
        printf("Student not Found");

    return 0;



}   







void exitFunc()
{
    exit(0);
}









int main()
{
    int answer=0;

    do
    {
        printf("\n\n\n\n---------------------\n");
        printf("-------- MENU -------\n");
        printf("---------------------\n");
        printf("1-Add Student\n");
        printf("2-Show Students\n");
        printf("3-Delete Student\n");
        printf("4-Exit\n");

        printf("Choose: ");
        scanf("%d",&answer);


        if(answer==1)
            addStudent();
        else if(answer==2)
            showStudents(); 
        else if(answer==3)
            deleteStudent();
        else if(answer==4)
            exitFunc();
        else
         printf("Please write a valid number");

    }while(1);




    return 0;
}