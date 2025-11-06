#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: CountFour
// Description:  accept number from user and count frequency of 4 in it.
// Input: int
// Output : int
// Author :Atharva Sanjay More
// Date : 3/11/25
//
///////////////////////////////////////////////////////////////////////////////////
int CountFour(int iNo)
{
int iDigit=0;
int iCount=0;

    while(iNo != 0 )
    {
        iDigit= iNo % 10;

        if(iDigit == 4)
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

    iRet = CountFour(iValue);

    printf("%d",iRet);

    return 0;
}