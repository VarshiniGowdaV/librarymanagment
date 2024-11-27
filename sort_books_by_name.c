#include "sort_books_by_name.h"
void sort_books_by_name(book *book_list, int book_count)
{
    for (int i = 0; i < book_count - 1; i++)
    {
        for (int j = i + 1; j < book_count; j++)
        {
            if (strcmp(book_list[i].book_name, book_list[j].book_name) > 0)
            {
                book temp = book_list[i];
                book_list[i] = book_list[j];
                book_list[j] = temp;
            }
        }
    }
}
