#include<stdio.h>

int main(int argc, char *argv[]){
  FILE *toCat;
  char ch;
  toCat = fopen(argv[1], "r");
  ch = getc(toCat);
  while(ch!=EOF){
    printf("%c", ch);
    ch = getc(toCat);
  }
  fclose(toCat);
  return 0;
}
