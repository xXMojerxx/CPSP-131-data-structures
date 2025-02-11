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
