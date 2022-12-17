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

 vector<vector<string>> Database::read()
{
    string line;
    ifstream db;

    vector<string> userList;

    db.open("db/lists.sl");
    if(db.is_open())
    {
        while(getline(db,line,'\n'))
        {
           if(line.front() == '#')
           {
            cout<< "Found the hastag : " << line <<endl;
            line.erase(line.begin());
            userList.push_back(line);

           }
           else if(line.front()=='%')
           {
            cout <<"Found a Percentage : " << line <<endl;
            mainlist.push_back(userList);
            userList.clear();
           }

           else
           {
            cout<< "Found a Item : " << line << endl;
            userList.push_back(line);
           }
        }

    }
    else
    {
        cout << "Cannot open file for reading"<< endl;

    }

    db.close();

    return mainlist;
}