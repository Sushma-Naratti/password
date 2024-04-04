#include <stdio.h>
#include <string.h>
int is_digit = 0, is_alpha = 0, is_special = 0;
int isStrong(char password[50])
{
      for (int i = 0; i < strlen(password); i++)
      {
            if (isdigit(password[i]))
            {
                  is_digit = 1;
            }
            else if (isalpha(password[i]))
            {
                  is_alpha = 1;
            }
            else
            {
                  is_special = 1;
            }
      }
      if (is_digit && is_alpha && is_special)
      {
            return 1;
      }
      else
      {
            return 0;
      }
}

int isModerate(char password[50])
{
      for (int i = 0; i < strlen(password); i++)
      {
            if (isdigit(password[i]))
            {
                  is_digit = 1;
            }
            else if (isalpha(password[i]))
            {
                  is_alpha = 1;
            }
      }
      if (is_digit && is_alpha)
      {
            return 1;
      }
      else
      {
            return 0;
      }
}

int isWeak(char password[50])
{
      for (int i = 0; i < strlen(password); i++)
      {
            if (isalpha(password[i]))
            {
                  is_alpha = 1;
            }
      }
      if (is_alpha)
      {
            return 1;
      }
      else
      {
            return 0;
      }
}

int main()
{
      int mode;
      char password[50];
      printf("Enter password..\n");
      scanf("%s", password);
      printf("your password is:%s\n", password);
      if (isStrong(password))
      {
            printf("Strong password..!!!");
      }
      else if (isModerate(password))
      {
            printf("Moderate password..!!!");
      }
      else if (isWeak(password))
      {
            printf("Weak password..!!");
      }
      else
      {
            printf("Invalid password..!!!");
      }
}