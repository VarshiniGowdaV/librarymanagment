#include "load_data.h"
void load_data(book **book_list, int *book_count, user **user_list, int *user_count, department **dept_list, int *dept_count)
{
    FILE *book_file = fopen("books.dat", "rb");
    if (book_file)
    {
        fread(book_count, sizeof(int), 1, book_file);
        *book_list = malloc(*book_count * sizeof(book));
        fread(*book_list, sizeof(book), *book_count, book_file);
        fclose(book_file);
    }
}
