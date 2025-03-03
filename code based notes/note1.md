## Coding example
```cpp
auto distance = std::abs(lhs - rhs);
auto magnitude = std::max(std::abs(lhs), std::abs(rhs));

return distance < EPSILON1 || distance < EPSILON2 * magnitude;

// represents the distance presented by comparting "EPSILON1" and "EPSILON2"
```

## My example
```cpp
auto left_absolute = std::abs(left)
auto right_absolute = std::abs(right)

auto distance = std::abs(left - right) // take the distance between the left and right.
auto magnitude = std::max(left_absolute, right_absolute); //takes the greater value between both of the variables presented

return distance < EPSILON1  || distance < EPSILON2 *  magnitude;

// returns false or true if either the 'distance' is less than 'EPSILON1' or if the 'distance' is less than the 'EPSILON2' times the magnitude;
// both EPSILONS represents data presented, trying to grab which value is greater than the other.

return
```

although it looks terrible, the idea of:
* taking the absolute of two inputed variables
* checking if  EITHER the imputed variables are equal to a preset variable made by the function
* return data at end.

