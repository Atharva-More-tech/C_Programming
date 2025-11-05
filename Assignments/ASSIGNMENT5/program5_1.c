#include <stdio.h>
//////////////////////////
//
// Function Name: CheckEvenOdd
// Description:  Check Even or Odd 
// Input: int
// Output : int
// Author : Atharva Sanjay More
// Date : 1/11/25
//
////////////////////////// 
void CheckEvenOdd(int num) 
{ 
    if(num % 2==0)
    {
        printf("the number is even");
    }
    
        else
    {
        printf("the number is odd");
    }
} 
int main() 
{ 
    int number; 
    printf("Enter number: "); 
    scanf("%d", &number); 
    CheckEvenOdd(number); 
    return 0; 
} 