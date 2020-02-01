/*
Moises Lopez
229564
molopez@chapman.edu
CPSC 298-01
Assignment 3

Implementation file for Pet class.

*/
#include "Pet.h"
#include <iostream>
#include <string>

using namespace std;
    Pet::Pet(){
      //initialize variables to defaults
      m_name = "";
      m_age = 0;
      m_type = "";
      m_weight = 0.0;
    }

    //overloaded
    Pet::Pet(string name, int age, string type, double weight){
      m_name = name;
      m_age = age;
      m_type = type;
      m_weight = weight;
    }

    //accessors
    string Pet::getName(){
      return m_name;
    }

    int Pet::getAge(){
      return m_age;
    }

    string Pet::getType(){
      return m_type;
    }

    double Pet::getWeight(){
      return m_weight;
    }

    //mutators
    void Pet::setName(string name){
      m_name = name;
    }

    void Pet::setAge(int age){
      m_age = age;
    }

    void Pet::setType(string type){
      m_type = type;
    }

    void Pet::setWeight(double weight){
      m_weight = weight;
    }
