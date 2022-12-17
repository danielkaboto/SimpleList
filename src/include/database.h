#include<iostream>
#include<vector>
#include<fstream>
using namespace std;

class Database
{
    private :


    public:
    Database()
    {
        // constructor

    }

    ~Database()
    {
        //destructor
    }

    vector <vector<string>> mainlist;
    string name;
    void write(vector <string> mainlist);

    vector<vector<string>> read();

};