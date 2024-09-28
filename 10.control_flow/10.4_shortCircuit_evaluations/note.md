1. And circuit -> &&

if one of the operands is "false" the result is false. Put operands likely to be false first.

false && true -> false
false && false -> false
true && true -> true
true && false -> false

2. OR circuit -> ||

if one of the operands is "true" the result is true. put operands likely to be true first.

true || false -> true;
false || false -> false;
true || true -> true;

false || true -> true;

why care ?
computing some of the operands in the expression can be expensive. if short circuit is possible, such expensive computation can be avoided.
