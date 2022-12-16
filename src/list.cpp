#include "include/list.h"

void List::print_menu()
{
    int choice;
    cout << "**************************************\n";
    cout << " 1 - Print list "<<endl;
    cout << " 2 - Add to list \n";
    cout << " 3 - Delete From list \n";
    cout << " 4 - Exit \n";
    cout << " Enter your choice and press return : ";

    cin >> choice;

    if(choice == 4)
    {
        exit(0);
    }

    else if ( choice == 3)
    {
        delete_item();

    }
    else if ( choice == 2)
    {
        add_item();

    }
    else if (choice == 1)
    {
        print_item();

    }
    else 
    {
        cout <<"Sorry choice not implemented yet \n";
    }
}

void List::add_item()
{
    cout <<"\n\n\n\n\n\n\n\n";
    cout <<"**** Add Item ****\n";
    cout << " Type in an item and press enter: ";

    string user;
    cin >> user;

    list.push_back(user);

    cout <<"successfully added an item to the list \n\n\n\n\n";
    cin.clear();


    print_menu();
}

void List::delete_item()
{
    cout <<"*** Delete Item ***" << endl;
    cout <<"Select an item index number to delete\n";

    if(list.size())
    {
        for (int i=0; i< (int)list.size(); i++)
        {
            cout << i << " : " << list[i] << endl;
        }
        int choice;
        cin >> choice;
        list.erase(list.begin()+choice);
    }
    else
    {
        cout << "No items to delete." << endl;

    }

    print_menu();
}

void List::print_item()
{
    cout << endl << endl << endl << endl;
    cout << "*** Printing List **** "<< endl;

    for ( int i = 0 ; i < (int)list.size(); i++)
    {
        cout << " * " << list[i] << endl;
    }

    cout << " M -- Menu " <<endl;

    char choice;
    cin >> choice;

    if( choice == 'M' || choice == 'm')
    {
        print_menu();
    }

    else
    {
        cout<< "You enter a wrong input !!!";
    }
}