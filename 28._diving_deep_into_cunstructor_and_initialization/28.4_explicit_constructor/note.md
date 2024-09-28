here is we are comparing whether square 1 is smaller than or bigger then square2.

std::cout << "s1 > s2 : " << compare(s1, s2) << std::endl; // false <- this one is working fine.

<!-- ----------------------------------------------------- -->

std::cout << "s1 > 45.9 : " << compare(s1, 45.9) << std::endl;

now you can see we are passing second argument to the compare as number so may be thinking that we are comparing number with square1 but that is no the case.

the compiler will try and look whether it can convert number into square object or not.

so looks at parameter of the function

bool compare(const Square &square1, const Square &square2) <- it's type is not double so it is not possible.

but what we are passing as parameter to the and argument to the compare function it's object. from the class and constructor.

so compiler looks at the class and it's constructor

Square(double side_param); <- so here function constructor accepting double type so it makes compiler to easily convert the type and make that number square object.

means compiler is doing implicit conversion. but we don't want this implicit conversion from the compiler.

explicit Square(double side_param); <- we just have to add explicit keyword now compiler can't emplicitely convert it.
