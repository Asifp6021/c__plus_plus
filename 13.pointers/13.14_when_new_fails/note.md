/\*

1. in some rare cases. the 'new' operator will fail to allocate dynamic memory from the heap. When that happens. and you have no mechanism in place to handle that failure. an exception will be thrown and your program will crash BAD!

note -> 'new' fails very rarely in practice and you'll see many programs that assume that it always works and don't check for memory allocation failure in any way. Depending on your application. failed memory allocations can be very bad and you need to check and handle them.
\*/

---

<!--  checking for failed memory allocation -->

1. through the exception mechanism.

-> exception mechanism is there to use when error or any problem accure

we have to use try and catch block

---

2. the std::nothrow setting
