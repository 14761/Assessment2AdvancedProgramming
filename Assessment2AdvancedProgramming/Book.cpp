#include "Book.h"
#include <string>


//Book class methods
void Book::setBookDtails() {
	std::string title;
	std::string author;
	long long int isbn;
	time_t dateAdd;

	std::cout << "Enter Title (press enter if don't know): ";
	std::getline(std::cin, title);
	if (title != "") Book::Title = title;
	std::cout << std::endl;
	std::cout << "Enter Author (press enter if don't know): ";
	std::getline(std::cin, author);
	if (author != "") Book::Author = author;
	std::cout << std::endl;
	std::cout << "Enter ISBN (type 0 if don't know): ";
	std::cin >> isbn;
	if (isbn != 0) Book::ISBN = isbn;
	std::cout << std::endl;
	std::cout << "Enter timestamp (type 0 if don't know): ";
	std::cin >> dateAdd;
	if (dateAdd != 0) Book::DateAdd = dateAdd;
	std::cout << std::endl;
}

void Book::displayBookDetails() {
	std::cout << "Title: " << Title << std::endl << "Author: " << Author << std::endl << "ISBN: " << ISBN << std::endl << "Availability: " << Availability << std::endl << "Date added: " << ctime(&DateAdd);
}

void Book::borrowBook() {
	Book::Availability = false;
}

void Book::returnBook() {
	Book::Availability = true;
}

Book::Book(const std::string title = "", const std::string author = "", const long long int isbn = 0, const bool availability = true) : Title(title), Author(author), ISBN(isbn), Availability(availability) {
	DateAdd = time(NULL);
}

//Library class methods

void Library::sortBookData()
{
	std::sort(Library::library.begin(), Library::library.end(), [](const Book& a, const Book& b) {return a.ISBN < b.ISBN; });
}
void Library::displayLibrary()
{
	for (std::vector<Book>::iterator it = Library::library.begin(); it != Library::library.end(); ++it)
	{
		it->displayBookDetails();
	}
}
void Library::lookForISBN() {
	long long int isbn;
	std::cout << "Enter ISBN number (0 for finish program): ";
	std::cin >> isbn;
	if (isbn == 0)
	{
		std::cout << "Finishing program";
		return;
	}
	for (std::vector<Book>::iterator it = Library::library.begin(); it != Library::library.end(); ++it)
	{
		if (it->ISBN == isbn)
		{
			return it->displayBookDetails();
		}
	}
	std::cout << "Book not in library" << std::endl;
}

void Library::addBook(Book book) {
	Library::library.push_back(book);
}

