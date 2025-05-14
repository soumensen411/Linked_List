#include<iostream>
using namespace std;
class Node {
public:
    int value;
    Node *next;
    Node *prev;
    Node(int value) {
        this->value = value;
        this->next = nullptr;
        this->prev = nullptr;
    }
};
class Linked_list {
public:
    Node *head;
    Node *tail;
    Linked_list() {
        head = NULL;
        tail = NULL;
    }
    void insertAtHead(int value) {
        Node *new_Node = new Node(value);
        if(head == NULL) {
            head = new_Node;
            tail = new_Node;
        }
        else {
            new_Node ->next = head;
            head->prev = new_Node;
            head = new_Node;
        }
    }
    void insertAtTail(int value) {
        Node *new_Node = new Node(value);
        if(tail == NULL) {
            tail = new_Node;
            head = new_Node;
        }
        else {
            tail->next = new_Node;
            new_Node->prev = tail;
            tail = new_Node;
        }
    }
    void insertAtPos(int pos,int val) {
        Node *new_Node = new Node(val);
        if(pos == 1) {
            insertAtHead(val);
            return;
        }
        int cnt = 1;
        Node *temp = head;
        while(cnt < pos - 1) {
            temp = temp->next;
            cnt++;
        }
        if(temp->next == NULL) {
            insertAtTail(val);
            return;
        }
        new_Node ->next = temp->next;
        temp->next->prev = new_Node;
        temp->next = new_Node;
        new_Node->prev = temp;
    }
    void deleteNode(int pos) {
        if(pos == 1) {
            Node *temp = head;
            temp->next->prev = NULL;
            head = temp->next;
            temp ->next = NULL;
            delete temp;
            return;
        }
        Node *temp = head;
        Node *curr = NULL;
        int cnt = 1;
        while(cnt <pos - 1) {
            temp = temp->next;
            cnt++;
        }
        curr = temp->next;
        if (curr->next == NULL) {
            temp->next = NULL;
            tail = temp;
            curr->prev = NULL;
            delete curr;
            return;
        }
        temp->next = curr->next;
        curr->next->prev = temp;
        curr->next = NULL;
        curr->prev =NULL;
        delete curr;

    }
};
void print(Linked_list list) {
    Node *temp = list.head;
    while(temp != NULL) {
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int len(Linked_list list) {
    Node *temp = list.head;
    int cnt = 0;
    while(temp != NULL) {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
int main() {
    Linked_list list;
    list.insertAtHead(10);
    list.insertAtHead(20);
    list.insertAtHead(46);
    list.insertAtTail(60);
    list.insertAtTail(72);
    list.insertAtPos(6,50);
    list.insertAtTail(46);
    print(list);
    list.deleteNode(1);
    print(list);
    cout<<len(list);
}
