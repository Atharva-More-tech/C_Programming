#include<stdio.h>
//////////////////////////
//
// Function Name: Display
// Description: display its ASCII value in decimal,octal and hexadecimal format
// INPUT : char
// OUTPUT : void
// Author : Atharva Sanjay More
// Date : 2/12/25
//
//////////////////////////
void Display (char ch) 
{ 
    printf("Decimal : %d\n",ch);
    printf("octal : %04o\n",ch);
    printf("HexaDecimal : %04x\n",ch);
} 

int main()
{ 
    char cValue = '\0'; 
    printf("Enter the character"); 
    scanf("%c",&cValue); 
    Display(cValue); 
    return 0; 
}