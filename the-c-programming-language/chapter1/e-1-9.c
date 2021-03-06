#include <stdio.h>

#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main(void) {
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while((len = getline(line, MAXLINE)) > 0) {
    if(len > MAX) {
      max = len;
      copy(longest, line);
    }
  }

  if(max > 0) {
    printf("%s", longest);
  }

  return 0;
}

int getline(char s[], int lim) {
  int c, i;

  for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }
  if(c == '\n') {
    s[i] = '\n';
    ++i;
  }
  s[i] = '\0';

  return i;
}

void copy(char t[], char f[]) {
  int i = 0;
  while((t[i] = f[i]) != '\0') {
    i++;
  }
}