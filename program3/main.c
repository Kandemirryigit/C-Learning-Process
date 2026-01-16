
// It is vital to clear the buffer after taking input
// I prefer taking int input with scanf.You can clear the buffer with getchar() function after scanf
// Actually int or str it doenst matter you can clear the buffer with getchar() after every input operations
// But there is something important.If you want to take a string input with scanf scanf reads to just a newline character
// there is a formula to take string input with spaces in scanf %[^\n]
// But you can also use fgets to get a string with spaces
// But as I said before the most important thing is clearing the buffer after every input operation




#include <stdio.h>
#include <stdlib.h>
#include <string.h>



#define MAX_USERS 100



int main();
void inAccount();
void exitFunction();


int answer=0;  // Global variable.to be able to use in another functions
void menus()
{
    printf("\n\n1-Back\n");
    printf("2-Log-out\n");
    printf("3-Exit");
    
    printf("\n\nchoose one of them: ");
    scanf("%d",&answer);
    getchar();  // For clear the buffer

    if(answer==1)
        inAccount();
    else if(answer==2)
        main();
    else if(answer==3)
        exitFunction();
    else
        printf("Please choose a valid option!");

}







// this function is for taking input easily
// So there is not any size for inputs you can enter how much character you want
// So this function helps dynamic memory allocation
char *readStringDynamic() {
    int capacity = 50;
    int length = 0;
    char *str = malloc(capacity);

    if (str==NULL)
    {
        printf("Memory Allocation is unsuccessful");
        return NULL;
    } 

    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        str[length++] = c;

        if (length >= capacity - 1) {
            capacity *= 2;
            char *temp = realloc(str, capacity);
            if (!temp) {
                free(str);
                return NULL;
            }
            str = temp;
        }
    }

    str[length] = '\0';
    return str;
}



struct Information 
{
    char *username;
    char *password;
    char *passwordAgain;
    char *id;
    char *name;
    char *surname;
    int money;
};


// To be able to store the data of cuurent user
struct Information currentUser;
int isLoggedIn = 0;



void getTransactionFilename(char *buffer, size_t size)
{
    snprintf(buffer, size,
        "C:/Users/CASPER/Desktop/C-Learning-Proccess/program3/transaction_History_%s.txt",
        currentUser.id);
}


int createAccount()
{
    FILE *fp=fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/program3/data.txt","a");
    if(fp==NULL)
    {
        printf("File cannot open");
        return 1;
    }

    struct Information infos;


    printf("\n\n-----------------------------------\n");
    printf("---------- CREATE ACCOUNT ---------\n");
    printf("-----------------------------------\n");

   
    printf("ID: ");
    infos.id = readStringDynamic();


    if(strlen(infos.id)!=11)
    {
        printf("\nID must be exactly 11 characters!\n");
        return 1;
    }

    for(int i=0;i<11;i++)
    {
        if(infos.id[i]<'0' || infos.id[i]>'9')
        {
            printf("\nID must contain only digits!\n");
            return 1;
        }
    }


    printf("Name: ");
    infos.name = readStringDynamic();

    printf("Surname: ");
    infos.surname = readStringDynamic();

    printf("Username: ");
    infos.username = readStringDynamic();

    printf("Password: ");
    infos.password=readStringDynamic();
    
    printf("Password Again: ");
    infos.passwordAgain=readStringDynamic();

    if(strcmp(infos.password,infos.passwordAgain)!=0)
    {
        printf("\nPassword and Password again is not same");
        return 1;
    }

    printf("How Much money you wanna store in the bank: $");
    scanf("%d",&infos.money);
    getchar();

    if(infos.money<0)
    {
        printf("This amount is not valid!");
        return 1;
    }

    fprintf(fp,"%s,%s,%s,%s,%s,%s,%d\n",infos.id,infos.name,infos.surname,infos.username,infos.password,infos.passwordAgain,infos.money);
    fclose(fp);

    printf("\n\nAccount created successfully");

    // I had an area in memory for this variables and I used them and I don't need that memory anymore so I gave that area to memory.
    free(infos.id);
    free(infos.name);
    free(infos.surname);
    free(infos.username);
    free(infos.password);
    free(infos.passwordAgain);


    return 0;


}



