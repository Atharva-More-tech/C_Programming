#include<stdio.h>
//////////////////////////
//
// Function Name: struprx
// Description: accept string from user and convert it into upper case.
// INPUT : string
// OUTPUT : string
// Author : Atharva Sanjay More
// Date : 15/12/25
//
//////////////////////////
void struprx(char *str) 
{ 
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str -32;
        }
        str++;
    } 
} 
int main() 
{ 
char arr[20]; 
printf("Enter string :"); 
scanf("%[^'\n']s",arr); 
struprx(arr); 
printf("Modified string is :%s",arr); 
return 0; 

}
