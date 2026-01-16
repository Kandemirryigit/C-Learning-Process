////////////////////////////////
// FIND VOWELS IN A STRING ARRAY
////////////////////////////////


#include <stdio.h>

int main()
{
   char str[100];
   int countVowels=0;
   int i=0;
   
   printf("Enter a string: ");
   scanf(" %[^\n]",str);
   getchar();

   while(str[i]!='\0')
   {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' ||str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            countVowels++;
        }
        i++;
   }

    printf("Number of vowels: %d",countVowels);

    return 0;

}