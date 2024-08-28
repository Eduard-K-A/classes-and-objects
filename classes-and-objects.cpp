#include <iostream>
#include <iomanip>

using namespace std;

int bookCounter = 0;
class Library
{
private:
    string author;
    string title;
    int publishDate;

public:
    void addBook(){ //asks the user to input author name

        cout << "Enter Title name: ";
        cin.ignore();   
        getline(cin, title);

        cout << "Enter author name: ";
        cin.ignore();   
        getline(cin, author);

        cout << "Enter Publication Year: ";
        cin >> publishDate;

        cout << "Book Added Succesfully!" << endl;
        bookCounter++;
       // cout << bookCounter << endl;
    }

    void displayBook(){ //displays book details
    cout << "Title" << setw(20) << "Author" << setw(20) << "Year" << endl;
    cout << title << setw(20) << author << setw(20) << publishDate << endl;
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
    char addMoreBook;
    bool exit = true;
    Library s;


    cout << "Menu" << endl; //menu
    cout << "1. Add Book" << endl;
    cout << "2. Display Book" << endl;
    cout << "3. Search Book" << endl;
    cout << "4. Exit" << endl;

    cout << "Enter a number: ";
    cin >> choice;

    cin.ignore();
    do{
    switch (choice)
    {
    case 1:
    do{
        s.addBook();
        cout << "Would you like to add more? (Y/N): ";
        cin >> addMoreBook;
    }while(addMoreBook == 'y' || addMoreBook == 'Y');

        break;
    case 2:
        s.displayBook();
        break;
    case 3:
        // search book
        break;
    case 4:
        exit = false;
    }
    } while(exit == true);
    cout << "done" << endl;
   
    return 0;
}
