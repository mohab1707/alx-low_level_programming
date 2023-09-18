#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main(void)
{
const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
srand((unsigned int)time(NULL));
char password[PASSWORD_LENGTH + 1]; 
for (int i = 0; i < PASSWORD_LENGTH; i++)
{
int index = rand() % (sizeof(charset) - 1);
password[i] = charset[index];
}
password[PASSWORD_LENGTH] = '\0'; 
printf("%s\n", password);
return 0;
}