int loadAccounts(struct Information infos[])
{
    FILE *fp = fopen("C:/Users/CASPER/Desktop/C-Learning-Proccess/program3/data.txt", "r");  // Opened the file in read mode
    if(fp==NULL)
    {
        printf("File cannot open");
        return 1;
    }

    char line[500];   // Says 1 line can have max 499 byte.If longer it exploits
    int count = 0;    // I defined 100 users with define MAX_USERS at the beggining of the code.So I created to count it

    while (fgets(line, sizeof(line), fp) && count < MAX_USERS)
    {
        // Temorary created variables to be able to read the things is file
        char id[15], name[50], surname[50];
        char username[100], password[100], passwordAgain[100];

        if (sscanf(line, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%d",
                   id, name, surname,
                   username, password, passwordAgain,
                   &infos[count].money) == 7)
        {
            // strdup copies the thing we read from the file 
            // I copied the things in the file because I need to give the datas to current user
            infos[count].id = strdup(id);  
            infos[count].name = strdup(name);
            infos[count].surname = strdup(surname);
            infos[count].username = strdup(username);
            infos[count].password = strdup(password);
            infos[count].passwordAgain = strdup(passwordAgain);
            count++;
        }
    }

    fclose(fp);
    return count;
}



void showHistory()
{
    char filename[200];
    char line[300];

    getTransactionFilename(filename, sizeof(filename));

    FILE *fp = fopen(filename, "r");
    if (fp==NULL)
    {
        printf("\nNo transaction history found.\n");
        menus();
        return;
    }

    printf("\n\n-----------------------------------\n");
    printf("---------- TRANSACTION HISTORY ---------\n");
    printf("-----------------------------------\n\n");


    while (fgets(line, sizeof(line), fp))
    {
        printf("%s\n", line);
    }

    fclose(fp);
    menus();
}





int depositMoney()
{
    char filename[200];
    getTransactionFilename(filename, sizeof(filename));

    FILE *fp = fopen(filename, "a");
    if(fp==NULL)
    {
        printf("file cannot open");
        return 1;
    }

    int amountDepositMoney=0;
    int previousMoney=0;
    int newMoney=0;

    printf("\n\n-----------------------------------\n");
    printf("---------- DEPOSIT MONEY---------\n");
    printf("-----------------------------------\n");

    printf("\nYour total money: %d\n",currentUser.money);
    printf("How much money you wanna deposit: ");
    scanf("%d",&amountDepositMoney);
    getchar();

    
    previousMoney=currentUser.money;
    newMoney=currentUser.money+amountDepositMoney;
    currentUser.money=newMoney;

    if(amountDepositMoney<=0)
    {
        printf("Invalid amount!");
        fprintf(fp,"!!!UNSUCCESSFUL DEPOSIT!!!    Id: %s : Name: %s : Surname: %s : Username: %s / Tried to DEPOSIT %d$ money.Previous Balance: %d$ New Balance: %d$\n",
        currentUser.id,
        currentUser.name,
        currentUser.surname,
        currentUser.username,
        amountDepositMoney,
        previousMoney,
        previousMoney);
        fclose(fp);
        
        depositMoney();
    }

     fprintf(fp,"***SUCCESSFUL DEPOSIT***    Id: %s : Name: %s : Surname: %s : Username: %s / DEPOSIT %d$ money.Previous Balance: %d$ New Balance: %d$\n",
        currentUser.id,
        currentUser.name,
        currentUser.surname,
        currentUser.username,
        amountDepositMoney,
        previousMoney,
        newMoney);
        fclose(fp);

    printf("\nTransaction is successful\n");
    printf("Total money: %d",newMoney);
    menus();

}




int withdrawMoney()
{
    int previousMoney=0;
    int remaindMoney=0;
    
    char filename[200];
    getTransactionFilename(filename, sizeof(filename));

    FILE *fp = fopen(filename, "a");
    if(fp==NULL)
    {
        printf("File cannot open");
        return 1;
    }

    
    int amountWithdrawMoney=0;
    
    printf("\n\n-----------------------------------\n");
    printf("---------- WITHDRAW MONEY---------\n");
    printf("-----------------------------------\n");

    printf("\nYour total money: %d\n",currentUser.money);
    printf("How much money you wanna withdraw: ");
    scanf("%d",&amountWithdrawMoney);
    getchar();

    previousMoney=currentUser.money;
    remaindMoney=currentUser.money-amountWithdrawMoney;
    currentUser.money=remaindMoney;

    if(amountWithdrawMoney<0)
    {
        printf("\nInvalid Amount");
        fprintf(fp,"!!!UNSUCCESSFUL WITHDRAW!!!    Id: %s : Name: %s : Surname: %s : Username: %s Tried to WITHDRAW %d$ money.Previous Balance: %d$ New Balance: %d$\n",
        currentUser.id,
        currentUser.name,
        currentUser.surname,
        currentUser.username,
        amountWithdrawMoney,
        previousMoney,
        previousMoney);
        fclose(fp);
        withdrawMoney();
    }

    if(amountWithdrawMoney>currentUser.money)
    {
        printf("\nYou don't have enogh money in your account to withdraw");
        fprintf(fp,"!!!UNSUCCESSFUL WITHDRAW!!!    Id: %s : Name: %s : Surname: %s : Username: %s / Tried to WITHDRAW  %d$ money.Previous Balance: %d$ New Balance: %d$\n",
        currentUser.id,
        currentUser.name,
        currentUser.surname,
        currentUser.username,
        amountWithdrawMoney,
        previousMoney,
        previousMoney);
        fclose(fp);
        withdrawMoney();
    }


    fprintf(fp,"***SUCCESSFUL WITHDRAW***    Id: %s : Name: %s : Surname: %s : Username: %s / WITHDRAW  %d$ money.Previous Balance: %d$ New Balance: %d$\n",
        currentUser.id,
        currentUser.name,
        currentUser.surname,
        currentUser.username,
        amountWithdrawMoney,
        previousMoney,
        remaindMoney);
        fclose(fp);
    

    printf("\nWithdraw is successful\n");
    printf("Your total money is: %d",remaindMoney);
    menus();


}





