#include <stdio.h>

int str_char(const char str[], int c)
{
  unsigned len = 0;
  while (str[len])
  {
    if (str[len] == c)
      return (len + 1);
    len++;
  }
  return -1;
}

int str_chnum(const char str[], int c)
{
  unsigned len = 0, num = 0;
  while (str[len])
  {
    if (str[len] == c)
      num++;
    len++;
  }

  return num;
}

int main(void)
{
  char str[6] = "DKCWDC";

  printf("%s存在字符C的位置是: %d\n", str, str_char(str, 'M'));
  printf("%s中字符C出现的次数是: %d\n", str, str_chnum(str, 'W'));
}