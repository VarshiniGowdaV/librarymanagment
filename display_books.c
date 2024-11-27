#include "display_books.h"
void display_books(book *book_list, int book_count)
{
    for (int i = 0; i < book_count; i++)
    {
        printf("ID: %d\n", book_list[i].id);
        printf("Book Name: %s\n", book_list[i].book_name);
        printf("Author: %s\n", book_list[i].book_author);
        printf("Available Copies: %d\n\n", book_list[i].available_copies);
    }
}
