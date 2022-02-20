/* Sample application to create and traverse a linked list */

#include <stdio.h>
#include <stdint.h>

typedef struct{
    uint32_t data;
    struct node *link
}node;

void traverse (struct node* start)
{
    /* Traverse the linked list and print the data from each node 
       Check the link to next node.*/
    while(start != NULL)
    {
        printf("%d", head->data);
        start = start->link;
    }
}

int main()
{
    //Get the nodes
    struct node *start =  (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));
    struct node *third =  (struct node*)malloc(sizeof(struct node));

    start->data = 10u;
    start->link = second;

    second->data = 20u;
    second->link = third;

    third->data = 30;
    third->link = NULL;

    traverse(start);

    free(start);
    free(second);
    free(third);

    return 0;
}