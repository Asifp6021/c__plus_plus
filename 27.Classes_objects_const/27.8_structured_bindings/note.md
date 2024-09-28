1. For const objects you can only call const member functions.

2. const objects are completely non-modifiable(immutable), the compiler won't allow calling a member function that modifies the const object in any way.

3. we are not allowed to modify the object in any way inside const member functions.

4. just as we're not allowed to directly modify the objects inside a const member function. we're of allowed to call a method that modifies the object indirectly either.

5. any attempt to modify an object's member variable (direct or indirect) from within a const member function will result in a compiler error.

6. you cannot call any non-const member function from within a const member function.
