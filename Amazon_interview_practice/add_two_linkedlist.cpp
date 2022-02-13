#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
class Node {
    public:
    int data;
     Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}
Node *solve(Node *first,Node *second){
    Node *dummy = new Node(0);
    Node *head = dummy;
    int sum = 0;
    int carry = 0;
    while(first!= NULL or second != NULL or carry){
        sum = 0;
        if(first){
            sum+=first->data;
            first = first->next;
        }
        if(second){
            sum +=second->data;
            second = second->next;
        }
        sum+=carry;
        carry = sum/10;
        head->next = new Node(sum%10);
        head = head->next;

    }
    return dummy->next;
}
int main()
{
    int n;
        
    cin>>n;
    Node* first = buildList(n);
    
    int m = 6;
    Node *second = buildList(m);
    
    Node *res = solve(first, second);
    printList(res);



}

