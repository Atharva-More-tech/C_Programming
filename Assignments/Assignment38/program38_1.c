#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: StrCpyRev
// Description:  copies characters of that string into another string in reverse order
// Input: char,char
// Output : void
// Author : Atharva Sanjay More
// Date : 16/12/25
//
///////////////////////////////////////////////////////////////////////////////////
void StrCpyRev(char *src, char *dest) 
{ 
    char *end = src;
    
    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(end >= src)
    {
        *dest = *end;
        dest++;
        end--;
    }
    *dest = '\0';
} 
int main() 
{ 
char arr[30] = "Marvellous Python"; 
char brr[30];   // Empty string 
StrCpyRev(arr,brr); 

printf("%s",brr);  // nohtyP suollevraM 
return 0; 
} 

