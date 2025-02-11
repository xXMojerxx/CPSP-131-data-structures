# notes
## 1/28/2025
```cpp
#inclue <iostream>
int main()
{
  int sum = 0, value = 0;
  // read until end-of-file calculating a running total of all values read
  while (std::cin >> value)
    sum += value; // equivalent to sum = sum + valiue
  std::cout << "Sum is: " << sum << std::endl;
  return 0;
}

// There are two arguments that are being presented: (std::cin) and (value)
// The while loop act as a boolean, in which if the value presented into the istream does not represent a correct value, then it does not run the function.

// If we run the function above, it will fun all values that are true and skip all values that are false.
// Use this format of reading for correct data formating and reading.
```

* curly braces indicates a scope, for example classes and whats inside a class.
* std::ostream = out stream, basically std::cout <- an output (you are putting a value into the **stream**)
* std::istream = in stream, basically stdd:cin <- an input (you are taking a value from the **stream** to input into a variable)
* most opperators are binary opperators.
* We have getters and setters
  * getters <- grabs values and sets it to private values (could also be known as modifiers)
  * setters <- sets values to a variable from the private value (could also be known as accessors)
* & signs reoresents r and l value objects
  * ```& -> lvalue ``` have: longjevity, location, variable names
    * parameters, variables, etc
  * ```&& -> rvalue``` are: temporary, no name values,  basically dies at the semicolon.
    * normal values assigned to variables, temporary inputs

``` cpp
int x = 0; // this would be a lvalue because it have a variable name
x = 5; // this cannot be an lvalue because 5 does not count as a variable name, so this is a rvalue
x = (a + b); // rvalue because (a + b) is a noname value.
```
* default construtors ***CAN*** be called without any arguments
* a conversion constructor is when you convert one argument to the default construtor.
  * for example, ``` std::double x = 1 ``` x is a double type while 1 is an int type, but it passes through.
  * you get one free conversion, so be careful when you use a conversion constructor
* Space ship opperators (<=>)  is similar to boolean opperators. Its a comparason opperator that gives back an ordering
  * there are 3 ordering values:
    * 0 (when its equal to each other)
    * negative number (when its less than)
    * positive number (when its greater than)
   
## 1/30/2025
|KEY TERMS| |
| --------------------- | --------------------- |
| Asymptotic analysis | Constant time operations O(1) |
| Asymptotic efficiency class | Logarithmic time operations O(log2 n) |
| Worst-case analysis | linear time operations O(n) |
| Big-Oh notation | N Log N Operations O(n log2 n) |
| - | Quadratic time operations O(n^2) |

* constant time represent an independent time within the function/program
* If constant time is larger than logarithmic time, then choose logarithmic. Vice versa
* Big-Oh notation is represented by O(n), in which n is the size of the container
* O -> worst case : o -> best case

| Data strucure | Operations |
| ------------- | ---------- |
| Arrays (linear) | Create empty |
| Single linked lists (linear) | Get From element, add or remove front element |
| Double inked lists (linear) | Get back element, add or remove back element |
| Binary Trees (logarithmic) | Clear data struture |
| Has table (binary) | Get/add/remove i^th element |

* When comparing data, your organization should be "good" in which:
  * Running time - fast
  * Space usage - small
* ... But there usually is a trade-off in which:
  * Faster often mean more memtory for extra pointers
  * Smaller often means more complex algorithms.
* Opperators are dealt with powers of 2
  * 1/2 of something
  * doubling something
  * power of 2
  * log of 2
  * etc.
* The most important factor within organization is the number of elements in the data struture (size)
* The amount of elements is represented by n
* Then with n, we can find how does the runninng time increases in terms of n.
* When looking at a graph of a efficient class, every spike represents increasing the memory for the program to run

