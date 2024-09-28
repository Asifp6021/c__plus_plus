/* The period of time in which a variable is alive in memory. it becomes alive when you declare it and it is killed (wiped out) from memory at some point.

 when variable gets killed it decided by the its storage duration.

 storage duration is property which decides for how long variable going to alive.

1. local (block, automatic) storage duration
2. static storage duration

3. dynamic storage duration -> we as developer decides when should it die.
 */

#include <iostream>

int static_var2{50}; // static duration -> dies when program ends

int hereIs{34}; // dynamic duration developer decides when it should die

int main()
{

	int local_var1{57}; // local(automatic) duration -> dies at the end of the block

	int IamHere{56}; // dynamic -> we will learn more about it

	return 0;
}