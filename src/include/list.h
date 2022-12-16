#include<iostream>
#include<vector>
using namespace std;

class List 
{
    private :


    public:
    List()
    {
        // constructor

    }

    ~List()
    {
        //destructor
    }

    vector <string> list;
    string name;

    void print_menu();
    void add_item();
    void print_item();
    void delete_item();

};
