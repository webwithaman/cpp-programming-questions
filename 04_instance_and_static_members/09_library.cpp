// // Create a class Library with a static member variable totalBooks and a static member function getTotalBooks. Track the number of available books in the library.

// // Header files
#include <iostream>
#include <conio.h>
#include <string.h>

// // use namespace
using namespace std;

// #define MAX_CHARS_NAME 31

// // define class Library
class Library
{

private:
    // static member variables
    static const unsigned int MAX_CHARS_IN_TITLE = 31;
    static unsigned int totalBooks;

    // // instance member variables
    unsigned int bookId;
    char bookTitle[MAX_CHARS_IN_TITLE];

public:
    // // static function to get Total Books
    static unsigned int getTotalBooks()
    {
        return totalBooks;
    }

    // // instance member function to set Book Id
    void setBookId(int id)
    {
        if (id < 0) // if id is negative make it positive
            id = -id;

        bookId = id;
        totalBooks++;
    }

    // // instance member function to get Book Id
    unsigned int getBookId()
    {
        return bookId;
    }

    // // instance member function to set Book Title
    void setBookTitle(char *title)
    {
        strcpy(bookTitle, title);
    }

    // // instance member function to get Book Title
    char *getBookTitle(char *title)
    {
        strcpy(title, bookTitle);
        return title;
    }
};

// // define and initialize static member variables
unsigned int Library::totalBooks = 0;

// // Main Function Start
int main()
{
    Library b1;

    cout << endl; // Add new line
    getch();
    return 0;
}
// // Main Function End
