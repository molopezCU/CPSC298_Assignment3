#ifndef PET_H
#define PET_H

#include <iostream>
#include <string>

using namespace std;
class Pet{
  public:
    Pet(); //constructor
    Pet(string name, int age, string type, double weight); //overloaded constructor

    //accessors
    string getName();
    int getAge();
    string getType();
    double getWeight();

    //mutators
    void setName(string name);
    void setAge(int age);
    void setType(string type);
    void setWeight(double weight);


  private:
    //attributes of the pet
    string m_name;
    unsigned int m_age; //no one is never negative age
    string m_type;
    double m_weight;
  };
#endif
