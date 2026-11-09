#include <iostream>
using namespace std;
int main()
{
    int id[50], quantity[50];
    string name[50], author[50];
    int total = 0;
    int choice, searchId, found;

    do
    {
        cout << "\n LIBRARY MANAGEMENT SYSTEM ";
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Search Book";
        cout << "\n4. Issue Book";
        cout << "\n5. Return Book";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            if (total < 50)
            {
                cout << "\nEnter Book ID: ";
                cin >> id[total];

                cout << "Enter Book Name: ";
                cin >> name[total];

                cout << "Enter Author Name: ";
                cin >> author[total];

                cout << "Enter Book Quantity: ";
                cin >> quantity[total];

                total++;
                cout << "\nBook added successfully!";
            }
            else
            {
                cout << "\nLibrary is full!";
            }
        }

        else if (choice == 2)
        {
            if (total == 0)
            {
                cout << "\nNo books available!";
            }
            else
            {
                cout << "\n BOOK RECORD ";

                for (int i = 0; i < total; i++)
                {
                    cout << "\n\nBook ID: " << id[i];
                    cout << "\nBook Name: " << name[i];
                    cout << "\nAuthor Name: " << author[i];
                    cout << "\nQuantity: " << quantity[i];
                }
            }
        }

        else if (choice == 3)
        {
            cout << "\nEnter Book ID to search: ";
            cin >> searchId;
            found = 0;

            for (int i = 0; i < total; i++)
            {
                if (id[i] == searchId)
                {
                    cout << "\nBook Found!";
                    cout << "\nBook Name: " << name[i];
                    cout << "\nAuthor: " << author[i];
                    cout << "\nQuantity: " << quantity[i];
                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                cout << "\nBook not found!";
            }
        }

        else if (choice == 4)
        {
            cout << "\nEnter Book ID to issue: ";
            cin >> searchId;
            found = 0;

            for (int i = 0; i < total; i++)
            {
                if (id[i] == searchId)
                {
                    found = 1;

                    if (quantity[i] > 0)
                    {
                        quantity[i]--;
                        cout << "\nBook issued successfully!";
                    }
                    else
                    {
                        cout << "\nBook is not available!";
                    }
                    break;
                }
            }

            if (found == 0)
            {
                cout << "\nBook not found!";
            }
        }

        else if (choice == 5)
        {
            cout << "\nEnter Book ID to return: ";
            cin >> searchId;
            found = 0;

            for (int i = 0; i < total; i++)
            {
                if (id[i] == searchId)
                {
                    quantity[i]++;
                    found = 1;
                    cout << "\nBook returned successfully!";
                    break;
                }
            }

            if (found == 0)
            {
                cout << "\nBook not found!";
            }
        }

        else if (choice == 6)
        {
            cout << "\nThank you for using Library Management System!";
        }

        else
        {
            cout << "\nInvalid choice! Please try again.";
        }

    } while (choice != 6);

    return 0;
}