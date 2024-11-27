#include "update_book.h"
void update_book(book **book_list, int *book_count)
{
    int book_id;
    printf("Enter the ID of the book you want to update: ");
    scanf("%d", &book_id);

    for (int i = 0; i < *book_count; i++)
    {
        if ((*book_list)[i].id == book_id)
        {
            printf("Book found:\n");
            printf("Current Name: %s\n", (*book_list)[i].book_name);
            printf("Current Author: %s\n", (*book_list)[i].book_author);
            printf("Current Total Copies: %d\n", (*book_list)[i].total_copies);
            printf("Current Available Copies: %d\n", (*book_list)[i].available_copies);

            printf("\nEnter new book name (leave blank to keep current): ");
            char temp[50];
            getchar();
            fgets(temp, 50, stdin);
            if (temp[0] != '\n')
            {
                temp[strcspn(temp, "\n")] = '\0';
                strcpy((*book_list)[i].book_name, temp);
            }

            printf("Enter new author name (leave blank to keep current): ");
            fgets(temp, 50, stdin);
            if (temp[0] != '\n')
            {
                temp[strcspn(temp, "\n")] = '\0';
                strcpy((*book_list)[i].book_author, temp);
            }

            printf("Enter new total copies (or 0 to keep current): ");
            int new_total;
            scanf("%d", &new_total);
            if (new_total > 0)
            {
                int delta = new_total - (*book_list)[i].total_copies;
                (*book_list)[i].total_copies = new_total;
                (*book_list)[i].available_copies += delta;
            }

            printf("Book updated successfully.\n");
            return;
        }
    }

    printf("Book with ID %d not found.\n", book_id);
}
