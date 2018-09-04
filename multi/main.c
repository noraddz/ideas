#include <stdio.h>
#include <stdlib.h>
#include "components.h"
#include <unistd.h>

int main(int argc, char * argv[])
{
    int menu_option = 0;

    show_menu();
    get_input(menu_option);

    puts("Back in main...");
    //sleep(3);

    return 0;
}