problem.

we can't modify const const objects. That's fine and it's what we want. But we can't read from them either. which makes the kind of useless

<!-- ---------------------------------------------------------------  -->

class Dog {

private:

<!-- member variable -->

std:string dog_name;
std:string dog_breed;
int \* dog_age

    public:
    <!-- constructors -->
        Dog();
        Dog(const std::string& name_param, const std:string& breed_param, int aga_param);

        <!-- destructors -->
        ~Dog();

        <!-- setters  -->
        void set_name(const std::string& dog_name);
        void set_breed(const std::string& breed);
        void set_dog_age(int age);

        <!-- getters  -->

        std::string get_name();
        std::string get_breed();
        std::string get_age();

}

main() {

    const Dog dog1("fluffy", "shepherd", 3); <- it is const object it can't be modifiable.

    dong_set_name("mmm") <- can't work;

    dog1.print_info(); <- reading won'r work either

    std::string name = dog1.get_name(); <- here we are just accessing data we are not reading nor changing data it should work. but it is not working.

    so how to tell the compiler that we are not using setters which can change the data. rather we are using getter it should work.

    compiler think that getter can also modify the data but how can we tell that getters are innocent.

}
