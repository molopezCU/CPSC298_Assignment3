#include "Pet.h"
#include <iostream>
#include <string>

using namespace std;
int main(int argc, char **argv){

  Pet *p2 = new Pet("Jiji", 8, "Cat", 16.8);

  cout << "My pet's name is: " << p2->getName() << endl;
  cout << "My pet is " << p2->getAge() << " years old." << endl;
  cout << "My pet is a " << p2->getType() << endl;
  cout << "My pet weighs " << p2->getWeight() << " lbs." << endl;


  // cout << "my name is: " << p2->getName() << endl;
  //
  // cout << "address of P: " << p << endl;
  // cout << "address of P2: " << p2 << endl;

  // delete p;
  delete p2;
}