int seeMoney()
{
    char filename[200];
    getTransactionFilename(filename, sizeof(filename));

    FILE *fp = fopen(filename, "a");
    if(fp==NULL)
    {
        printf("File cannot open");
        return 1;
    }

    fprintf(fp,"***SEE INFORMATION*** Id: %s : Name: %s : Surname: %s : Username: %s / Saw The Balance Information. Balance was: %d \n",
        currentUser.id,
        currentUser.name,
        currentUser.surname,
        currentUser.username,
        currentUser.money);
        fclose(fp);
    

    printf("\n\n-----------------------------------\n");
    printf("---------- TOTAL MONEY---------\n");
    printf("-----------------------------------\n");

    printf("Total Money: %d",currentUser.money);
    menus();

}



void inAccount()
{
    int answer=0;
    do
    {
    printf("\n\n-----------------------------------\n");
    printf("---------- WELCOME ACCOUNT---------\n");
    printf("-----------------------------------\n");

    printf("\nWelcome %s %s!\n",currentUser.name,currentUser.surname);

    printf("\n1-See Total Money\n");
    printf("2-Withdraw Money\n");
    printf("3-Deposit money\n");
    printf("4-See the history\n");
    printf("5-Log-out");

    printf("\n\nWhich option you wanna make: ");
    scanf("%d",&answer);
    getchar();

    if(answer==1)
        seeMoney();
    else if(answer==2)
        withdrawMoney();
    else if(answer==3)
        depositMoney();
    else if(answer==4)
        showHistory();
    else if(answer==5)
        main();
    else
        printf("Please choose a valid number");
    }while(1);
    
    
    
    
}




void logInAccount()
{
    printf("\n\n-----------------------------------\n");
    printf("---------- LOG-IN ACCOUNT ---------\n");
    printf("-----------------------------------\n");

    struct Information infos[MAX_USERS];
    int count = loadAccounts(infos);

    char *username;
    char *password;

    printf("Username: ");
    username = readStringDynamic();

    printf("Password: ");
    password = readStringDynamic();

    int found = 0;  

    for (int i = 0; i < count; i++)
    {
        if (strcmp(username, infos[i].username) == 0 &&
            strcmp(password, infos[i].password) == 0)
        {
            currentUser.id = strdup(infos[i].id);
            currentUser.name = strdup(infos[i].name);
            currentUser.surname = strdup(infos[i].surname);
            currentUser.username = strdup(infos[i].username);
            currentUser.password = strdup(infos[i].password);
            currentUser.money = infos[i].money;

            isLoggedIn = 1;
            found = 1;

            printf("\nLogin successful!");

            inAccount();   
            break;
        }
    }

    if (!found)
    {
        printf("\nWrong username or password!\n");
    }

    free(username);
    free(password);

    for (int i = 0; i < count; i++)
    {
        free(infos[i].id);
        free(infos[i].name);
        free(infos[i].surname);
        free(infos[i].username);
        free(infos[i].password);
        free(infos[i].passwordAgain);
    }
}




void exitFunction()
{
    exit(0);
}


int main()
{
    int answer=0;
    do
    {
        printf("\n\n------------------------\n");
        printf("---------- MENU ---------\n");
        printf("-------------------------");

        printf("\n1-Create Account\n");
        printf("2-Log-in Account\n");
        printf("3-Exit\n");

        printf("\nWhat your choice: ");
        scanf("%d",&answer);
        getchar();

        if(answer==1)
            createAccount();
        else if(answer==2)
            logInAccount();
        else if(answer==3)
            exitFunction();
        else
            printf("Please choose a valid option");
        
        
    } while (1);
    
    return 0;
}