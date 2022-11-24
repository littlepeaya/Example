#ifndef __FOO_HPP__
#define __FOO_HPP__

#include <string.h>
#include <vector>
#include <iostream>



class Foo {
public: 
    int age;
    std::string animal;
    std::vector<std::string> zoo;

    Foo () : zoo {"fish", "crab", "monkey", "elephant", "bear"} {};
    ~Foo() {};

    int FooAge(int age) {
        if(age < 12)
            return age;
        else if (12 < age && age <120)
            return age/12;
        else 
            return (age/12) + 1;   
    };
    bool FooZoo(std::string animal) {
        for(int i = 0; i < zoo.size(); ++i) {
            if(animal == zoo[i]) {
                return true;
            break;
            }
        }
        return false;
    };

    
};

#endif