#include<stdio.h>
//////////////////////////
//
// Function Name: DisplayDigit
// Description: accept string from user and convert and only digits from that string.
// INPUT : void
// OUTPUT : char
// Author : Atharva Sanjay More
// Date : 15/12/25
//
//////////////////////////
void DisplayDigit(char *str) 
{ 
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
    {
        printf("%c",*str);
    } 
        str++;
    }
} 
int main() 
{ 
char arr[20]; 
printf("Enter string :"); 
scanf("%[^'\n']s",arr); 
DisplayDigit(arr); 

}
