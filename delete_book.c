#include"delete_book.h"
#include "libray.h"
void delete_book(book **book_list, int *book_count)
{
    int id_to_delete;
    printf("Enter book ID to delete: ");
    scanf("%d", &id_to_delete);

    int i, found = 0;
    for (i = 0; i < *book_count; i++)
    {
        if ((*book_list)[i].id == id_to_delete)
        {
            found = 1;
            for (int j = i; j < *book_count - 1; j++)
            {
                (*book_list)[j] = (*book_list)[j + 1];
            }
            (*book_count)--;
            *book_list = realloc(*book_list, (*book_count) * sizeof(book));
            if (*book_count > 0 && *book_list == NULL) {
                printf("Memory allocation failed after deletion.\n");
            }
            break;
        }
    }

    if (found)
    {
        printf("Book deleted successfully.\n");
    } else {
        printf("Book ID not found.\n");
    }
}
