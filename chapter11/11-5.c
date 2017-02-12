#include <stdio.h>

void del_digit(char *str)
{
  char *tmp = str;
  while (*tmp++)
  {
    if (!('0' <= *(tmp-1) && *(tmp-1) <= '9'))
    {
      *str++ = *(tmp-1);
    }
  }
  *str = '\0';
}

int main(void)
{
  char str[100];

  printf("请输入字符: ");
  scanf("%s", str);

  del_digit(str);

  printf("最后的字符为: %s\n", str);

  return 0;
}