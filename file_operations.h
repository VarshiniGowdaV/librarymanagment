#ifndef FILE_OPERATIONS_H
#define FILE_OPERATIONS_H
#include"libray.h"

void save_books_to_file(const char *filename, book *book_list, int book_count);
void load_books_from_file(const char *filename, book **book_list, int *book_count);

#endif // FILE_OPERATIONS_H
