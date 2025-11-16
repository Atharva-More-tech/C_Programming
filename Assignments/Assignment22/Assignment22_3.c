#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
//////////////////////////
//
// Function Name: Check
// Description: check whether that numbers contains 11 in it or not.
// Input: int
// Output : int
// Author : Atharva Sanjay More
// Date : 16/11/25
//
////////////////////////// 
bool Check(int Arr[], int iLength)
{
    int iCnt=0;

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt]==11)
        {
            return true;
        }
    }
    return false;

}
int main()
{
    int iSize = 0 , iCnt = 0;
    int *p = NULL;

    bool bRet = false;

    printf("Enter number of elements :");
    scanf("%d",&iSize);

    p =(int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memmory");
        return -1;
    }

    printf("Enter %d elements \n",iSize);

    for(iCnt = 0 ; iCnt<iSize; iCnt++)
    {
        printf("Enter the element : ");
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p,iSize);

    if(bRet == true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }
    free(p);

    return 0;
}