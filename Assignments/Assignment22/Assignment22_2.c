#include<stdio.h> 
#include<stdlib.h>
//////////////////////////
//
// Function Name: Frequency
// Description: Accept N numbers from user and return difference between frequency of even number and odd numbers
// Input: int
// Output : int
// Author : Atharva Sanjay More
// Date : 16/11/25
//
////////////////////////// 
int Frequency(int Arr[], int iLength) 
{ 
    int iCnt = 0 , iEven = 0 , iOdd = 0;

    for(iCnt =0 ;  iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]%2 == 0)
        {
            iEven++;
        }
        else
        {
            iOdd++;
        }
        
    }
     return iEven - iOdd ;
} 
int main() 
{ 
int iSize = 0,iRet = 0,iCnt = 0; 
    int *p = NULL; 

    printf("Enter number of elements :"); 
    scanf("%d",&iSize); 

    p = (int*)malloc(iSize * sizeof(int)); 
    if(p == NULL) 
    { 
        printf("Unable to allocate memory\n"); 
        return -1; 
    } 
        printf("Enter %d elements \n",iSize); 
        for(iCnt = 0;iCnt<iSize; iCnt++) 
    { 
        printf("Enter element : "); 
        scanf("%d",&p[iCnt]); 
    } 
        iRet = Frequency(p, iSize); 
        printf("Result is %d",iRet); 
        free(p); 
        return 0; 
}     