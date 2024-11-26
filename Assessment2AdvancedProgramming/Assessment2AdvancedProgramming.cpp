#include <iostream>
#include "Book.h"

int main()
{
    std::cout << std::boolalpha;
    Book principito;
    principito.displayBookDetails();
    principito.setBookDtails();
    principito.displayBookDetails();
    principito.returnBook();
    principito.displayBookDetails();
    principito.borrowBook();
    principito.displayBookDetails();

}