```cpp
// Constant loop
// Return the value of an attribute (e.g., getters) <- look for the loops
std::size_t size() { return _size; }

// Fixed length loops (ranged based for loop)
for (usigned int i = 0; i < 10; ++i )
{
  cout <, i << '\n';
}

// Math epxressions (sin(x+y)  is represented as a loop)
limit =  2 * sin(x+y) + 3 * z;
```
```cpp
// Linear loops

//Consider a list of n elements
for ( const auto & value : list )
{
  cout << vlaue << endl;
}

```
```cpp
// logarithmic loops
size_t search ( const array<int, 9> & c, int v )
{
  size_t s = c.size();
  size_t current = s /2;

  while ( s! = 0 )
  {
    if ( v == c[current] ) return current;
    if ( s == 1 ) break;

    s = ( s + 1 ) / 2; //represents the logarithmic loop

    if ( v < c[current] ) current -= s / 2;
    else current += s / 2;
  }

return numeric_limits<size_t>::max();
}
```
* Data structures should have some type of memory. The bigger the struture, the more memory you need.
* Running time is based on the memory you need to compute.

## 2/4/2025

* Arrays have closed end (has a fixed capacity)
* Vectors has open ends (has infinite capacity, starting from a certain number)
### Array abstract data type
* Constuction efficienty capacity is linear
* Insert efficienty capacity is non existant
* Capacity - max number of elements that can be stored
* Size - another name for Capacity - an array's size does not (can not) change
* Capacity = constant (setting a containters definition at design (compile) time
* There are two "flavors"
  * Standard arrays
    * Smart wrapper around native array
    * std::array from the <array> library <- (#include <array> [i think])
    * Ex: std:: array<Student, 10>
  * Native arrays
    * aka C-Style or raw array
    * ***AVOID*** using these
    * Ex: Student myArray[10];
* Things you can do to an array:
  * Construct, destruct, assign
  * Copy, compare
  * Iterate
  * Access elements
    * at, operator[], front, back ("at" is used without checking, "operator[]" is used with checking)
  * Query
    * empty, size (an array can never be empty
  * Operations
    * there are none
### Vecotr abstract data type
* Construction efficiency capacity is constant
* Insert effeciency capacity is linear
* Capacity - max number of elements that can be stored
* Size - number of elements that are stored
* Things you can do to a vector:
  * Construct, destruct, assign
  * Copy, compare
  * Iterate
  * Access elements
    * at, operator[], front, back ("at" does range checking, "operator[]" does not)
  * Query
    * empty, size, capacity (size represents the ammount inside the vector, capacity represents the size of the vector)
  * Operations
    * insert, erase, clear, push_back, pop_back
When using an extendable vector, it "moves" all the items from the max vector and doubles the size of the vector, "moving" it all back into the vector.

***Array vs vector - What's the difference?***
| array | vector |
| ----- | ------ |
| Capacity is constant | Two flavors, fixed and extendable capcity |
| Size is constant | Size changes |
| Capacity and Size are always the same | Capacity and Size usually differ |
| Every cell alwats contains an element | Come cells do not contain an element |
| No insert and erase operations | Elements can be inserted and erased | 
| Two Template parameters | One template parameter |

## 2/6/2025

```cpp
// definition of std::vector (cppreference.com)
template<
  class T,
  class Allocator = std::allocator<T>
> class vector;

namesoace pmr {
  template< class T >
  using vector = std::vector<T, std::pmr::polymorphic_allocator<t>>;
}

// definition of std::array (cppreference)
template<
  class T,
  std::size_t N
> structarray;
```

* Every data structure has its own itterator.
* Conversion construction changes how a
* Signed integers are negative values to them (-# - #)
* Unsigned integers are counting numbers (0 - #)

```cpp
// attribures
// REMEMBER THESE ATTRIBUTES WHEN CREATING A VECTOR
std::size_t _zie = 0;
std::size_t _capacty = 0;
std::unique_ptr<RawMemory[]> _array = nullptr;

//pointer to data references data in the heap

//another thing to remember
std::size_t index = position - begin(); // take the position and subtract it from the beginning (creates the index)
reserve ( _capacity == 0 ? 8 : 2 * _capacity ); // check if the capacity is 0, then add something. If there is something doiuble capacity.
position = begin() + index; // create new pointer adding new index and begining together.

end()->~T(); // destructor (T() represents class name)
```

* the attributes to a vector is the size, capacity, and the pointer to an array
* When inserting values into a vector, you can create your own loop using indes or using your own loop using pointers (reference vecotr example from professor)
* Dont forget to insert a value when shifting everyting over.
