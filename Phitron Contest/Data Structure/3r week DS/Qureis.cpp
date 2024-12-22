#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_head(Node*& head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insert_tail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int getSize(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

void remove_node_baseIndex(Node*& head, Node*& tail, int idx) {
    if (head == NULL) return; // Handle empty list
    int listSize = getSize(head);
    if (idx < 0 || idx >= listSize) return;

    if (idx == 0) {
        Node* deleteNode = head;
        head = head->next;
        if (head == NULL) {
            tail = NULL; // Update tail when list becomes empty
        }
        delete deleteNode;
        return;
    }

    Node* temp = head;
    for (int i = 1; i < idx; i++) {
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = deleteNode->next;
    if (deleteNode->next == NULL) {
        tail = temp; // Update tail if last node is removed
    }
    delete deleteNode;
}

void print_Node(Node* head) {
    if (head == NULL) {
        cout << endl;
        return;
    }
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int tcase;
    cin >> tcase;
    while (tcase--) {
        int x, v;
        cin >> x >> v;
        if (x == 0) {
            insert_at_head(head, v);
        }
        if (x == 1) {
            insert_tail(head, tail, v);
        }
        if (x == 2) {
            remove_node_baseIndex(head, tail, v);
        }
        print_Node(head);
    }
    return 0;
}
