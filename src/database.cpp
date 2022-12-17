#include"include/database.h"

void Database::write(vector <string> list)
{
    ofstream db;
    db.open("db/lists.sl");

    if( db.is_open())
    {
        for ( int i = 0 ; i < (int)list.size(); i++)
        {
            //take all element in our list and put in the the database
            db << " * " << list[i] << endl;
        }

    }
    else
    {
        cout <<"Cannot open the file for writing !";
    }

    db.close();

}

void Database::read()
{
    string line;
    ifstream db;
    db.open("db/lists.sl");
    if(db.is_open())
    {
        while(getline(db,line,'\n'))
        {
            cout <<line<<endl;
        }

    }
    else
    {
        cout << "Cannot open file for reading"<< endl;

    }

    db.close();
}