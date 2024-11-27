#pragma once
#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>
#pragma warning(disable : 4996)

class Book
{
public:
	Book(const std::string title, const std::string author, const double isbn, const bool availability);

	std::string Title;
	std::string Author;
	double ISBN;
	bool Availability;
	time_t DateAdd;

	void setBookDtails();
	void displayBookDetails();
	void borrowBook();
	void returnBook();

private:
	
};
