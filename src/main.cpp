#include "include/list.h"
#include "include/database.h"


int main(int arg_count , char *args[])
{
    Database data;
    List L1;
    if(arg_count > 1)
    {

        L1.name = string(args[1]);
        L1.mainlist = data.read();
        L1.find_userlist();
        L1.print_menu();
        data.write(L1.mainlist);
        
     



    }

    else
    {
        cout<<"Username not supplied ... existing the program " <<endl;
    }

    return 0;
	
}


