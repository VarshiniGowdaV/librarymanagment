#include "libray.h"
void admin_login(admin *admin_data)
{
    printf("Enter Admin Username: ");
    scanf("%s", admin_data->username);
    printf("Enter Admin Password: ");
    scanf("%s", admin_data->password);
}
