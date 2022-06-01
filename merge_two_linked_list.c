#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *mergelist(struct node *head1, struct node *head2)
{
    struct node *t1 = head1;
    struct node *t2 = head2;
    
     //struct node *t3 = head3;
     struct node *dummy=(struct node*)malloc(sizeof(struct node));
     dummy->data = -1;
     struct node *t3= dummy;

    while (t1->next != NULL && t2->next!= NULL)
    {
        if (t1->data < t2->data)
        {
            t3->next=t1;
            t1=t1->next;
        }

        else
        {
            t3->next=t2;
            t2=t2->next;
        }
        t3 = t3->next;
    }

    while(t1->next!=NULL){
     t3->next=t1;
     t1=t1->next;
     t3=t3->next;

    }

    while(t2!=NULL){
      t3->next=t2;
      t2=t2->next;
      t3=t3->next;
    }

    return dummy->next;
}

void lkd(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main()
{
    struct node *head1;
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *eight;
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    eight = (struct node *)malloc(sizeof(struct node));
    head1 = first;
    first->data = 2;
    first->next = second;

    second->data = 4;
    second->next = third;

    third->data = 6;
    third->next = eight;

    eight->data = 8;
    eight->next = NULL;

    struct node *head2;
    struct node *fourth;
    struct node *fifth;
    struct node *six;
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));
    six = (struct node *)malloc(sizeof(struct node));
    head2 = fourth;
    fourth->data = 3;
    fourth->next = fifth;

    fifth->data = 7;
    fifth->next = six;

    six->data = 9;
    six->next = NULL;
    // struct node *head3;
     
    lkd(head1);
    printf("\n");

    lkd(head2);

    head1 = mergelist(head1, head2);
   // printf("\n");
    lkd(head1);

    return 0;
}
