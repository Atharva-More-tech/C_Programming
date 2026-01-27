// Description: Check Whether List Is Sorted (Ascending order)

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

bool CheckSorted(PNODE Head)
{    
    int temp = 0;
    bool bFlag = false;

    while (Head != NULL)
    {
        if(Head->Data < temp)
        {
            bFlag = false;
            break;
        }
        bFlag = true;

        temp = Head->Data;

        Head = Head->Next;
    }
    return bFlag;
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
    bool bRet = 0;
    
    PNODE First = NULL;
    InsertFirst(&First, 650);
    InsertFirst(&First, 393);
    InsertFirst(&First, 230);
    InsertFirst(&First, 40);
    InsertFirst(&First, 11);

    Display(First);

    iRet = Count(First);

    printf("Number of elements in node are : %d\n",iRet);

    bRet = CheckSorted(First);

    if(bRet == false)
    {
        printf("List is not sorted\n");
    }
    else
    {
        printf("List is sorted\n"); 
    }
    
    return 0;
} 