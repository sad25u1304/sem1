#include "Library.h"
#include <iostream>

void Library::addBook(const Book& book) {
    books.push_back(book);
}

Book* Library::findBookByISBN(const std::string& isbn) {
    for (auto& b : books) {
        if (b.getISBN() == isbn) return &b;
    }
    return nullptr;
}

void Library::listAllBooks() const {
    for (const auto& b : books) {
        std::cout << "[" << (b.getAvailability() ? "Доступна" : "Выдана") << "] " 
                  << b.getTitle() << " (ISBN: " << b.getISBN() << ")" << std::endl;
    }
}
