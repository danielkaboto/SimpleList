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
    vector<vector<string>> mainlist;
    string name;
    int curr_index;

    void print_menu();
    void add_item();
    void print_item();
    void delete_item();
    bool find_userlist();
    void save_list();

};
