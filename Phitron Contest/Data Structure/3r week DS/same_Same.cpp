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
void insert_node(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int getSize(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void sameToSame(Node *frist, Node *secound)
{
    Node *t_frist = frist;
    Node *t_secound = secound;
    int flag = true;

    while (t_frist != NULL)
    {
        if (getSize(frist) != getSize(secound))
        {
            cout << "NO";
            flag = false;
            return;
        }
        if (t_frist->val != t_secound->val)
        {
            cout << "NO";
            flag = false;
            return;
        }

        t_secound = t_secound->next;
        t_frist = t_frist->next;
    }
    if (flag)
    {
        cout << "YES";
    }
}

int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *tail1 = NULL;
    Node *tail2 = NULL;

    int v1;
    while (true)
    {
        cin >> v1;
        if (v1 == -1)
        {
            break;
        }
        insert_node(head1, tail1, v1);
    }
    int v2;
    while (true)
    {
        cin >> v2;
        if (v2 == -1)
        {
            break;
        }
        insert_node(head2, tail2, v2);
    }
    sameToSame(head1, head2);
    return 0;
}