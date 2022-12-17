#include "include/list.h"
#include "include/database.h"


int main(int arg_count , char *args[])
{
    Database data;
    List L1;
    if(arg_count > 1)
    {
       
        L1.name = string(args[1]);
        L1.print_menu();
        
        data.write(L1.list);
        data.read();



    }

    else
    {
        cout<<"Username not supplied ... existing the program " <<endl;
    }

    return 0;
	
}


