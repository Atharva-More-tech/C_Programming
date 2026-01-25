// Description: Count Elements Divisible by 5

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

int CountDivByFive(PNODE Head)
{    
    int iCount = 0;
    while(Head != NULL)
    {
        if(Head->Data % 5 == 0)
        {
            iCount++;
        }
        Head = Head->Next;
    }
    return iCount;
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

    iRet = CountDivByFive(First);

    printf("Count of Numbers divided by 5 are : %d\n",iRet);
    
    return 0;
} 