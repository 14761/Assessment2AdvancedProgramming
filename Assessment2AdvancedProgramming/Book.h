#pragma once
#include <iostream>

class Book
{
public:
	Book();
	Book(const std::string title, const std::string author, const std::string isbn, const bool availability);

	std::string Title;
	std::string Author;
	std::string ISBN;
	bool Availability;

	void setBookDtails();
	void displayBookDetails();
	void borrowBook();
	void returnBook();

private:
	
};
