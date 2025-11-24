#include<stdio.h>
//////////////////////////
//
// Function Name: Pattern
// Description: display pattern.
// INPUT : int
// OUTPUT : void
// Author : Atharva Sanjay More
// Date : 25/11/25
//
//////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j =0;

    for(i = 1 ; i <= iRow; i++ )
    {
        for(j = 1 ; j <= iCol; j++)
        {
            if( i + j == iCol + 1 || i == 1 || i == iRow || j == 1 || j == iCol)
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
            }
        }
        
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter the number of row :");
    scanf("%d",&iValue1);

    printf("Enter the number of column :");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}