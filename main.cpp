#include <iostream>
#include "Library.h"

int main() {
    Library myLibrary;

    // Создаем книги
    Book b1("1984", "George Orwell", "12345");
    Book b2("C++ Primer", "Stanley Lippman", "67890");

    // Добавляем в библиотеку
    myLibrary.addBook(b1);
    myLibrary.addBook(b2);

    std::cout << "--- Список книг в библиотеке ---" << std::endl;
    myLibrary.listAllBooks();

    // Проверка поиска и выдачи
    std::cout << "\nИщем книгу по ISBN 12345..." << std::endl;
    Book* found = myLibrary.findBookByISBN("12345");
    if (found) {
        std::cout << "Найдена: " << found->getTitle() << ". Берем её..." << std::endl;
        found->borrow();
    }

    std::cout << "\n--- Обновленный список ---" << std::endl;
    myLibrary.listAllBooks();

    return 0;
}
