#include<stdio.h>
/////////////////////////
//
// Function Name: CountCapital
// Description: count number of capital characters.
// INPUT : char
// OUTPUT : int
// Author : Atharva Sanjay More
// Date : 4/12/25
//
//////////////////////////
int CountCapital(char *str) 
{ 
int iCnt = 0; 

    if(str == NULL)
    {
        return -1;
    }
    while(*str != '\0') 
    { 
    if(*str >= 'A' && *str <= 'Z' )
    {
        iCnt++;
    }
        str++;
    } 
    return iCnt; 
} 
int main() 
{ 
    char arr[20]; 
    int iRet = 0; 

    printf("Enter string :"); 
    scanf("%[^'\n']s",arr); 

    iRet = CountCapital(arr); 
    printf("%d",iRet); 

    return 0; 
}