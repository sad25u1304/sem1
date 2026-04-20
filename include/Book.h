#ifndef BOOK_H
#define BOOK_H
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    std::string isbn;
    bool isAvailable;
public:
    Book(std::string t, std::string a, std::string i);
    void borrow();
    void returnBook();
    std::string getTitle() const { return title; }
    std::string getISBN() const { return isbn; }
    bool getAvailability() const { return isAvailable; }
};
#endif
