#include "return_book.h"
void return_book(user **user_list, int user_count, book **book_list, int *book_count)
{
    char user_name[50], book_name[50];
    printf("Enter user name: ");
    scanf("%s", user_name);
    printf("Enter book name: ");
    scanf(" %49[^\n]", book_name);

    for (int i = 0; i < *book_count; i++)
    {
        if (strcmp((*book_list)[i].book_name, book_name) == 0)
        {
            (*book_list)[i].available_copies++;
            printf("Book returned successfully.\n");
            return;
        }
    }

    printf("Book not found.\n");
}
