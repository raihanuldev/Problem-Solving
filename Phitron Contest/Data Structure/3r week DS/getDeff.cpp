#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node(int val)
        {
            this->val = val;
            this->next = NULL;
        }
};
void insert_node(Node* &head,Node* &tail,int val)
{
    Node* newNode = new Node(val);
    if(head==NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void get_deffernt(Node* head)
{
    Node* temp = head;
    int max = INT_MIN;
    int min = INT_MAX;
    while(temp!=NULL)
    {
        if(temp->val >max){
            max = temp->val;
        }
        if(temp->val <min){
            min = temp->val;
        }
        temp = temp->next;
    }
    cout<< max-min<<endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true)
    {
        cin>>val;
        if(val==-1){
            break;
        }
        insert_node(head,tail,val);
    }
    get_deffernt(head);
    return 0;
}