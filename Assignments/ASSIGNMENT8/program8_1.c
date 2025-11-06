#include<stdio.h>
//////////////////////////
//
// Function Name: Number
// Description:  if number is less than 50 then prints small
//               if it is greater than 50 and less than 100 then prints medium,
//               if it is greater than 100 then prints large 
// Input: int
// Output : Small,Medium,Large
// Author : Atharva Sanjay More
// Date : 2/11/25
//
//////////////////////////
void Number(int iNo)
{
    if(iNo<50)
    {
        printf("smaller");
    }
    else if(iNo>50 && iNo<100)
    {
        printf("Medium");
    }
    else if(iNo>100)
    {
        printf("Greater");
    }       
            //Time Complexity = O(1)
   
}
int main()
{
int iValue = 0;
printf("Enter number");
scanf("%d",&iValue);
Number(iValue);
return 0;
}