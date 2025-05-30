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
    Node(int data)
    {
        this->data = data;
        this->Next = nullptr;
    }
};
class Linked_List
{
public:
    Node *tail;
    Linked_List()
    {
        tail = nullptr;
    }
    void insert(int value, int data)
    {
        if (tail == NULL)
        {
            Node *NewNode = new Node(data);
            tail = NewNode;
            NewNode->Next = NewNode;
        }
        else
        {
            Node *curr = tail;
            bool flag = false;
            do
            {
                if (curr->data == value)
                {
                    flag = true;
                    break;
                }
                curr = curr->Next;
            } while (curr != tail);
            if (!flag)
            {
                cout << "value " << value << " not found in the list.\n";
                return;
            }
            Node *temp = new Node(data);
            temp->Next = curr->Next;
            curr->Next = temp;
        }
    }
    void deleteNode(int value)
    {
        if (tail == NULL)
        {
            cout << "list is empty";
            return;
        }
        else
        {
            Node *prev = tail;
            Node *curr = prev->Next;
            bool found = false;
            do
            {
                if (curr->data == value)
                {
                    found = true;
                    break;
                }
                prev = curr;
                curr = curr->Next;
            } while (curr != tail->Next);
            if (!found)
            {
                cout << "value " << value << " not found in the list\n";
                return;
            }
            prev->Next = curr->Next;
            if (curr == prev)
            {
                tail = nullptr;
            }
            else if (tail == curr)
            {
                tail = prev;
            }
            curr->Next = NULL;
            delete curr;
        }
    }
};
void print(Linked_List list)
{
    Node *temp = list.tail->Next;
    if (list.tail == NULL)
    {
        cout << "list is empty\n";
        return;
    }
    do
    {
        cout << temp->data << " ";
        temp = temp->Next;
    } while (temp != list.tail->Next);
    cout << endl;
}
int main()
{
    inputOutput();
    Linked_List list;
    list.insert(3, 10);
    list.insert(10, 20);
    list.insert(20, 7);
    list.insert(7, 9);
    list.insert(20, 9);
    list.insert(9, 19);
    print(list);
    list.deleteNode(9);
    print(list);
    list.deleteNode(10);
    print(list);
    list.insert(74, 19);
    print(list);
    list.deleteNode(150);
    print(list);
    return 0;
}
