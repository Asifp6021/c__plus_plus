in c++ there are three type we can use for defining fractional number

1. float => bytes 4 => precision 7

2. double => bytes 8 => precision 15 => recommended default

3. long double => bytes 12 => precision >double

precision means take float it has precision 7 means we can define beats

1.678747 => 7

1.2345678912345 => 15

<!-- ---------------------------------------------------------------- -->

we can perform scientific calculation using it.

and we can divide fractional number with 0 and output will be infinity.

but we can't divide o with decimal number. it will give output as NaN.

<!-- ------------------------------------------------------------------ -->

1. remember the suffixes when initializing floating point variables. otherwise the default will be double.

float number1 = {1.233555f} <- have to put suffix f at the end of the number

long double number2 = {1.33555l} <- put l

for double there is no need to put anything.

2. double works well in many situation so you will see it used a lot.

<!-- ---------------------------------------------------------------- -->

std::cout << std::setprecision(20); using this we can set precision but as float can accept only 7 precision so then other remaining 13 treated as garbage.

same with double other 5 will be garbage.

we have to include library #include <iomanip> to use setprecision
