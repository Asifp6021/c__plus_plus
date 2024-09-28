in c++ we have facility to show range of value using enums and type class.

example. we have month from january to december.

<!-- _____________________________________________________________ -->

1. enum classes

enums classes are type you can use it to store range of value.

for example months. but it is very hard work with this.

so we can use enum classes.

enum class month {
jan, feb, ... dec
};

withing curly base values are months. we call those value enumerator.

each enumeration is represented by an integral value under the hood.

size of the enum = int size by default. = 4 byte

enum classes are not created to print on the console or terminal. if you try to print it you will get compiler error.

but there is way by which we can print it. we just have to cast the type of the enum class to int.
