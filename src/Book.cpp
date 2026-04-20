#include "Book.h"
Book::Book(std::string t, std::string a, std::string i) : title(t), author(a), isbn(i), isAvailable(true) {}
void Book::borrow() { isAvailable = false; }
void Book::returnBook() { isAvailable = true; }
