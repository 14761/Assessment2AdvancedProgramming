#pragma once
#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>
#include <string>
#pragma warning(disable : 4996)

class Book
{
public:
	Book(const std::string title, const std::string author, const long long int isbn, const bool availability);

	std::string Title;
	std::string Author;
	long long int ISBN;
	bool Availability;
	time_t DateAdd;

	void setBookDtails();
	void displayBookDetails();
	void borrowBook();
	void returnBook();

private:
	
};

class Library
{
public:
	std::vector<Book> library;
	void sortBookData();
	void displayLibrary();
	void lookForISBN();
	void addBook(Book book);
};