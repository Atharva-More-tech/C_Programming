#include<stdio.h>
/////////////////////////
//
// Function Name: Difference
// Description: count number of Small characters and Capital characters and display difference
// INPUT : char
// OUTPUT : int
// Author : Atharva Sanjay More
// Date : 4/12/25
//
//////////////////////////
int Difference(char *str) 
{  
    int iSmall = 0;
    int iCapital = 0;

    if(str == NULL)
    {
        return -1;
    }
    while(*str != '\0') 
    { 
        if(*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCapital++;
        } 
            str++;
    } 
    return iSmall-iCapital; 
} 
int main() 
{ 
    char arr[20]; 
    int iRet = 0; 

    printf("Enter string :"); 
    scanf("%[^'\n']s",arr); 

    iRet = Difference(arr); 
    
    printf("%d",iRet); 

    return 0; 
}