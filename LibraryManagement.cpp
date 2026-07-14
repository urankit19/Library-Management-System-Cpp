#include<bits/stdc++.h>
using namespace std;

class Library
{
public:
    int id;
    char name[100];
    char author[100];
    char student[100];
    int price;
    int pages;
};

int main()
{
    system("color 0E");   // Blue theme (Windows)

    Library lib[100];
    int count = 0;
    int choice;

    while (true)
    {
        cout << "\n=============================================\n";
        cout << "        LIBRARY MANAGEMENT SYSTEM\n";
        cout << "=============================================\n";
        cout << "1. Add New Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Search Book by ID\n";
        cout << "4. Update Book Details\n";
        cout << "5. Delete Book\n";
        cout << "6. Count Total Books\n";
        cout << "7. Exit\n";
        cout << "=============================================\n";
        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "\n----------- Add New Book -----------\n";

            cout << "Enter Book ID : ";
            cin >> lib[count].id;
            cin.ignore();

            cout << "Enter Book Name : ";
            cin.getline(lib[count].name, 100);

            cout << "Enter Author Name : ";
            cin.getline(lib[count].author, 100);

            cout << "Enter Student Name : ";
            cin.getline(lib[count].student, 100);

            cout << "Enter Book Price : ";
            cin >> lib[count].price;

            cout << "Enter Number of Pages : ";
            cin >> lib[count].pages;

            count++;

            cout << "\nBook Added Successfully!\n";
            break;
        }

        case 2:
        {
            if (count == 0)
            {
                cout << "\nNo Books Available.\n";
                break;
            }

            cout << "\n========== BOOK LIST ==========\n";

            for (int i = 0; i < count; i++)
            {
                cout << "\n---------------------------------\n";
                cout << "Book ID      : " << lib[i].id << endl;
                cout << "Book Name    : " << lib[i].name << endl;
                cout << "Author       : " << lib[i].author << endl;
                cout << "Student      : " << lib[i].student << endl;
                cout << "Price        : Rs. " << lib[i].price << endl;
                cout << "Pages        : " << lib[i].pages << endl;
            }
            break;
        }

        case 3:
        {
            int searchId;
            bool found = false;

            cout << "\nEnter Book ID to Search : ";
            cin >> searchId;

            for (int i = 0; i < count; i++)
            {
                if (lib[i].id == searchId)
                {
                    found = true;

                    cout << "\nBook Found!\n";
                    cout << "Book ID      : " << lib[i].id << endl;
                    cout << "Book Name    : " << lib[i].name << endl;
                    cout << "Author       : " << lib[i].author << endl;
                    cout << "Student      : " << lib[i].student << endl;
                    cout << "Price        : Rs. " << lib[i].price << endl;
                    cout << "Pages        : " << lib[i].pages << endl;
                    break;
                }
            }

            if (!found)
                cout << "\nBook Not Found!\n";

            break;
        }

        case 4:
        {
            int updateId;
            bool found = false;

            cout << "\nEnter Book ID to Update : ";
            cin >> updateId;
            cin.ignore();

            for (int i = 0; i < count; i++)
            {
                if (lib[i].id == updateId)
                {
                    found = true;

                    cout << "Enter New Book Name : ";
                    cin.getline(lib[i].name, 100);

                    cout << "Enter New Author Name : ";
                    cin.getline(lib[i].author, 100);

                    cout << "Enter New Student Name : ";
                    cin.getline(lib[i].student, 100);

                    cout << "Enter New Price : ";
                    cin >> lib[i].price;

                    cout << "Enter New Pages : ";
                    cin >> lib[i].pages;

                    cout << "\nBook Updated Successfully!\n";
                    break;
                }
            }

            if (!found)
                cout << "\nBook Not Found!\n";

            break;
        }

        case 5:
        {
            int deleteId;
            bool found = false;

            cout << "\nEnter Book ID to Delete : ";
            cin >> deleteId;

            for (int i = 0; i < count; i++)
            {
                if (lib[i].id == deleteId)
                {
                    found = true;

                    for (int j = i; j < count - 1; j++)
                    {
                        lib[j] = lib[j + 1];
                    }

                    count--;

                    cout << "\nBook Deleted Successfully!\n";
                    break;
                }
            }

            if (!found)
                cout << "\nBook Not Found!\n";

            break;
        }

        case 6:
        {
            cout << "\nTotal Books Available : " << count << endl;
            break;
        }

        case 7:
        {
            cout << "\n========================================\n";
            cout << " Thank You for Using Library System\n";
            cout << "========================================\n";
            return 0;
        }

        default:
        {
            cout << "\nInvalid Choice! Please Try Again.\n";
        }
        }
    }

    return 0;
}