// Class Initializer List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

class Product {

private:

    std::string sProductName;
    double dProductPrice;
    int iProductQuantitySold;

public:
    //Overloaded constructors
    //This will be the delegating constructor
    Product(std::string sInit, double dInit, int iInit)
        :sProductName(sInit), dProductPrice(dInit), iProductQuantitySold(iInit)
    {

    }
    Product(std::string sInit) //One argument constructor
        :Product(sInit, 0.0, 0) //Delegates to the three argument constructor
    {

    }
    Product(std::string sInit, double dInit)
        :Product (sInit, dInit, 0)
    {

    }
    Product() //Default constructor which delegates to the delegating constructor above
        : Product("", 0.0, 0) //initializer list
    {

    }
};

int main()
{
    //Creating an instances of Product using overloaded constructors in the Product class

    Product objProduct1; //This instance will call the default constructor with no arguments
    Product objProduct2("Carpet"); //This instance will call the constructor with one argument
    Product objProduct3("Corsair One", 7000);//This instance will call the constructor with two arguments
    Product objProduct3("Umbrella", 9.3, 89); //This instance calls the constructor with three arguments
}

