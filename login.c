#include <stdio.h>
#include <string.h>
int main()
{
    char user_name[] = "nitesh08";
    char user_password[] = "nitesh123";
    char choice_user_name[50];
    char choice_password[50];
    printf("Enter the user name:");
    scanf("%s", choice_user_name);
    printf("Enter the password:");
    scanf("%s", choice_password);
    if (strcmp(choice_user_name, user_name) == 0 && strcmp(choice_password, user_password) == 0)
    {
        printf("login successfull....");
    }
    else
    {
        printf("invaild user or incorrect password");
    }
    return 0;
}