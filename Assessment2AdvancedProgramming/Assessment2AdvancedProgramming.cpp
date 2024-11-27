// Assessment2AdvancedProgramming.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Book.h"
#include <vector>
#include <string>
#include <ctime>
#include <algorithm>
#pragma warning(disable : 4996)

void lookForISBN(std::vector<Book> lvector);
void sortBookData(std::vector<Book> sortVector);
void displayLibrary(std::vector<Book> dvector);
bool compare(Book& a, Book& b) {
    return a.ISBN < b.ISBN;
}

int main()
{
    std::cout << std::boolalpha;

    //Test book class
    
    /*Book principito;
    principito.displayBookDetails();
    principito.setBookDtails();
    principito.displayBookDetails();
    principito.returnBook();
    principito.displayBookDetails();
    principito.borrowBook();
    principito.displayBookDetails();*/

    //Generating books
    Book a1984("1984", "George Orwell", 9781328869333, false);
    Book AstrophysicsforPeopleinaHurry("Astrophysics for People in a Hurry", "Neil deGrasse Tyson", 9780393609394, true);
    Book Necronomicon("Necronomicon", "H.P. Lovecraft", 9780575081567, true);
    Book Oathbringer("Oathbringer", "Brandon Sanderson", 9781250297143, true);
    Book OneHundredYearsOfSolitude("One Hundred Years of Solitude", "Gabriel Garcia Marquez", 9780061120091, false);

    //Saving books into vector
    std::vector<Book> library;
    
    library.push_back(a1984);
    library.push_back(AstrophysicsforPeopleinaHurry);
    library.push_back(Necronomicon);
    library.push_back(Oathbringer);
    library.push_back(OneHundredYearsOfSolitude);

    std::cout << library[1].Author;

    lookForISBN(library);

    sortBookData(library);



}

void lookForISBN(std::vector<Book> lvector) {
    double isbn;
    std::cout << "Enter ISBN number (0 for finish program): ";
    std::cin >> isbn;
    if (isbn == 0)
    {
        std::cout << "Finishing program";
        return;
    }
    for (std::vector<Book>::iterator it = lvector.begin(); it != lvector.end(); ++it)
    {
        if (it->ISBN == isbn)
        {
            return it->displayBookDetails();
        }
    }
    std::cout << "Book not in library" << std::endl;
}

void sortBookData(std::vector<Book> sortVector)
{
    std::sort(sortVector.begin(), sortVector.end(), compare);
}

void displayLibrary(std::vector<Book> dvector)
{
    for (std::vector<Book>::iterator it = dvector.begin(); it != dvector.end(); ++it)
    {
        it->displayBookDetails();
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
