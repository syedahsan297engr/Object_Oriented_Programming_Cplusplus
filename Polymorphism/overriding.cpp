#include <iostream>

class Animal {
public:
    virtual void makeSound() {
        std::cout << "The animal makes a sound." << std::endl;
    }
};
//virtual is used to attain method overriding if we do not use this then method overriding will not be obtained

class Cat : public Animal {
public:
    void makeSound() override {
        std::cout << "Meow!" << std::endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        std::cout << "Woof!" << std::endl;
    }
};

int main() {
    Animal* animal = new Animal();
    Animal* cat = new Cat();
    Animal* dog = new Dog();

    animal->makeSound();  // Output: The animal makes a sound.
    cat->makeSound();     // Output: Meow!
    dog->makeSound();     // Output: Woof!

    delete animal;
    delete cat;
    delete dog;

    return 0;
}
