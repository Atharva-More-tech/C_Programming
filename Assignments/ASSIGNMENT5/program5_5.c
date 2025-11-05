#include <stdio.h> 
//////////////////////////
//
// Function Name: FindLargest
// Description: Find Largest Among Three Numbers     
// Input: int
// Output : int
// Author : Atharva Sanjay More
// Date : 1/11/25
//
//////////////////////////
int FindLargest(int x, int y, int z) 
{ 
if( x > y && x > z)
 {
   return x;
 }
 else if(y > z && y > x)
 {
    return y;
 }
 else
 {
    return z;
 }
} 
    int main() 
{
    int a, b, c, result; 
    printf("Enter three numbers: "); 
    scanf("%d %d %d", &a, &b, &c); 
    result = FindLargest(a, b, c); 
    printf("Largest number is: %d\n", result); 
    return 0; 
} 