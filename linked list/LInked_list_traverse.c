#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void TraverseLinkedList(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d    ", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node *head;
    struct node *secound;
    struct node *third;
    // allocate memory for nodes in the linked list in the heap
    head = (struct node *)malloc(sizeof(struct node *));
    secound = (struct node *)malloc(sizeof(struct node *));
    third = (struct node *)malloc(sizeof(struct node *));
    // now link first and secound node
    head->data = 45;
    head->next = secound;
    // now link secound and third
    secound->data = 54;
    secound->next = third;
    // at last terminate and link the third node
    third->data = 88;
    third->next = NULL;
    TraverseLinkedList(head);

    return 0;
}