#include <stdio.h>
#include <stdlib.h>

void show_menu()
{
    puts("\t\tRectangle Calcz0rs\n");
    puts("1. Area");
    puts("2. Perimeter");
    puts("3. Exit");
}

void get_input(int choice)
{
    while (choice != 3)
    {
        printf("\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Your choice was %d. Area\n", choice);
        }
        else if (choice == 2)
        {
            printf("Your choice was %d. Perimeter\n", choice);
        }
        else if (choice == 3)
        {
            break;
        }
        else
        {
            puts("[x] Invalid input...");
        }

    }
}