// https://bit.ly/3A2pKTh
//{ Driver Code Starts
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void append(struct Node** head_ref, struct Node **tail_ref,
           int new_data)
{
    struct Node* new_node = new Node(new_data);
    
    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}

/* Function to get the middle of the linked list*/
struct Node* deleteNode(struct Node *head,int );

void printList(Node *head)
{
   while (head != NULL)
   {
      cout << head->data << " ";
      head = head->next;
   }
   cout << "\n";
}
/* Driver program to test above function*/
int main()
{
    int i, n, l;
    struct Node *head = NULL,  *tail = NULL;

        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }

    int kk;
    cin>>kk;
    head = deleteNode(head,kk);
    printList(head);
    return 0;
}

Node* deleteNode(Node *head,int x)
{
    //Your code here
    if(x == 1){
        head = head->next;
        return head;
    }
    
    Node* cur = head;
    for(int i = 1; i < x-1;i++){
        cur = cur->next;
    }
    
    cur->next = cur->next->next;
    return head;
}

// Input
// 8
// 9 5 3 6 1 2 7 0
// 6
// Output
// 9 5 3 6 1 7 0 