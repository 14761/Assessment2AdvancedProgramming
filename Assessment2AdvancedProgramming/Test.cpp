#include <string>
#include "Book.h"
#include <iostream>

//Test class

static void test1() {
	Book oceanSea("Ocean", "Alessandro Baricco", 9780375703959, false);
	oceanSea.displayBookDetails();
}

//void test2() {
//	Book oceanSea2();
//	oceanSea2.setBookDetails();
//	oceanSea2.displayBookDetails();
//}