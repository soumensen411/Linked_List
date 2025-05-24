#include <bits/stdc++.h>
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
#define yes "YES\n"
#define no "NO\n"
using namespace std;
void inputOutput()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};
class Linked_list
{
public:
    Node *head;
    Node *tail;
    Linked_list()
    {
        head = nullptr;
        tail = nullptr;
    }
    void insertAtHead(int value) // insert value at the begining.
    {
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    void insertAtTail(int value) // insert value at the end.
    {
        Node *New_Node = new Node(value);
        if (tail == NULL)
        {
            tail = New_Node;
            head = New_Node;
        }
        else
        {
            tail->next = New_Node;
            tail = New_Node;
        }
    }
    void insertAtPos(int pos, int value) // insert value at the given position.
    {

        if (pos == 1)
        {
            insertAtHead(value);
            return;
        }
        Node *New_Node = new Node(value);
        Node *temp = head;
        int cnt = 1;
        while (cnt != pos - 1)
        {
            temp = temp->next;
            cnt++;
        }
        if (temp->next == NULL)
        {
            insertAtTail(value);
            return;
        }
        New_Node->next = temp->next;
        temp->next = New_Node;
    }
    void deleteNode(int pos) // delete the value from the list at given position
    {
        if (pos <= 0)
        {
            cout << "Invalid position.\n";
            return;
        }
        if (head == NULL)
        {
            cout << "empty list\n";
            return;
        }
        if (pos == 1)
        {
            Node *temp = head;
            head = temp->next;
            if (temp == tail)
            {
                tail = nullptr;
            }
            temp->next = nullptr;
            delete temp;
        }
        else
        {
            Node *temp = head;
            Node *curr = NULL;
            int cnt = 1;
            while (cnt < pos - 1 && temp != nullptr)
            {
                temp = temp->next;
                cnt++;
            }
            if (temp == nullptr || temp->next == NULL)
            {
                cout << "position out of bound\n";
                return;
            }
            curr = temp->next;
            temp->next = curr->next;
            if (curr == tail)
            {
                tail = temp;
            }
            curr->next = nullptr;
            delete curr;
        }
    }
};
void print(Linked_list &list) // print the whole list.
{
    Node *temp = list.head;
    int cnt = 0;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
        cnt++;
    }
    cout << endl;
    cout << "head: " << list.head->data << " tail: " << list.tail->data << " size: " << cnt;
}
void middlePoint(Linked_list list) // print the middle point of the list.
{
    Node *slow = list.head;
    Node *fast = list.head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << "\nmiddle: " << slow->data << endl;
}
void reverse(Linked_list &list) // reverse the list
{
    Node *prev = nullptr;
    Node *curr = list.head;
    Node *nxt = nullptr;
    list.tail = list.head;
    // if (curr->next == nullptr || curr == NULL)
    // {
    //     list.head = curr;
    // }
    while (curr != nullptr)
    {
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    list.head = prev;
}
int main()
{
    inputOutput();
    Linked_list list;
    list.insertAtHead(10);
    list.insertAtHead(20);
    list.insertAtHead(30);
    list.insertAtTail(70);
    list.insertAtPos(1, 46);
    list.insertAtPos(5, 46);
    list.insertAtPos(2, 50);
    print(list);
    cout << endl;
    list.deleteNode(1);
    print(list);
    cout << endl;
    list.deleteNode(6);
    print(list);
    middlePoint(list);
    reverse(list);
    print(list);
}