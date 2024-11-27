#include "add_department.h"
#include "libray.h"
void add_department(department **dept_list, int *dept_count)
{
    *dept_list = realloc(*dept_list, (*dept_count + 1) * sizeof(department));
    if (*dept_list == NULL)
    {
        printf("Memory allocation failed.\n");
        return;
    }
    printf("Enter department name: ");
    scanf(" %49[^\n]", (*dept_list)[*dept_count].dept_name);
    (*dept_count)++;
}
