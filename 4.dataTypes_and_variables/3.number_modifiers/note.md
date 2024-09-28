unsigned and signed modifiers.

when we use unsigned modifiers it means we are going to save only positive numbers.

unsigned int => bytes 4 => range [0 to 4,294,967,295]

2. when we used signed modifier it means we are going to save negative numbers and positive by the given range.

signed int => 4 bytes => range [-2,147,483,648 to 2,147,483,647];

<!-- -------------------------------------------
 -->

3.  short and long

short short_var {-32760} //2 bytes in memory

log log_var { 88 } // 4 or 8 bytes in memory.

long long long_long {888} // 8 bytes

these modifiers only apply to integral types those in which you can store decimal numbers.

it do not work for fractional number such as 2.7, 7.4...n

https://www.learncpp.com/cpp-tutorial/unsigned-integers-and-why-to-avoid-them/

https://www.learncpp.com/cpp-tutorial/signed-integers/
