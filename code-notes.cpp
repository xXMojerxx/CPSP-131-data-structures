#include "code-notes.h"

myClass::myClass() : _name("Jude"), _age(19), _gender("male") {}
myClass::myClass(string name, const int age, string gender) : _name(name), _age(age), _gender(gender) {}

std::string myClass::getName() {
  return _name;
}

int myClass::getAge() {
  return _age;
}

std::string myClass::getGender() {
  return _gender;
}

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
