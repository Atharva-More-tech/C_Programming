#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: CountOdd
// Description: accept number from user and return the count of odd digits. 
// Input: int
// Output : int
// Author : Atharva Sanajay More
// Date : 3/11/25
//
///////////////////////////////////////////////////////////////////////////////////
int CountOdd(int iNo)
{
    int iDigit=0;
    int iCount=0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0 )
    {
        iDigit= iNo % 10;

        if(iDigit % 2 != 0)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }
    return iCount;
}                    //Time Complexity = O(n)
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("%d",iRet);

    return 0;
}
