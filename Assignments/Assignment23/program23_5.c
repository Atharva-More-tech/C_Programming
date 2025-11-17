#include<stdio.h> 
#include<stdlib.h>
//////////////////////////
//
// Function Name: Product
// Description: return product of all odd elements. 
// Input: int
// Output : int
// Author : Atharva Sanjay More
// Date : 17/11/25
//
//////////////////////////

int Product(int Arr[], int iLength) 
{ 
    int iCnt = 0 , iProd = 0 ;

    for(iProd = 1,iCnt = 0; iCnt < iLength ; iCnt ++)
    {
        if(Arr[iCnt]% 2 == 1)
        {
           iProd = iProd * Arr[iCnt];
        }
    }
            return iProd;
} 
int main() 
{ 
    int iSize = 0,iRet = 0,iCnt = 0; 
    int *p = NULL; 

    printf("Enter number of elements : "); 
    scanf("%d",&iSize); 

    p = (int *)malloc(iSize * sizeof(int)); 
    if(p == NULL) 
    { 
    printf("Unable to allocate memory"); 
    return -1; 
    } 
    printf("Enter %d elements : \n",iSize); 

    for(iCnt = 0;iCnt<iSize; iCnt++) 
    { 
    printf("Enter element : "); 
    scanf("%d",&p[iCnt]); 
    } 
    
    iRet = Product(p, iSize); 
    printf("Product is %d",iRet); 
    free(p); 
    return 0; 
}