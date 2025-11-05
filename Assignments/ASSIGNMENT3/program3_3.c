//////////////////////////
//
// Function Name: DisplayEvenFactor
// Description:Write a program which accept number from user and print even factors of that number.
// Input: int
// Output : even factors
// Author : Atharva Sanjay More
// Date : 1/11/25
//
//////////////////////////
#include<stdio.h>
void DisplayEvenFactor(int iNo)
{
int i = 0;
if(iNo <= 0)
{
iNo = -iNo;
}
for(i = 1; i<= iNo-1 ;i++)
{
if((iNo % i)== 0 &&( i % 2)==0)
{
    printf("%d\t",i);
}
}
}
int main()
{
int iValue = 0;
printf("Enter number\n");
scanf("%d",&iValue);
DisplayEvenFactor(iValue);
return 0;
}