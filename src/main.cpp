#include "include/list.h"

int main(int arg_count , char *args[])
{
    if(arg_count > 1)
    {
        List L1;
        L1.name = string(args[1]);
        L1.print_menu();


    }

    else
    {
        cout<<"Username not supplied ... existing the program " <<endl;
    }

    return 0;
	
}


