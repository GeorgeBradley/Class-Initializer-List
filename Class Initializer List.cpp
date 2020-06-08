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
    Product() //Default constructor which delegates to the delegating constructor above
        : Product("", 0.0, 0) //initializer list
    {

    }
};

   
int main()
{
    std::cout << "Hello World!\n";
}

