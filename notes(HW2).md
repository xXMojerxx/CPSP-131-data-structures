# notes

## 2/11/2025

* When having an error, keep on trying. Use different if statements to check every possible combination and/or checking.
* "short circut" means to stop when you have the value correct and move on.
* mostly went over code for HW1 and what to do.

## 2/13/2025

* arrays & vectors are sequence containers
* linked lists are a sequential container
* linked list's "super power" is insert and removing
* linked lists are not good at accessing data
* attributes to a singlely linked list is:
  * head
  * tail
  * size
* linked lists store data is stored all over the world in nodes
* when creating a linked list, you create a node with all the data in it, finding a spot in the world to put it in.
* "0" represents the end of a linked list (representing null)
* singlely linked list can:
  * only look forward
  * has an end point
  * terminates at the end of list
  * (is reversable)
* circular linked list is the same but stops at the beginning
* doubly linked list can start from either the beginning or the end
* node - an object containing data and link(s) to adjacent node(s)
* head - the first node in the list [ pointer to nodes ]
* tail - the last node in the lsit [ pointer to nodes ]
* null-terminated - a list whose link in the last node is null
* circular - a list whose link in the last node is the first node (no null pointers)
* singly linked list:
  * only move forard
  * can insert and delete next element never current element
* WHAT CAN YOU DO TO A LINKED LIST
  * Construct, destruct, assign
  * Copy, compare
  * Iterate
  * Access elements
    * front, back
  * Query
    * empty, size
  * Operations
    * Insert, erase, clear
    * push_front, push_back, pop_front, pop_back
* there is no indexing in a list (it does not exist)
* there is no size, you have to calculate it
* takes alot of resources and time to get to each node
* when inserting into a list, you need to create new node.
* when inserting into a list at the tail, you need to set the pointer to null
* next, make current tail point ot new node, then finally point to new node.
* to create a linked list using dynamic storage, we need a class which has two data members:
    * To hold data
 
## 2/18/2025
``` cpp
template<typename T>
struct SinglyLinkedList<T>::Node
{
 Node() = default;
 Node( T value ) : _data{ std::move(value) ) {}

T _data = T{};
Node * _next = nullptr;
};
// This is the definition of a singular linked list null-terminated

template<typename t>
struct SinglyLinkedList<T>::PrivateMembers
{
 Node * _head = nullptr;
 Node * _tail = nullptr;
 std::size_t _size = 0;
};
// This is the default construction of a singly linked list null-terminated.
```
* you cannot dereference "end", "end" does not point to anything
* put the attributes inside a class within a strucutre
* template classes uses ".hxx" to determine the source file for a template class
* 
