#include<stdio.h>
//////////////////////////
//
// Function Name: strlwrx
// Description: accept string from user and convert it into lower case.
// INPUT : string
// OUTPUT : string
// Author : Atharva Sanjay More
// Date : 29/12/25
//
//////////////////////////
void strlwrx(char *str) 
{ 
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
    } 
} 
int main() 
{ 
char arr[20]; 
printf("Enter string :"); 
scanf("%[^'\n']s",arr); 
strlwrx(arr); 
printf("Modified string is :%s",arr); 
return 0; 
}