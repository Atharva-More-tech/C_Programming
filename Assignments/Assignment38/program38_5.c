#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: StrCpyToggle
// Description:   string by converting all small characters into StrCpyToggle case.
// Input: char,char
// Output : void
// Author : Atharva Sanjay More
// Date : 29/12/25
//
///////////////////////////////////////////////////////////////////////////////////
void StrCpyToggle(char *src, char *dest) 
{ 
    while(*src != '\0')
    {
        if(*src >= 'A' && *src <= 'Z')
        {
            *dest = *src+32;
        }
        else if(*src >= 'a' && *src <= 'z')
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

    StrCpyToggle(arr,brr);

    printf("%s",brr); //   mARVELLOUS pYTHON 2  

    return 0;

}
