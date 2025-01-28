man this class is going to kill me .(._. ).
```cpp
// main.cpp
std::string learning = "Time to relearn cpp in 6 month and apply it to data structures";
std::int studying;

std::cout << "how many hours am i going to study?";
std::cin >> studying;

if (studying == 0){
  std::cout << "yeah you're cooked";
} else {
  std::cout << "good luck in the class and try and not blow your brains out";
}
```
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
