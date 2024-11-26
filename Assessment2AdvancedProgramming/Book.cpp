#include "Book.h"
#include <string>

void Book::setBookDtails() {
	std::cout << "Enter Title: ";
	std::getline(std::cin, Book::Title);
	std::cout << std::endl;
	std::cout << "Enter Author: ";
	std::getline(std::cin, Book::Author);
	std::cout << std::endl;
	std::cout << "Enter ISBN: ";
	std::cin >> Book::ISBN;
	std::cout << std::endl;
}

void Book::displayBookDetails() {
	std::cout << "Title: " << Title << std::endl << "Author: " << Author << std::endl << "ISBN: " << ISBN << std::endl << "Availability: " << Availability << std::endl;
}

void Book::borrowBook() {
	Book::Availability = false;
}

void Book::returnBook() {
	Book::Availability = true;
}

Book::Book() {
	Book::Author = "";
	Book::Title = "";
	Book::ISBN = "";
	Book::Availability = false;
}
