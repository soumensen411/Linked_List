# C++ Linked List Implementations

This repository contains C++ implementations of **Singly Linked List** and **Doubly Linked List**, including common operations such as insertion, deletion, traversal, and more.

---

## 📌 Contents

- [Singly Linked List](#singly-linked-list)
  - Features
  - Code Structure
  - Example Usage
- [Doubly Linked List](#doubly-linked-list)
  - Features
  - Code Structure
  - Example Usage

---

## Singly Linked List

### ✅ Features

- **Insertion**:
  - At head (`insertAtHead`)
  - At tail (`insertAtTail`)
  - At a specific position (`insertAtPos`)
- **Deletion**:
  - At a specific position (`deleteNode`)
- **Utilities**:
  - Print the entire list (`print`)
  - Find the middle element (`middlePoint`)
  - Reverse the list (`reverse`)

### 📦 Code Structure

#### `Node` Class
- Represents a node in the singly linked list.
- Attributes:
  - `int data`
  - `Node* next`

#### `Linked_list` Class
- Attributes:
  - `Node* head`
  - `Node* tail`
- Key Methods:
  - `insertAtHead(int value)`
  - `insertAtTail(int value)`
  - `insertAtPos(int pos, int value)`
  - `deleteNode(int pos)`
  - `print(Linked_list &list)`
  - `middlePoint(Linked_list list)`
  - `reverse(Linked_list &list)`

### 💻 Example Usage

```cpp
Linked_list list;
list.insertAtHead(10);
list.insertAtTail(20);
list.insertAtPos(2, 15);
print(list);
middlePoint(list);
reverse(list);
print(list);
```

---

## Doubly Linked List

### ✅ Features

- **Insertion**:
  - At head (`insertAtHead`)
  - At tail (`insertAtTail`)
  - At a specific position (`insertAtPos`)
- **Deletion**:
  - At a specific position (`deletion`)
- **Utilities**:
  - Print the entire list (`print`)

### 📦 Code Structure

#### `Node` Class
- Represents a node in the doubly linked list.
- Attributes:
  - `int data`
  - `Node* Next`
  - `Node* prev`

#### `Linked_List` Class
- Attributes:
  - `Node* head`
  - `Node* tail`
- Key Methods:
  - `insertAtHead(int data)`
  - `insertAtTail(int data)`
  - `insertAtPos(int pos, int data)`
  - `deletion(int pos)`
  - `print(Linked_List list)`

### 💻 Example Usage

```cpp
Linked_List list;
list.insertAtHead(30);
list.insertAtTail(50);
list.insertAtPos(2, 40);
print(list);
list.deletion(2);
print(list);
```

---

## 📎 Notes

- Both implementations use dynamic memory (`new`, `delete`) and pointer manipulation.
- They serve as good examples for learning fundamental data structures in C++.

---

## 📁 File Structure

```
├── Singly_Linked_List.cpp
├── Doubly_Linked_List.cpp
└── README.md
```

---
