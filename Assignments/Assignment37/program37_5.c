#include<stdio.h>
//////////////////////////
//
// Function Name: StrRevX
// Description: reverse that string in place.
// INPUT : char
// OUTPUT : int
// Author : Atharva Sanjay More
// Date : 15/12/25
//
//////////////////////////
void StrRevX(char *str) 
{ 
    char *start = str;
    char *end = str;
    char temp = '\0';
    
    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start<end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
} 
int main() 
{ 
char arr[20];
printf("Enter string :"); 
scanf("%[^\n]s",arr); 
StrRevX(arr); 
printf("Modified string is : %s",arr); 
return 0; 

}
