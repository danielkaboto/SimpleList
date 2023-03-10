#include "include/list.h"

void List::print_menu()
{
    int choice;
    cout << "**************************************\n";
    cout << " 1 - Print list "<<endl;
    cout << " 2 - Add to list \n";
    cout << " 3 - Delete From list \n";
    cout << " 4. Sava list " << endl;
    cout << " 5 - Exit \n";
    cout << " Enter your choice and press return : ";

    cin >> choice;

    if(choice == 5)
    {
        return;
    }
    else if (choice == 4)
    {
        save_list();
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

bool List::find_userlist()
{
    bool userfind = false;

    cout <<"\n\n\n\n\n";
    cout <<"********welcome " << name << " **** " <<endl;

    for (int user_index=0; user_index< (int)mainlist.size();user_index++)
    {
        cout << mainlist[user_index][0] << endl;

        if( mainlist[user_index][0] == name)
        {
            cout <<"user has been found : " << mainlist[user_index][0] << endl;
            list = mainlist[user_index];
            curr_index = user_index;
            userfind = true;
            break;

        }

    }
    if( userfind == false)
    {
        list.push_back(name);
        mainlist.push_back(list);
        curr_index = (int)mainlist.size()-1;
    }

    return userfind;
}

void List :: save_list()
{
    cout <<"Saving the list ...." << endl;
    mainlist[curr_index] = list;
    print_menu();
}
