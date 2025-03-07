#include <iostream>
using namespace std;

class Book {
public:
  string subject;
  string book_name;
  string author;

  Book() {
    cout << "Enter subject: ";
    getline(cin, subject);
    cout << "Enter Book name: ";
    getline(cin, book_name);
    cout << "Enter author name: ";
    getline(cin, author);
  }

  ~Book() { cout << "Book Destructor Called for " << book_name << endl; }

  void display() const {
    cout << "Subject: " << subject << " | Book Name: " << book_name
         << " | Author: " << author << endl;
  }
};

class Library {
private:
  int shelf_number[5];
  Book *books[5];
  int bookcount;

public:
  Library() {
    bookcount = 0;
    for (int i = 0; i < 5; i++) {
      books[i] = nullptr;
    }
  }

  ~Library() { cout << "Library Destructor Called\n"; }

  void addbook(Book *kitab, int shelf) {
    if (bookcount < 5) {
      books[bookcount] = kitab;
      shelf_number[bookcount] = shelf;
      bookcount++;
    } else {
      cout << "Library is full, cannot add more books.\n";
    }
  }

  void displaybooks() const {
    for (int i = 0; i < bookcount; i++) {
      cout << "Shelf Number: " << shelf_number[i] << endl;
      books[i]->display();
    }
  }
};

int main() {
  Book *book1 = new Book();
  Book *book2 = new Book();
  Book *book3 = new Book();

  Library lib;

  lib.addbook(book1, 1);
  lib.addbook(book2, 2);
  lib.addbook(book3, 3);

  cout << "\nBooks in the Library:\n";
  lib.displaybooks();

  delete book1;
  delete book2;
  delete book3;

  return 0;
}
