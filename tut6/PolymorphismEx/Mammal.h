// Mammal.h
#pragma once

#include <iostream>
using namespace std;

class Mammal
{

      public:
            Mammal(void);
            ~Mammal(void);
            virtual void Move() const;
            virtual void Speak() const;
      protected:
            int Age;

};

// Mammal.cpp

Mammal::Mammal(void): Age(1)
{
      cout << "Mammal constructor..." << endl;
}

Mammal::~Mammal(void)
{
      cout << "Mammal destructor..." << endl;
}

void Mammal::Move() const
{
      cout << "Mammal moves a step!" << endl;
}

void Mammal::Speak() const
{
      cout << "What does a mammal speak? Mammilian!" << endl;
}

