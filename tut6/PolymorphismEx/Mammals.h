// Dog.h
#pragma once

#include "Mammal.h"
#include <iostream>
using namespace std;

class Dog : public Mammal
{
    public:
        Dog(void);
        ~Dog(void);
        void Move() const;
        void Speak() const;
};

// Dog.cpp

Dog::Dog(void)
{
    cout << "Dog constructor..." << endl;
}

Dog::~Dog(void)
{
    cout << "Dog destructor..." << endl;
}

void Dog::Move() const
{
    cout << "Dog moves a step!" << endl;
}

void Dog::Speak() const
{
    cout << "What does a Dog speak? Woof Woof!" << endl;
}

// Cat.h

class Cat : public Mammal
{
    public:
        Cat(void);
        ~Cat(void);
        void Move() const;
        void Speak() const;
};

// Cat.cpp

Cat::Cat(void)
{
    cout << "Cat constructor..." << endl;
}

Cat::~Cat(void)
{
    cout << "Cat destructor..." << endl;
}

void Cat::Move() const
{
    cout << "Cat moves a step!" << endl;
}

void Cat::Speak() const
{
    cout << "What does a Cat speak? Meow Meow!" << endl;
}

// Horse.h

class Horse : public Mammal
{
    public:
        Horse(void);
        ~Horse(void);
        void Move() const;
        void Speak() const;
};

// Horse.cpp

Horse::Horse(void)
{
    cout << "Horse constructor..." << endl;
}

Horse::~Horse(void)
{
    cout << "Horse destructor..." << endl;
}

void Horse::Move() const
{
    cout << "Horse moves a step!" << endl;
}

void Horse::Speak() const
{
    cout << "What does a Horse speak? Neigh Neigh!" << endl;
}