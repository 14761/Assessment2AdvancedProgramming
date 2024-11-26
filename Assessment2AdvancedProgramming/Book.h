#pragma once
#include <iostream>

class Book
{
public:
	Book();
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
