#include <iostream>
#include <cstring>

int main()
{
    char vowels[]{'a', 'e', 'i', 'o', 'u'};
    std::string sentence_is = "welcome to indigital";

    for (size_t i = 0; i < sizeof(vowels); i++)
    {
        std::cout << vowels[i] << std::endl;
    };

    for (size_t j = 0; j < sizeof(sentence_is); j++)
    {
        std::cout << sentence_is[j] << std::endl;
    }

    return 0;
}