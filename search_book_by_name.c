#include "search_book_by_name.h"
void search_book_by_name(book *book_list, int book_count, const char *book_name)
{
    for (int i = 0; i < book_count; i++)
    {
        if (strstr(book_list[i].book_name, book_name))
        {
            printf("Found Book: %s by %s\n", book_list[i].book_name, book_list[i].book_author);
        }
    }
}
