#include<stdio.h>
//////////////////////////
//
// Function Name: Reverse
// Description: display String in reverse order.
// INPUT : char
// OUTPUT : void
// Author : Atharva Sanjay More
// Date : 4/12/25
//
//////////////////////////
void Reverse(char *str) 
{ 
    char temp = '\0';
    char *iStart = str;
    char *iEnd = str;

    while(*iEnd != '\0')
    {
        iEnd++;
    }
        iEnd--;
    
        while(iStart < iEnd)
        {
            temp = *iStart;
            *iStart = *iEnd;
            *iEnd = temp;

            iStart++;
            iEnd--;
        }
            printf("Reverse String is : %s",str);
} 
    int main() 
    { 
    char arr[20]; 
    int iRet = 0;

    printf("Enter string :"); 
    scanf("%[^'\n']s",arr); 

    Reverse(arr); 

    return 0; 
    }