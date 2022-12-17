#include"include/database.h"

void Database::write(vector <vector<string>> mainlist)
{
    ofstream db;
    db.open("db/lists.sl");

    if( db.is_open())
    {
        for ( int user_index = 0 ; user_index < (int)mainlist[user_index].size(); user_index++)
        {
            for (int list_index = 0; list_index < (int)mainlist[user_index][list_index].size();list_index++)
            {
                db<< mainlist[user_index][list_index] <<endl;
            }
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