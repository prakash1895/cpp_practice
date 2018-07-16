#include <iostream>
#include <string>
using namespace std;

class Patient
{
    private:
        int idNumber;
    public:
        void setIdNumber(int idIn);
        int getIdNumber();
};

void Patient::setIdNumber(int idIn)
{
    idNumber = idIn;
}

int Patient::getIdNumber()
{
    return idNumber;
}

class Dog
{
    private:
        string breed;
    public:
        void setBreed(string breedIn);
        string getBreed();
};

void Dog::setBreed(string breedIn)
{
    breed = breedIn;
}

string Dog::getBreed()
{
    return breed;
}

class Pet: public Patient, public Dog
{
    string name;
    public:
        void setName(string nameIn);
        string getName();
};

void Pet::setName(string nameIn)
{
    name = nameIn;
}

string Pet::getName()
{
    return name;
}
