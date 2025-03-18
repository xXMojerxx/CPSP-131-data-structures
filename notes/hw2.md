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
* informal sketching is something thats simplified but explains the process of what happens WITHOUT ANY CODE

## 2/20/2025

* make sure to nreate and populate a new node when inserting anything into any type of itterating list.
* & = reference
* &* = reference to pointer
* circular linked list:
  * head ("beginning" of the list (first value in a node))
  * tail ("end" of the list (last value other than NULL in a node))
  * size (length of the list)
  * sentinel (node used to itterate between each node, at the beginning to start the pointers)
* singularly liked list:
  * head ("beginning" of the list (first value in a node))
  * tail ("end" of the list (last value other than NULL in a node))
  * size (length of the list)

## 2/25/2025
* itterators are a fancy word for pointers
* not all itterators are pointers
* itterators are a member of a data scruture, can be used for most data strucutres.
* itterators are also used to access data by the user
* .end() is a dangling pointer (used to check if you are at the end of a list/vector)
* Containers - abstract data strucutre that store collection of elements
* Iterator - abstract process of looping through collection of elements
``` cpp
for (p = C.Begin(); p !=C.end(); ++p)
{
 p->do_something();
}

// a basic itterator used to go to an array/vector

//for loop
//STL vector & STL single linked list example
#include <vector>
#include <forward_list>
int main()
{
 std::vector<int> C = {-2, 5 , -7, 0, 10, 100};
 std::forwardsList<int> C = {-2, 5 , -7, 0, 10, 100};
 int sum = 0;
 for (auto & p=C.begin(); p!=C.end(); ++p) // auto is used to default the type of list used
 {
  sum+= *p
 }
}

//ranged based for loop
//STL vector & STL single linked list example

#include <vector>
#include <forward_list>
int main()
{
 std::vector<int> C = {-2, 5 , -7, 0, 10, 100};
 std::forwardsList<int> C = {-2, 5 , -7, 0, 10, 100};
 int sum = 0;
 for (const auto & element : C) // auto is used to default the type of list used
 {
  sum+= element;
 }
}
```
* itterator categories
* iterators are objects:
  * that can iterate ofver elements within a sequence via common interface
  * adapted from ordinary pointers
* anything that behaves like an iterator is-a iterator
  * ordinary pointer is-a terator
* however, iterators have even more abilities
* data of the itterator is a raw pointer with more things along side it.

| iterator categories heigharchy |
| - |
| input iterator - output iterator |
| forward iterator |
| biodirectional iterator |
| random-access iterator |
| continuous iterator <- added in c++20 |

| iterator category | ability | providers |
| - | - | - |
| outputer iterator | writes forwards | ostream, inserter |
| input iterator | reades forwards once | Istream |
| forwards iterator | reads forward | forward list, unordered containers |
| biodirectioal iterator | reads forwards and backwards | list, set, multiset, map, multimap |
| random-access iterator | reads with random access | array, vector, deque, string, c-style array |

| iterator cabability - expression | effect |
| - | - |
| ***FORWARD ITTERATOR*** | ***FORWARD ITTERATOR*** |
| ```*iter``` | ```procides access to the actuall elements```  |
| ```iter->member``` | ```provides access to a memver of the actual element``` |
| ```++iter``` | ```steps forward (returns new position)``` |
| ```iter++``` | ```steps forwads (returns old position)``` |
| ***BIDIRECTIONAL ITTERATOR*** | ***BIDIRECTIONAL ITTERATOR*** | 
| ```--iter``` | ```steps backward (returns new position)``` |
| ```iter--``` | ```steps backward (returns old position)``` |
| ***BIDIRECTIONAL ITTERATOR*** | ***BIDIRECTIONAL ITTERATOR*** | 
| ```iter1 == iter2``` | ```returns wheter two iterators are equal``` |
| ```iter1 != iter2``` | ```returns whether two iterators are not equal``` |
| ```TYPE()``` | ```Creates iterator (default contrcutor)``` |
| ```TYPE(iter)``` | ```copies iterator (copy contstructor)``` |
| ```iter1 = iter2``` | ```assigns an iterator``` |
| ***FORWARD ITTERATOR*** | ***FORWARD ITTERATOR*** |
| ***RANDOM ACCESS MEMORY*** | ***RANDOM ACCESS MEMORY*** |
| ```iter[n]``` | ```provides access to the element that has index n``` |
| ```iter+=n``` | ```steps n elements forwards ( or backward, if n is negative)``` |
| ```iter-=n``` | ```steps n elements backwards ( or forward, if n is negative)``` |
| ```iter+n``` | ```returns the iterator of the nth next element``` |
| ```n+iter``` | ```returns the iterator of the nth next element``` |
| ```iter-n``` | ```returns the iterator of the nth previous element``` |
| ```iter1 - iter2``` | ```returns the distance between iter1 and iter2``` |
| ```iter1 < iter2``` | ```returns whether iter1 is before iter2``` |
| ```iter1 > iter2``` | ```returns whether iter1 is after iter2``` |
| ```iter1 <= iter2``` | ```returns whether iter1 is not before iter2``` |
| ```iter1 >= iter2``` | ```returns whether iter1 is not after iter2``` |
| ***RANDOM ACCESS MEMORY*** | ***RANDOM ACCESS MEMORY*** |

* each STL contrainter, call it C, has an associated class iterator
  * begin(), rbegin(): returns an iterator to the first element
  * end(), rend(): returns an iterator to an imagination position just after the last element
* An iterator behaves like apointer to an element
  * ```*p``` returns the element referenced by this iterator; access current element
  * ++p, p++: advances to the next element

## 2/27/2025

* an itterator has one attribute: a pointer
* you can use library functions to indicate what type of iterator is present within the array/list
* pre-increment : change the value before using it
* post-increment : change the value after using it
* post-increment moves and copies the data and uses the copy of the orriginal data as your increment, then modify the orriginal
* pre-decrement : change the value before using it
* post-decrement : change the value after using it
* post-decrement moves and copies the data and uses the copy of the orriginal data as your decrement, then modify the orriginal
* operator* : returns a reference to the Node's data (not the Node itself)
* operator-> : returns a pointer to the Node's data (not the Node itself)
* operator== : returns if two itterators are equal to one another
* auxiliary iterator function:
  * advance(), next(), prev(), distance()
  * gives all iterators some abilites uaualy provided only for random-accessiterators
    * to step more than one element forward (or backward)
    * to process the difference between iterators
* ```advance()```
  * ```void advance (InputIterator& pos, Dist n)```
  * modifies the iterator pos
  * increments (or decrements) pos n amount of times
  * lets the iterator step forward (or backward) more than one element
  * still an O(n) operation for list and O91) for vectors and arrays.
* ```next()```
  * ```ForwardsIterator next(ForwardIterator pos, Dist n=1)```
  * returns the position if moved forward n positions
  * does not modify the iterator pos
  * next() words with forward, bidirection, or random-access interator
* ```prev()```
  * ```BidirectionalIterator prev(BidirectionalIterator pos, Dist n=1)```
  * returns the position if kmoved backward n positions
  * does not modify the iterator pos
  * prev() works with vidirectiona, or random-access iterators but not forward iterators.
* ```distance()```
  * ```Dist distance (InputIterator pos1, IntputIterator pos2)```
  * returns the difference between two iterators
  * Still an O(n) operator for list and O91) for vectos and arrays
  * Consider:
    * std::distance( c.begin(), c.end() ) == c.size()
    * std::distance( c.end(), c.being() ) is a logic error (you cannot go backward)
  
