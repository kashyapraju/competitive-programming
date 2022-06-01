#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int var)
    {
        data = var;
        next = NULL;
    }
};

void lnk(node *head)
{
    node *ptr = head;
    while (ptr != NULL)

    {
        printf("%d", ptr->data);
        ptr = ptr->next;
        cout<<"->";
    }
    cout<<"NULL";
}

node *reverse(node* head) {
    node* temp = NULL;
    node* prev = NULL;
    node* current = head;   
    while(current != NULL) {
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    head = prev;
    return head;
}

/*struct node *reverse(node *head)
{
    node *prevptr = NULL;
    node *current = head;
    node *nextptr;

    while (current != NULL)
    {
        nextptr = current->next;
        current->next = prevptr;

        prevptr = current;
        current = nextptr;
    }
    return prevptr;
}*/

/*void inserttail(node* head, int var)
{
     node* n = new node(var);

     if(head=NULL)
     {
         head=n;
         return ;
     }
     node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next=n;
    n->next=NULL;
}*/

/*void display(node* head)
{
     node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}*/

int main()
{
    
    // node* head = NULL;

    // inserttail(head, 1);
    // inserttail(head, 4);
    // inserttail(head, 6);

    // display(head);
    node *head;
    node *first;
    node *second;
    node *third;
    node *fourth;

    first = (node*)malloc(sizeof(node *));
    second = (node*)malloc(sizeof(node *));
    third = (node*)malloc(sizeof(node *));
    fourth = (node*)malloc(sizeof(node *));

    head = first;
    first->data = 3;
    first->next = second;

    second->data = 5;
    second->next = third;

    third->data = 6;
    third->next = fourth;

    fourth->data = 9;
    fourth->next = NULL;

    lnk(head);
    cout<<endl;
   head= reverse(head);
    lnk(head);

    return 0;
}
