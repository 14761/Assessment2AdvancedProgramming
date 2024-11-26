#include "Book.h"

void setBookDtails() {
	std::cout << "Enter Title" << std::endl;
	std::cin >> Book::Title;
	std::cout << "Enter Author" << std::endl;
	std::cin >> Book::Author;
	std::cout << "Enter ISBN" << std::endl;
	std::cin >> Book::ISBN;
}

void displayBookDetails() {
	std::cout << "Title: " << Book::Title << std::endl << "Author: " << Book::Author << std::endl << "ISBN: " << Book::ISBN << std::endl;
}

void borrowBook() {

}

void returnBook() {

}

Book::Book()
{
}

