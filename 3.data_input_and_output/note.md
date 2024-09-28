std::cin >> name;

when you enter name asif patel.

it is going to accept last string only as input.

for that reason

std::getline(std::cin, full_name);

we use getline so we can accept all the input.
