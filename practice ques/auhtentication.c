// program to verify username and password from the stored data

#include <stdio.h>
#include <string.h>

struct user
{
  char username[50];
  char password[6];
};

void main()
{
  struct user userList[3];
  struct user userVar;
  int flag = 0;

  for (int i = 0; i < 3; i++)
  {
    printf("\nenter details of user %d\n", i);
    printf("username :");
    scanf("%s", &userList[i].username);
    printf("password :");
    scanf("%s", &userList[i].password);
  }

  printf("\nenter your username :");
  scanf("%s", &userVar.username);
  printf("enter your password :");
  scanf("%s", &userVar.password);

  for (int i = 0; i < 3; i++)
  {
    if (strcmp(userList[i].username, userVar.username) == 0 && strcmp(userList[i].password, userVar.password) == 0)
    {
      flag++;
      break;
    }
  }

  printf(flag ? "verified user" : "invalid user");
}