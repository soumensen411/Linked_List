# Singly Linked List Implementation in C++

This repository contains a C++ implementation of a **singly linked list** with common operations like insertion, deletion, reversal, and printing.

---

## Features

### Node Operations
- **Insertion**:
  - Insert at the front (`insertinFront`).
  - Insert at the back (`insertinBack`).
  - Insert at a specific position (`insertinPos`).
- **Deletion**:
  - Delete a node at a specific position (`Delete`).
- **Reversal**:
  - Reverse the entire list (`reverse`).
- **Utilities**:
  - Print the entire list (`printlist`).
  - Find the middle element using the two-pointer technique (`middleNumberofList`).
---

## Code Structure

### `Node` Class
- Represents a node in the linked list.
- Contains:
  - `int val`: Value stored in the node.
  - `Node* next`: Pointer to the next node.

### `linked_list` Class
- Manages the linked list.
- Contains:
  - `Node* head`: Pointer to the first node.
  - `Node* tail`: Pointer to the last node.
- Methods:
  - `insertinFront(int val)`: Inserts a new node with value at the front of the list.
  - `insertinBack(int val)`:  Inserts a new node with value at the end of the list.
  - `insertinPos(int val, int pos)`: Inserts a new node with value at the specified position.
  - `Delete(int pos)`: Deletes the node at the specified position.
  - `reverse()`: Reverses the linked list in-place by modifying pointers.
  - `middleNumberofList()`: Finds and prints the middle element of the list.
  - `printlist()`: Prints all elements of the linked list sequentially.
---
