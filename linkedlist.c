#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node* head = NULL;

void display(struct node *head)
{
    struct node *p;
    p = head->next;

    printf("Linked list is:\n");
    
    while(p!=NULL)
    {
        printf("%d ", p->data);
        p = p->next;    
    }
    printf("\n");
}

void insertBeg(struct node *head)
{
    struct node *begNode;
    begNode = (struct  node*)malloc(sizeof(struct node));
    begNode->next = head->next;
    begNode->data = 5;
    head->next = begNode;
}

void insertEnd(struct node *n)
{
    struct node *endNode;
    endNode= (struct node*)malloc(sizeof(struct node));
    n->next = endNode;
    endNode->next = NULL;
    endNode->data = 60;
}

void insertBtw(struct node *n1, struct node *n2)
{
    struct node *btwNode;
    btwNode = (struct node*)malloc(sizeof(struct node));
    btwNode->data = 45;
    btwNode->next = n2;
    n1->next = btwNode;
}

void reverse(struct node* head)
{
    if ( head != NULL)
    {
        return;
    }
    reverse(head->next);
    printf("%d ", head->data);
}

void main()
{
    struct node *head, *n1, *n2, *n3, *n4, *n5;

    head = (struct node*)malloc(sizeof(struct node));
    n1 = (struct node*)malloc(sizeof(struct node));
    n2 = (struct node*)malloc(sizeof(struct node));
    n3 = (struct node*)malloc(sizeof(struct node));
    n4 = (struct node*)malloc(sizeof(struct node));
    n5 = (struct node*)malloc(sizeof(struct node));

    n1->data = 10;
    n2->data = 20;
    n3->data = 30;
    n4->data = 40;
    n5->data = 50;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = NULL;

    head->next = n1;
    display(head);

    insertBeg(head);
    printf("\nAfter insertion in the beginning:\n");
    display(head);

    insertEnd(n5);
    printf("\nAfter insertion in the end:\n");
    display(head);

    insertBtw(n4, n5);
    printf("\nAfter insertion in btw 40 and 50:\n");
    display(head);

    reverse(head);
    printf("\nAfter reversing\n");
    display(head);
}