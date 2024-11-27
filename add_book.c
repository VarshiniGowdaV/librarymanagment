#include "add_book.h"
#include "libray.h"
void add_book(book **book_list, int *book_count)
{
    *book_list = realloc(*book_list, (*book_count + 1) * sizeof(book));
    if (*book_list == NULL)
    {
        printf("Memory allocation failed.\n");
        return;
    }

    printf("Enter book name: ");
    scanf(" %49[^\n]", (*book_list)[*book_count].book_name);
    printf("Enter author name: ");
    scanf(" %49[^\n]", (*book_list)[*book_count].book_author);
    printf("Enter book ID: ");
    scanf("%d", &(*book_list)[*book_count].id);
    printf("Enter total copies: ");
    scanf("%d", &(*book_list)[*book_count].total_copies);
    (*book_list)[*book_count].available_copies = (*book_list)[*book_count].total_copies;

    (*book_count)++;
}
