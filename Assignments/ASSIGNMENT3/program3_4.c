//////////////////////////
//
// Function Name: DisplayConvert
// Description: Accept one character from user and convert case of that character.
// Input: char
// Output : char
// Author : Atharva Sanjay More
// Date : 1/11/25
//
//////////////////////////
#include<stdio.h>
void DisplayConvert ( char cValue)
{
if(cValue >='a' && cValue <='z')
{
printf("%c",cValue-32 );
}
else if(cValue >= 'A' && cValue <='Z')
{
printf("%c" ,cValue+32);
}
}
int main()
{
char cValue = '\0';
printf("Enter character\n");
scanf("%c",&cValue);
DisplayConvert(cValue);
return 0;
}