/*Create a Book class for managing books in a library. The class should have data members to store
the book's title, author, and ISBN, and member functions to set each of these attributes (setTitle(),
setAuthor(), setISBN()) and display the book's details (displayDetails()).*/
#include <iostream>
#include <string>
using namespace std;
class books{
    private:
    string author;
    string title;
    int ISBN;
    public:
    void set_title(){
        cout <<"Enter title: ";
        getline(cin,title);
    }
    
    void set_author(){
        cout <<"Enter name of author: ";
        getline(cin,author);
    }
    void set_ISBN(){
        cout <<"Enter ISBN: ";
        cin >>ISBN;
    }
    
    string get_author(){
        return author;
    }
    string get_title(){
        return title;
    }
    int get_ISBN(){
        return ISBN;
    }
    void display_details(){
        cout <<"Author: " <<get_author() <<endl;
        cout <<"Title:" <<get_title() <<endl;
        cout <<"ISBN: " <<get_ISBN() <<endl;

    }
    
    
};
int main(){
    books b1;
    b1.set_title();
    b1.set_author();
    b1.set_ISBN();
    b1.display_details();
}