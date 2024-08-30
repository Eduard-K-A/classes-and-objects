#include <iostream>
#include <iomanip>

using namespace std;

int bookCounter = 0;

class Library
{
private:
    string author[100];
    string title[100];
    string publishDate[100];
    string titleMatch = "";

public:
    void addBook()
    { // asks the user to input book details

        cout << "Enter Title name: ";
        getline(cin, title[bookCounter]);

        cout << "Enter Author name: ";
        getline(cin, author[bookCounter]);
       
        cout << "Enter Publication Year: ";
        getline(cin, publishDate[bookCounter]);
        
        cout << "Book Added Successfully!" << endl;
        bookCounter++;

    }

    int displayBook()
    { // displays book details
    if (bookCounter == 0)
        {
            cout << "No Books In The Library To Display, Try Adding Some in the Menu." << endl;
            return 0;
        }

        cout << setw(20) << "Title" << setw(20) << "Author" << setw(20) << "Year" << endl;
        for (int i = 0; i <= bookCounter; i++)
        {
         cout << setw(20) << title[i] << setw(20) << author[i] << setw(20) << publishDate[i] << endl;

        }
        return 0;
    }

    int searchBook()
    { // search book through title
        if (bookCounter == 0)
        {
            cout << "No Books In The Library To Search For, Try Adding Some in the Menu." << endl;
            return 0;
        }
        cout << "Enter title to search: ";
        // cin.ignore();
        getline(cin, titleMatch);
        for (int j = 0; j <= bookCounter; j++)
        {
            if (titleMatch == title[j])
            {
                cout << setw(20) << "Title" << setw(20) << "Author" << setw(20) << "Year" << endl;
                cout << setw(20) << title[j] << setw(20) << author[j] << setw(20) << publishDate[j] << endl;
                cout << "Book Found Successfully!" << endl;
                return 0;
            }
            else if(titleMatch != title[j])
            {
                cout << "Checking..." << endl;
            };
        }
        return 0;
    } 
};

int main()
{
    int choice;
    char addMoreBook;
    bool exit = true;
    Library s;

    do
    {   cout << endl;
        cout << "Menu" << endl; // menu
        cout << "1. Add Book" << endl;
        cout << "2. Display Book" << endl;
        cout << "3. Search Book" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter a number: ";
        cin >> choice;

        cin.ignore();

        switch (choice)
        {
        case 1:
            do
            {
                s.addBook();
                cout << "Would you like to add more? (Y/N): ";
                cin >> addMoreBook;
                cin.ignore();
            } while (addMoreBook == 'y' || addMoreBook == 'Y');

            break;
        case 2:s
            s.displayBook();
            break;
        case 3:
            s.searchBook();
            break;
        case 4:
            exit = false;
        }
    } while (exit == true);
    cout << "Thank you!" << endl;

    return 0;
}
