#include "libray.h"
#include "file_operations.h"

int main_menu()
{
    book *book_list = NULL;
    user *user_list = NULL;
    department *dept_list = NULL;
    int book_count = 0, user_count = 0, dept_count = 0;
    char filename[] = "Libray_data.dat";

    load_data(&book_list, &book_count, &user_list, &user_count, &dept_list, &dept_count);

    admin admin_data;
    admin_login(&admin_data);

    int choice;
    while (1)
    {
        printf("\n--- Library Management ---\n");
        printf("1. Add Book\n");
        printf("2. Delete Book\n");
        printf("3. Borrow Book\n");
        printf("4. Return Book\n");
        printf("5. Display Books\n");
        printf("6. Search Book by Name\n");
        printf("7. Sort Books by Author\n");
        printf("8. Sort Books by Name\n");
        printf("9. Add Department\n");
        printf("10. Save Books to File\n");
        printf("11. Load Books from File\n");
        printf("12. Update Book\n");
        printf("13. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add_book(&book_list, &book_count);
            break;
        case 2:
            delete_book(&book_list, &book_count);
            break;
        case 3:
            borrow_book(&user_list, user_count, &book_list, &book_count);
            break;
        case 4:
            return_book(&user_list, user_count, &book_list, &book_count);
            break;
        case 5:
            display_books(book_list, book_count);
            break;
        case 6:
        {
            char book_name[50];
            printf("Enter the book name to search: ");
            getchar();
            fgets(book_name, 50, stdin);
            book_name[strcspn(book_name, "\n")] = '\0';
            search_book_by_name(book_list, book_count, book_name);
            break;
        }
        case 7:
            sort_books_by_author(book_list, book_count);
            break;
        case 8:
            sort_books_by_name(book_list, book_count);
            break;
        case 9:
            add_department(&dept_list, &dept_count);
            break;
        case 10:
            save_data(book_list, book_count, user_list, user_count, dept_list, dept_count);
            free(book_list);
            free(user_list);
            free(dept_list);
            printf("Exiting program.\n");
            return 0;
        case 11:
            load_books_from_file(filename, &book_list, &book_count);
            break;
        case 12:
            update_book(&book_list, &book_count);
            break;
        default:
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
