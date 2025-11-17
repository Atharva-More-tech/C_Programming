#include<stdio.h> 
#include<stdlib.h>
#include<stdbool.h>
//////////////////////////
//
// Function Name: Check
// Description: checks whether that numbers contains the given NO in it or not
// Input: int
// Output : int
// Author : Atharva Sanjay More
// Date : 17/11/25
//
////////////////////////// 
#define TRUE 1 
#define FALSE 0 
typedef int BOOL; 

bool Check(int Arr[], int iLength, int iNo) 
{ 
i    int Cnt = 0;
    bool Bflag = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]== iNo)
        {
            return true;
            break;
        }
    }
        return Bflag;
} 
    int main() 
    { 
        int iSize = 0,iRet = 0,iCnt = 0, iValue = 0; 
        int *p = NULL; 
        bool bRet = FALSE; 

        printf("Enter number of elements : "); 
        scanf("%d",&iSize);

        printf("Enter the number :"); 
        scanf("%d",&iValue); 
        p = (int *)malloc(iSize * sizeof(int)); 

        if(p == NULL) 
        { 
        printf("Unable to allocate memory"); 
        return -1; 
        } 

        printf("Enter %d elements \n",iSize);

        for(iCnt = 0;iCnt<iSize; iCnt++) 
        { 
        printf("Enter element : "); 
        scanf("%d",&p[iCnt]); 
        } 
        bRet = Check(p, iSize,iValue); 
        if(bRet == TRUE) 
        { 
        printf("Number is present"); 
        } 
        else 
        { 
        printf("Number is not present"); 
        } 
        free(p); 
        return 0;
    } 