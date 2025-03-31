#include <iostream>
#include <vector>

using namespace std;

class Media {
protected:
    string title, publicationDate, uniqueID, publisher;

public:
    Media(string t, string pDate, string uID, string pub)
        : title(t), publicationDate(pDate), uniqueID(uID), publisher(pub) {}

    virtual void displayInfo() {
        cout << "Title: " << title << endl;
        cout << "Publication Date: " << publicationDate << endl;
        cout << "Unique ID: " << uniqueID << endl;
        cout << "Publisher: " << publisher << endl;
    }

    virtual void checkOut() {
        cout << title << " has been checked out." << endl;
    }

    virtual void returnItem() {
        cout << title << " has been returned." << endl;
    }

    string getTitle() { return title; }
    string getPublicationDate() { return publicationDate; }
};

class Book : public Media {
    string author, ISBN;
    int numberOfPages;

public:
    Book(string t, string pDate, string uID, string pub, string auth, string isbn, int pages)
        : Media(t, pDate, uID, pub), author(auth), ISBN(isbn), numberOfPages(pages) {}

    void displayInfo() override {
        Media::displayInfo();
        cout << "Author: " << author << endl;
        cout << "ISBN: " << ISBN << endl;
        cout << "Pages: " << numberOfPages << endl;
    }

    string getAuthor() { return author; }
};

class DVD : public Media {
    string director, rating;
    int duration;

public:
    DVD(string t, string pDate, string uID, string pub, string dir, int dur, string rate)
        : Media(t, pDate, uID, pub), director(dir), duration(dur), rating(rate) {}

    void displayInfo() override {
        Media::displayInfo();
        cout << "Director: " << director << endl;
        cout << "Duration: " << duration << " mins" << endl;
        cout << "Rating: " << rating << endl;
    }
};

class CD : public Media {
    string artist, genre;
    int numberOfTracks;

public:
    CD(string t, string pDate, string uID, string pub, string art, int tracks, string gen)
        : Media(t, pDate, uID, pub), artist(art), numberOfTracks(tracks), genre(gen) {}

    void displayInfo() override {
        Media::displayInfo();
        cout << "Artist: " << artist << endl;
        cout << "Tracks: " << numberOfTracks << endl;
        cout << "Genre: " << genre << endl;
    }
};

class Library {
    vector<Media*> mediaCollection;

public:
    void addMedia(Media* media) {
        mediaCollection.push_back(media);
    }

    void searchMedia(string title) {
        for (auto media : mediaCollection) {
            if (media->getTitle() == title) {
                media->displayInfo();
                return;
            }
        }
        cout << "Media not found!" << endl;
    }

    void searchMediaByAuthor(string author) {
        for (auto media : mediaCollection) {
            Book* book = dynamic_cast<Book*>(media);
            if (book && book->getAuthor() == author) {
                book->displayInfo();
                return;
            }
        }
        cout << "No books found by this author!" << endl;
    }

    void searchMediaByYear(string year) {
        for (auto media : mediaCollection) {
            if (media->getPublicationDate() == year) {
                media->displayInfo();
                return;
            }
        }
        cout << "No media found for this publication year!" << endl;
    }
};

int main() {
    Library lib;

    Book b("The Great Gatsby", "1925", "B001", "Scribner", "F. Scott Fitzgerald", "9780743273565", 180);
    DVD d("Inception", "2010", "D001", "Warner Bros", "Christopher Nolan", 148, "PG-13");
    CD c("Thriller", "1982", "C001", "Epic Records", "Michael Jackson", 9, "Pop");

    lib.addMedia(&b);
    lib.addMedia(&d);
    lib.addMedia(&c);

    cout << "\nSearching for 'Inception':" << endl;
    lib.searchMedia("Inception");

    cout << "\nSearching for books by 'F. Scott Fitzgerald':" << endl;
    lib.searchMediaByAuthor("F. Scott Fitzgerald");

    cout << "\nSearching for media published in 1982:" << endl;
    lib.searchMediaByYear("1982");

    return 0;
}
