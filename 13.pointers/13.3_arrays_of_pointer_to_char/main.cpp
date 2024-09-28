/*

in previous exercise fortune teller.

in version 1 we saved all the data in separate variable.

in version 2 we used 2d array

char prediction [] [90] {
    "a lot of kinds running in the background",
    "I will do that"
}

array size is 2 deduce by the compiler but the character which we can fit that is limited to 90 we can't fit more then 90.

so operating system has allowed us to fit 90 character in memory but if you fit less then suppose you just fit 50 character so remaining space for the 40 character will be filled by the null character that is waste.

because we declare 90 character so we have to fit 90 only not less not more. 90 character has owned by us


so it's like we are wasting memory if we fit less then 90.

we need something where we can fit character as much we want ans where not limited certain number of character and not wasting memory this is where char pointer comes into play.
*/

#include <iostream>
#include <ctime>

int main()
{
    // srand() has to run once per program run
    std::srand(std::time(0)); // Seed

    /*
    char prediction0[]{ "a lot of kinds running in the backyard!" };
    char prediction1[]{ "a lot of empty beer bootles on your work table." };
    char prediction2[]{ "you Partying too much with kids wearing weird clothes." };
    char prediction3[]{ "you running away from something really scary" };
    char prediction4[]{ "clouds gathering in the sky and an army standing ready for war" };
    char prediction5[]{ "dogs running around in a deserted empty city" };
    char prediction6[]{ "a lot of cars stuck in a terrible traffic jam" };
    char prediction7[]{ "you sitting in the dark typing lots of lines of code on your dirty computer" };
    char prediction8[]{ "you yelling at your boss. And oh no! You get fired!" };
    char prediction9[]{ "you laughing your lungs out. I've never seen this before." };
    */

    // METHOD3.
    const char *predictions[]{
        "a lot of kids running in the backyard!",
        "a lot of empty beer bootles on your work table.",
        "you Partying too much with kids wearing weird clothes.",
        "you running away from something really scary",
        "clouds gathering in the sky and an army standing ready for war",
        "dogs running around in a deserted empty city",
        "a lot of cars stuck in a terrible traffic jam",
        "you sitting in the dark typing lots of lines of code on your dirty computer",
        "you yelling at your boss. And oh no! You get fired!",
        "you laughing your lungs out. I've never seen this before."};

    bool end{false};

    const int max_length{15};
    char name[max_length]{};

    std::cout << "What's your name dear :" << std::endl;

    std::cin.getline(name, max_length); // Get input with spaces

    while (!end)
    {
        std::cout << "Oh dear " << name << ", I see ";

        size_t rand_num = static_cast<size_t>((std::rand() % std::size(predictions)));

        std::cout << predictions[rand_num] << std::endl;

        std::cout << "Do you want me to try again ? (Y | N) : ";

        char go_on;
        std::cin >> go_on;

        end = ((go_on == 'Y') || (go_on == 'y')) ? false : true;
    }

    std::cout << "That's all I have for you today dear. Best wishes" << std::endl;

    return 0;
}