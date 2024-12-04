// Assessment2AdvancedProgramming.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Book.h"
#include <vector>
#include <string>
#include <ctime>
#include <algorithm>
#pragma warning(disable : 4996)

static void test1();

static void test2();

static void test3();

static void test4();

static void test5(Book& book1, Book& book2, Book& book3, Book& book4, Book& book5);

static void test6(Book& book1, Book& book2, Book& book3, Book& book4, Book& book5);

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
    //Library mylibrary;
    
    //Saving books into vector
    /*mylibrary.addBook(a1984);
    mylibrary.addBook(Oathbringer);
    mylibrary.addBook(AstrophysicsforPeopleinaHurry);
    mylibrary.addBook(Necronomicon);
    mylibrary.addBook(OneHundredYearsOfSolitude);

    mylibrary.lookForISBN();*/

    //Tests
    //test1();
    //test2();
    //test3();
    //test4();
    //test5(a1984, AstrophysicsforPeopleinaHurry, Necronomicon, Oathbringer, OneHundredYearsOfSolitude);
    test6(a1984, AstrophysicsforPeopleinaHurry, Necronomicon, Oathbringer, OneHundredYearsOfSolitude);
}

void test1() {
    Book testBook("Ocean sea", "Alessandro Baricco", 9780375703959, false);
    testBook.displayBookDetails();
}

void test2() {
    Book testBook;
    testBook.setBookDetails();
    testBook.displayBookDetails();
}

void test3() {
    Book testBook("Ocean sea", "Alessandro Baricco", 9780375703959, true);
    testBook.borrowBook();
    testBook.displayBookDetails();
}

void test4() {
    Book testBook("Ocean sea", "Alessandro Baricco", 9780375703959, false);
    testBook.returnBook();
    testBook.displayBookDetails();
}

void test5(Book& book1, Book& book2, Book& book3, Book& book4, Book& book5) {
    Library myTestLibrary;
    myTestLibrary.addBook(book1);
    myTestLibrary.addBook(book2);
    myTestLibrary.addBook(book3);
    myTestLibrary.addBook(book4);
    myTestLibrary.addBook(book5);
    myTestLibrary.sortBookData();
    myTestLibrary.displayLibrary();
}

void test6(Book& book1, Book& book2, Book& book3, Book& book4, Book& book5) {
    Library myTestLibrary;
    myTestLibrary.addBook(book1);
    myTestLibrary.addBook(book2);
    myTestLibrary.addBook(book3);
    myTestLibrary.addBook(book4);
    myTestLibrary.addBook(book5);
    myTestLibrary.lookForISBN();
}
