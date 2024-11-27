// Assessment2AdvancedProgramming.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Book.h"
#include <vector>
#include <string>
#include <ctime>
#include <algorithm>
#pragma warning(disable : 4996)

//void lookForISBN(std::vector<Book> lvector);
//void sortBookData(std::vector<Book> sortVector, bool compare);
//void displayLibrary(std::vector<Book> dvector);
//
//bool compareByISBN(Book& a, Book& b) {
//    return a.ISBN < b.ISBN;
//}

int main()
{
    std::cout << std::boolalpha;

    //Generating books
    Book a1984("1984", "George Orwell", 9781328869333, false);
    Book AstrophysicsforPeopleinaHurry("Astrophysics for People in a Hurry", "Neil deGrasse Tyson", 9780393609394, true);
    Book Necronomicon("Necronomicon", "H.P. Lovecraft", 9780575081567, true);
    Book Oathbringer("Oathbringer", "Brandon Sanderson", 9781250297143, true);
    Book OneHundredYearsOfSolitude("One Hundred Years of Solitude", "Gabriel Garcia Marquez", 9780061120091, false);

    //Saving books into vector
    //std::vector<Book> library;
    Library mylibrary;
    
    mylibrary.addBook(a1984);
    mylibrary.addBook(Oathbringer);
    mylibrary.addBook(AstrophysicsforPeopleinaHurry);
    mylibrary.addBook(Necronomicon);
    mylibrary.addBook(OneHundredYearsOfSolitude);

    //std::cout << library[1].Author;

    //lookForISBN(library);

    /*std::sort(library.begin(), library.end(), compareByISBN);*/

    /*sortBookData(library, compareByISBN);

    displayLibrary(library);*/

    //mylibrary.displayLibrary();


}

//void lookForISBN(std::vector<Book> lvector) {
//    long long int isbn;
//    std::cout << "Enter ISBN number (0 for finish program): ";
//    std::cin >> isbn;
//    if (isbn == 0)
//    {
//        std::cout << "Finishing program";
//        return;
//    }
//    for (std::vector<Book>::iterator it = lvector.begin(); it != lvector.end(); ++it)
//    {
//        if (it->ISBN == isbn)
//        {
//            return it->displayBookDetails();
//        }
//    }
//    std::cout << "Book not in library" << std::endl;
//}

//void sortBookData(std::vector<Book> sortVector, bool compare)
//{
//    std::sort(sortVector.begin(), sortVector.end(), compare);
//}

//void displayLibrary(std::vector<Book> dvector)
//{
//    for (std::vector<Book>::iterator it = dvector.begin(); it != dvector.end(); ++it)
//    {
//        it->displayBookDetails();
//    }
//}
