#include <iostream>
using namespace std;

int main()
{
    int roll[50];
    string name[50];
    int marks[50];

    int total = 0;
    int choice;
    int searchRoll;
    int found = 0;

    do
    {
        cout << "\n===== STUDENT MANAGEMENT SYSTEM =====\n";

        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "\nEnter Roll Number: ";
            cin >> roll[total];

            cout << "Enter Name: ";
            cin >> name[total];

            cout << "Enter Marks: ";
            cin >> marks[total];

            total++;

            cout << "\nStudent Added Successfully!\n";
        }

        else if (choice == 2)
        {
            if (total == 0)
            {
                cout << "\nNo Student Record Found!\n";
            }

            for (int i = 0; i < total; i++)
            {
                cout << "\nRoll Number: " << roll[i];
                cout << "\nName: " << name[i];
                cout << "\nMarks: " << marks[i] << endl;
            }
        }

        else if (choice == 3)
        {
            cout << "\nEnter Roll Number to Search: ";
            cin >> searchRoll;

            found = 0;

            for (int i = 0; i < total; i++)
            {
                if (roll[i] == searchRoll)
                {
                    cout << "\nStudent Found!\n";
                    cout << "Name: " << name[i] << endl;
                    cout << "Marks: " << marks[i] << endl;

                    found = 1;
                }
            }

            if (found == 0)
            {
                cout << "\nStudent Not Found!\n";
            }
        }

        else if (choice == 4)
        {
            cout << "\nThank You!\n";
        }

        else
        {
            cout << "\nInvalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}