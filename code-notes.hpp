#include <algorithm>                                                      // move( range ), move_backward( range )
#include <array>
#include <cstddef>                                                        // size_t
#include <exception>
#include <forward_list>
#include <iomanip>                                                        // setprecision()
#include <iostream>                                                       // boolalpha(), showpoint(), fixed(), setw()
#include <list>
#include <sstream>                                                        // ostringstream
#include <string>                                                         // string, to_string()
#include <utility>                                                        // move( object )
#include <vector>

class myClass {
  public:
    myClass();
    myClass(string name, const int age, string gender);


  private:
    string _name;
    int _age;
    string _gender;

    // for singly linked list:
    struct Node;
    struct PrivateMembers;

}
