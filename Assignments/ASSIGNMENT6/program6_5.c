#include<stdio.h>
float Percentage( int fNo1, int fNo2) 
{ 
float fAns=0.0f;

    fAns=((float)fNo2 / fNo1)*100;
    {
        return fAns;
    }                   //Time Complexity= O(1)
  
} 
int main() 
{ 
    int iValue1 = 0,iValue2 = 0; 
    float fRet = 0.0; 
    printf("Please enter total marks"); 
    scanf("%d",&iValue1); 
    printf("Please enter obtained marks"); 
    scanf("%d",&iValue2); 
    fRet = Percentage(iValue1, iValue2); 
    printf("Enter the Percentage%f",fRet); 
    return 0; 
}