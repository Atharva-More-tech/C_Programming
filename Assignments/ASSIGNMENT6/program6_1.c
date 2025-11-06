#include<stdio.h> 
//////////////////////////
//
// Function Name: Name
// Description:  accept name from user and print that name.
// Input: int
// Output : int
// Author : Atharva Sanjay More
// Date : 1/11/25
//
//////////////////////////
int main() 
{ 
    char Name[30]; 
    printf("Please enter full name"); 
    scanf("%[^\n]s",Name); 
    printf("Your name is %s",Name); 

      //Time Complexity= O(1)

return 0;
}
