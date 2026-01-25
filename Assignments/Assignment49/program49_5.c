// Description: Count Two-Digit Numbers

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define True 1
#define False 0
typedef int BOOL;

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head , int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->Next = NULL;
    newn->Data = no;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->Next = *Head;
        *Head = newn;
    }
}
void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("| %d |->",Head->Data);
        Head = Head->Next;
    }
    printf("NULL \n");
}

int CountTwoDigit(PNODE Head)
{    
    int iDigit = 0;
    int TwoDigitCount = 0;

    while(Head != NULL)
    {
        int iCount = 0;

        while(Head->Data != 0)
        {
            iDigit = Head->Data % 10;
            iCount++;
            Head->Data = Head->Data / 10;
        }
        if(iCount == 2)
        {
            TwoDigitCount++;
        }
        Head = Head->Next;
    }
    return TwoDigitCount;
}

int Count(PNODE Head)
{
    int iCount = 0;

    while(Head != NULL)
    {
        iCount++;
        Head = Head->Next;
    }
    return iCount;
}


int main()
{
    int iRet = 0;

    PNODE First = NULL;
    InsertFirst(&First, 650);
    InsertFirst(&First, 40);
    InsertFirst(&First, 393);
    InsertFirst(&First, 230);
    InsertFirst(&First, 11);

    Display(First);

    iRet = Count(First);

    printf("Number of elements in node are : %d\n",iRet);

    iRet = CountTwoDigit(First);

    printf("Count of two digits number is : %d\n",iRet);
    
    return 0;
} 