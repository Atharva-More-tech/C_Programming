//////////////////////////
//
// Function Name: Display
// Description: it prints 5 to 1
// Input: int
// Output : 54321
// Author : Atharva Sanjay More
// Date : 31/10/25
//
//////////////////////////

#include<stdio.h> 
int Display()  
{ 
    int i = 0;  
    i = 5; 
    while( i >= 1)  
    {  
    printf("%d",i); 
    i--; 
    }  
}  
int main() 
{ 
    Display(); 
    return 0; 
}