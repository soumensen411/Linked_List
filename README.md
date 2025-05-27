# Singly & Doubly Linked List Implementations in C++

This repository contains C++ implementations of **Singly Linked List** and **Doubly Linked List** with common operations like insertion, deletion, traversal, and reversal.

---

## Singly Linked List

### Features

#### Node Operations
- **Insertion**:
  - Insert at the front (`insertAtHead`).
  - Insert at the back (`insertAtTail`).
  - Insert at a specific position (`insertAtPos`).
- **Deletion**:
  - Delete a node at a specific position (`deleteNode`).
- **Reversal**:
  - Reverse the entire list (`reverse`).
- **Utilities**:
  - Print the entire list (`print`).
  - Find the middle element using the two-pointer technique (`middlePoint`).

---

### Code Structure

#### `Node` Class
- Represents a node in the singly linked list.
- Contains:
  - `int data`: Value stored in the node.
  - `Node* next`: Pointer to the next node.

#### `Linked_list` Class
- Manages the singly linked list.
- Contains:
  - `Node* head`: Pointer to the first node.
  - `Node* tail`: Pointer to the last node.
- Methods:
  - `insertAtHead(int value)`
  - `insertAtTail(int value)`
  - `insertAtPos(int pos, int value)`
  - `deleteNode(int pos)`
  - `reverse()`
  - `middlePoint()`
  - `print()`

---

## Doubly Linked List

### Features

#### Node Operations
- **Insertion**:
  - Insert at the front (`insertAtHead`).
  - Insert at the back (`insertAtTail`).
  - Insert at a specific position (`insertAtPos`).
- **Deletion**:
  - Delete a node at a specific position (`deletion`).
- **Utilities**:
  - Print the entire list (`print`).

---

### Code Structure

#### `Node` Class
- Represents a node in the doubly linked list.
- Contains:
  - `int data`: Value stored in the node.
  - `Node* Next`: Pointer to the next node.
  - `Node* prev`: Pointer to the previous node.

#### `Linked_List` Class
- Manages the doubly linked list.
- Contains:
  - `Node* head`: Pointer to the first node.
  - `Node* tail`: Pointer to the last node.
- Methods:
  - `insertAtHead(int data)`
  - `insertAtTail(int data)`
  - `insertAtPos(int pos, int data)`
  - `deletion(int pos)`
  - `print()`

---

## Example Usage

### Singly Linked List

```cpp
Linked_list list;
list.insertAtHead(10);
list.insertAtTail(20);
list.insertAtPos(2, 15);
print(list);
middlePoint(list);
reverse(list);
print(list);
