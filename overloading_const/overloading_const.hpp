#include<iostream>
#include<string>
using namespace std;

class Dog
{
    string name;
    int license;
  public:
    Dog();
    Dog(string nameIn);
    Dog(int licenseIn);
    Dog(string nameIn, int licenseIn);
    
    string getName();
    int getLicense();
};

Dog::Dog()
{
    name = "NA";
    license = 0;
}

Dog::Dog(string nameIn )
{
    name = nameIn;
    license = 0;
}

Dog::Dog(int licenseIn)
{
    name = "NA";
    license = licenseIn;
}

Dog::Dog(string nameIn, int licenseIn)
{
    name = nameIn;
    license = licenseIn;
}

string Dog::getName()
{
    return name; 
}

int Dog::getLicense()
{
    return license;
}
