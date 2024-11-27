#include <stdio.h>
#include <stdlib.h>
#include "file_operations.h"

void save_books_to_file(const char *filename, book *book_list, int book_count)
{
    FILE *file = fopen(filename, "wb");
    if (!file)
    {
        perror("Error opening file for writing");
        return;
    }
    fwrite(&book_count, sizeof(int), 1, file);
    fwrite(book_list, sizeof(book), book_count, file);

    fclose(file);
    printf("Books saved successfully to %s.\n", filename);
}
void load_books_from_file(const char *filename, book **book_list, int *book_count)
{
    FILE *file = fopen(filename, "rb");
    if (!file)
    {
        perror("Error opening file for reading");
        return;
    }

    fread(book_count, sizeof(int), 1, file);
    *book_list = (book *)malloc((*book_count) * sizeof(book));
    if (!*book_list)
    {
        perror("Error allocating memory");
        fclose(file);
        return;
    }

    // Read the book data
    fread(*book_list, sizeof(book), *book_count, file);

    fclose(file);
    printf("Books loaded successfully from %s.\n", filename);
}
