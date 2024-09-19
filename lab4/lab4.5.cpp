#include <iostream>
#include <string>
using namespace std;

// Class for Author
class Author {
private:
    string name;
    string degree;

public:
    // Constructor to initialize the attributes of the author
    Author(string aName, string aDegree) : name(aName), degree(aDegree) {}

    // Function to display author details
    void displayAuthorInfo() {
        cout << "Author Name: " << name << endl;
        cout << "Author Degree: " << degree << endl;
    }
};

// Class for Publication
class Publication {
private:
    string name;
    string location;

public:
    // Constructor to initialize the attributes of the publication
    Publication(string pName, string pLocation) : name(pName), location(pLocation) {}

    // Function to display publication details
    void displayPublicationInfo() {
        cout << "Publication Name: " << name << endl;
        cout << "Publication Location: " << location << endl;
    }
};

// Class for Book (which contains Author and Publication objects)
class Book {
private:
    Author author;          // Object of Author class
    Publication publication; // Object of Publication class
    string title;
    int pages;
    double price;

public:
    // Constructor to initialize the attributes of the book, along with author and publication
    Book(string bTitle, int bPages, double bPrice, string authorName, string authorDegree, string pubName, string pubLocation)
        : title(bTitle), pages(bPages), price(bPrice), author(authorName, authorDegree), publication(pubName, pubLocation) {}

    // Function to display all book details
    void displayBookInfo() {
        cout << "Book Title: " << title << endl;
        cout << "Number of Pages: " << pages << endl;
        cout << "Price: $" << price << endl;
        author.displayAuthorInfo();       // Displaying Author details
        publication.displayPublicationInfo(); // Displaying Publication details
    }
};

int main() {
    // Input for Book attributes
    string authorName, authorDegree, pubName, pubLocation, bookTitle;
    int pages;
    double price;

    cout << "Enter Author's Name: ";
    getline(cin, authorName);

    cout << "Enter Author's Degree: ";
    getline(cin, authorDegree);

    cout << "Enter Publication Name: ";
    getline(cin, pubName);

    cout << "Enter Publication Location: ";
    getline(cin, pubLocation);

    cout << "Enter Book Title: ";
    getline(cin, bookTitle);

    cout << "Enter Number of Pages: ";
    cin >> pages;

    cout << "Enter Book Price: ";
    cin >> price;

    // Creating Book object
    Book book(bookTitle, pages, price, authorName, authorDegree, pubName, pubLocation);

    // Displaying all information
    cout << "\nBook Information: \n";
    book.displayBookInfo();

    return 0;
}

