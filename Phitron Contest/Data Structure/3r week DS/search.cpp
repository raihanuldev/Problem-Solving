#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_node(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void search(Node *head, int value)
{
    Node *temp = head;
    int found = false;
    
    int i = 0;
    while (temp != NULL)
    {
        if (temp->val == value)
        {
            found = true;
            cout << i << endl;
            break;
        }
        i++;
        temp = temp->next;
    }
    if (found == false)
    {
        cout << "-1" << endl;
    }
}

int main()
{

    int tcase;
    cin >> tcase;
    while (tcase--)
    {
        Node *head = NULL;
        Node *tail = NULL;

        int val;
        while (true)
        {
            cin >> val;
            if (val == -1)
            {
                break;
            }
            insert_node(head, tail, val);
        }
        int s;
        cin >> s;
        search(head, s);
    }
    return 0;
}