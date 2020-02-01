/*
Moises Lopez
229564
molopez@chapman.edu
CPSC 298-01
Assignment 3

Main for Pet Class.

*/
#include "Pet.h"
#include <iostream>
#include <string>

using namespace std;
int main(int argc, char **argv){

  Pet *pet1 = new Pet("Samsung", 6, "Dog", 22.5); //insatnce 1
  Pet *pet2 = new Pet("Jiji", 8, "Cat", 16.8);    //insatnce 2

  cout << "My pet's name is: " << pet2->getName() << endl;
  cout << "My pet is " << pet2->getAge() << " years old." << endl;
  cout << "My pet is a " << pet2->getType() << endl;
  cout << "My pet weighs " << pet2->getWeight() << " lbs." << endl;

  cout << "==================" << endl;

  cout << "My pet's name is: " << pet1->getName() << endl;
  cout << "My pet is " << pet1->getAge() << " years old." << endl;
  cout << "My pet is a " << pet1->getType() << endl;
  cout << "My pet weighs " << pet1->getWeight() << " lbs." << endl;

  delete pet1;
  delete pet2;
}
