Special methods that are called when an object dies. They are needed when the object needs to release some dynamic memory. or for some other kind of clean up.

it's useful when we are allocating
memory in constructors.

and we declare destructor using ~ <- this character

<!-- ------------------------------------------------------------ -->

-> The destructors are called in weird places that may not be obvious.

- when an object is passed by value to a function.

- when a local object is returned from a function (for some compilers)

-> other cases are

- when a local stack object goes out of scope (dies)

- when a heap object is released with delete.
