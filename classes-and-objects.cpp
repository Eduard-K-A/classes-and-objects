#include <iostream>
#include <iomanip>

using namespace std;

class Library
{
private:
    string author;
    string title;
    int publishDate;

public:
    void addBook(){ //asks the user to input author name
        cout << "Enter author name: ";
        cin.ignore();
        getline(cin, author);
    }

    void displayBook(){ //displays book details
        cout << "Author: " << author << endl;
        cout << "Title: " << title << endl;
        cout << "Publish Date: " << publishDate << endl;
        }

    void searchBook(){ //search book through title
        cout << "Enter title to search: ";
        cin.ignore();
        getline(cin, title);
    }
};

int main()
{
    int choice;

    cout << "Menu" << endl; //menu
    cout << "1. Add Book" << endl;
    cout << "2. Display Book" << endl;
    cout << "3. Search Book" << endl;
    cout << "4. Exit" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        // add book
    case 2:
        // display book
    case 3:
        // search book
    case 4:
        // exit
    default:
        // exit
    }
    cout << "hello" << endl;

    return 0;
}
