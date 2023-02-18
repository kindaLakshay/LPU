#include <stdio.h>

int main() {
  char ch;

  printf("Enter an Alphabet: ");
  scanf("%c", &ch);

  if (ch >= 'A' && ch <= 'Z') {
    printf("%c is a capital letter.\n", ch);
  } 
  else if (ch >= 'a' && ch <= 'z') {
    printf("%c is a small letter.\n", ch);
  } 
  else {
    printf("%c is neither a capital letter nor a small letter.\n", ch);
  }

  return 0;
}
