#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: StrCpyCap
// Description:   string by converting all small characters into capital case.
// Input: char,char
// Output : void
// Author : Atharva Sanjay More
// Date : 16/12/25
//
///////////////////////////////////////////////////////////////////////////////////
void StrCpyCap(char *src, char *dest) 
{ 
    while(*src != '\0')
    {
        if(*src >= 'a' && *src <= 'z')
        {
            *dest = *src-32;
        }
        else
        {
            *dest = *src;
        }
        dest++;
        src++;
    }
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30]; // Empty string

    StrCpyCap(arr,brr);

    printf("%s",brr); // MARVELLOUS PYTHON 2  

    return 0;

}
