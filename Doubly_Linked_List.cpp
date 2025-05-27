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
    Node *Next;
    Node *prev;
    Node(int data)
    {
        this->data = data;
        this->Next = nullptr;
        this->prev = nullptr;
    }
};
class Linked_List
{
public:
    Node *head;
    Node *tail;
    Linked_List()
    {
        head = nullptr;
        tail = nullptr;
    }
    void insertAtHead(int data)
    {
        Node *New_Node = new Node(data);
        if (head == nullptr)
        {
            head = tail = New_Node;
        }
        else
        {
            New_Node->Next = head;
            head->prev = New_Node;
            head = New_Node;
        }
    }
    void insertAtTail(int data)
    {
        Node *New_Node = new Node(data);
        if (tail == nullptr)
        {
            head = tail = New_Node;
        }
        else
        {
            tail->Next = New_Node;
            New_Node->prev = tail;
            tail = New_Node;
        }
    }
    void insertAtPos(int pos, int data)
    {
        if (pos == 1)
        {
            insertAtHead(data);
            return;
        }
        else
        {
            Node *New_Node = new Node(data);
            int cnt = 1;
            Node *temp = head;
            while (cnt < pos - 1)
            {
                temp = temp->Next;
                cnt++;
            }
            if (temp->Next == NULL)
            {
                insertAtTail(data);
                return;
            }
            New_Node->Next = temp->Next;
            temp->Next->prev = New_Node;
            temp->Next = New_Node;
            New_Node->prev = temp;
        }
    }
    void deletion(int pos)
    {
        if (pos == 1)
        {
            Node *temp = head;
            temp->Next ->prev = nullptr;
            head = temp->Next;
            temp->Next = nullptr;
            delete temp;
        }
        else
        {
            Node *curr = head;
            Node *prev = nullptr;
            Node *temp = head;
            int cntt = 1;
            while(cntt < pos-1)
            {
                temp = temp->Next;
                cntt++;
            }
            int cnt = 1;
            while (cnt < pos )
            {
                prev = curr;
                curr = curr->Next;
                cnt++;
            }
            if(curr->Next == NULL){
                tail =temp;
            }
            curr->prev = nullptr;
            prev->Next = curr ->Next;
            curr->Next = nullptr;
            delete curr;
        }
    }
};
void print(Linked_List list)
{
    Node *temp = list.head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->Next;
    }

    cout << "\nhead : " << list.head->data << " tail: " << list.tail->data << " "<<endl;
}
int main()
{
    // inputOutput();
    Linked_List list;
    list.insertAtHead(10);
    list.insertAtHead(20);
    list.insertAtHead(30);
    list.insertAtTail(40);
    list.insertAtTail(50);
    list.insertAtPos(6, 46);
    print(list);
    list.deletion(6);
    print(list);
    return 0;
}
