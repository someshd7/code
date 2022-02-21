/* Sample application to create and traverse a linked list */

#include <stdio.h>
#include <stdint.h>

typedef struct{
    uint32_t data;
    struct node *link
}node;

//Function to insert a node at the begin of the linked list.
struct Node *insertAtBegining(struct Node *head, int x) {

    /* insert at begining
    create a new node
    new_node->data = x;
    new_node->link = NULL
    Check if the head is NULL
    if true, head is the new_node
    if false, new_node->next = head and head = new_node;
    */
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    
    new_node->data = x;
    new_node->next = NULL;
    if (head == NULL)
    {
        head = new_node;
    }
    else
    {
        new_node->next = head;
        head           = new_node;
    }
    return head;
}

//Function to insert a node at the end of the linked list.
struct Node *insertAtEnd(struct Node *head, int x)  {

    /* Insert at end
       Two nodes are required. One to attach at the end and one to 
       traverse the linked list.
       setup the new node with data and next to NULL.
       Check if head is NULL
       if true, only one node in the LL. return new node.
       if not, temp node = head
       traverse the temp node till temp->next is not NULL
       Now you are at last node, temp->next = new_node

       return head.
    */
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node *t = (struct Node*)malloc(sizeof(struct Node));
    
    new_node->data = x;
    new_node->next = NULL;
    
    if (head == NULL)
    {
        return new_node;
    }
    
    else
    {
        t = head;
	    while(t->next != NULL)
	    {
	        t = t->next;
	    }
	    t->next = new_node;
    }
	return head;
}

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