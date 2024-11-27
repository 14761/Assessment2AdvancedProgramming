// Assessment2AdvancedProgramming.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Book.h"
#include <vector>
#include <string>
#include <ctime>
#include <algorithm>
#pragma warning(disable : 4996)

int main()
{
    std::cout << std::boolalpha;

    //Generating books
    Book a1984("1984", "George Orwell", 9781328869333, false);
    Book AstrophysicsforPeopleinaHurry("Astrophysics for People in a Hurry", "Neil deGrasse Tyson", 9780393609394, true);
    Book Necronomicon("Necronomicon", "H.P. Lovecraft", 9780575081567, true);
    Book Oathbringer("Oathbringer", "Brandon Sanderson", 9781250297143, true);
    Book OneHundredYearsOfSolitude("One Hundred Years of Solitude", "Gabriel Garcia Marquez", 9780061120091, false);

    // Creating library
    Library mylibrary;
    
    //Saving books into vector
    mylibrary.addBook(a1984);
    mylibrary.addBook(Oathbringer);
    mylibrary.addBook(AstrophysicsforPeopleinaHurry);
    mylibrary.addBook(Necronomicon);
    mylibrary.addBook(OneHundredYearsOfSolitude);

    mylibrary.displayLibrary();
    mylibrary.sortBookData();
    mylibrary.displayLibrary();
    mylibrary.lookForISBN();
}
