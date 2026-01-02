#include<stdio.h>
//////////////////////////
//
// Function Name: strtogglex
// Description: accept string from user and convert it into strtogglex case.
// INPUT : string
// OUTPUT : string
// Author : Atharva Sanjay More
// Date : 15/12/25
//
//////////////////////////
void strtogglex(char *str) 
{ 
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str -32;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str +32;
        }
        str++;
    } 
} 
int main() 
{ 
char arr[20]; 
printf("Enter string :"); 
scanf("%[^'\n']s",arr);
strtogglex(arr); 
printf("Modified string is :%s",arr); 
return 0; 

}
