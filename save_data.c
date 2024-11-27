#include "save_data.h"
void save_data(book *book_list, int book_count, user *user_list, int user_count, department *dept_list, int dept_count)
{
    FILE *book_file = fopen("books.dat", "wb");
    if (book_file)
    {
        fwrite(&book_count, sizeof(int), 1, book_file);
        fwrite(book_list, sizeof(book), book_count, book_file);
        fclose(book_file);
    }

}
