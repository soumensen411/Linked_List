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
    int val;
    Node *next;
    Node(int value)
    {
        this->val = value;
        this->next = nullptr;
    }
};
class linked_list
{
public:
    Node *head;
    Node *tail;
    linked_list()
    {
        head = nullptr;
        tail = nullptr;
    }
    void insertinFront(int val)
    {
        Node *newNode = new Node(val);
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
    void insertinBack(int val)
    {
        Node *newNode = new Node(val);
        if (tail == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = nullptr;
            tail->next = newNode;
            tail = newNode;
        }
    }
    void insertinPos(int val, int pos)
    {

        Node *newNode = new Node(val);
        Node *temp = head;
        int cnt = 1;
        // if(pos == 1){
        //     newNode->next = head->next;
        //     head->next = newNode;
        //     return;
        // }
        while (cnt != pos - 1)
        {
            temp = temp->next;
            cnt++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    void Delete(int pos)
    {
        if (pos <= 0)
        {
            cout << "Position should be greater then zero" << endl;
            return;
        }

        if (head == nullptr)
        {
            cout << "List is Empty." << endl;
            return;
        }
        Node *temp = head;
        Node *temp2 = head;
        if (pos == 1)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            return;
        }
        int cnt = 1;
        while (cnt != pos - 1)
        {
            temp = temp->next;
            cnt++;
        }
        temp2 = temp->next->next;
        temp->next = temp2;
    }
};
void printlist(linked_list list)
{
    Node *temp = list.head;
    int size = 0;
    while (temp != nullptr)
    {
        cout << temp->val << " ";
        temp = temp->next;
        size++;
    }
    cout << endl;
}
int listsize(linked_list list)
{
    Node *temp = list.head;
    int size = 0;
    while (temp != nullptr)
    {
        temp = temp->next;
        size++;
    }
    return size;
}
void middleNumberofList(linked_list list)
{
    Node *slow = list.head;
    Node *fast = list.head;
    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << slow->val << endl;
}
void reverse(linked_list &list)
{
    Node *prev = nullptr;
    Node *current = list.head;
    Node *nextptr = nullptr;
    list.tail = list.head;

    while (current != nullptr)
    {
        nextptr = current->next;
        current->next = prev;
        prev = current;
        current = nextptr;
    }
    list.head = prev;
}
void solve()
{
    linked_list list;
    list.insertinFront(50);
    list.insertinFront(15);
    list.insertinFront(100);
    list.insertinBack(10);
    list.insertinBack(18);
    list.insertinPos(57, 5);
    list.insertinPos(120, 6);
    int size = listsize(list);
    printlist(list);
    cout << "Reversed list: ";
    reverse(list);
    printlist(list);
    cout << "Size: " << size << endl;
    cout << "Middle point of the list: ";
    middleNumberofList(list);
    list.Delete(3);
    int size2 = listsize(list);
    printlist(list);
    cout << "Middle point of the list: ";
    middleNumberofList(list);
    cout << "Size: " << size2<<endl;
    
}
int main()
{
    inputOutput();
    solve();
    return 0;
}
