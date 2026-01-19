#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description: recursive program which display pattern
// Input: void
// Output : void
// Author : Atharva Sanjay More
// Date : 22/12/25
//
///////////////////////////////////////////////////////////////////////////////////
void Display() 
{ 
    static char iCnt = 'a';
    
    if(iCnt <= 'f')
    {
        printf("%c\t",iCnt);
        iCnt++;
        Display();
    }
} 
int main() 
{ 
Display(); 
return 0; 
}