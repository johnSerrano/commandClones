#include<stdio.h>

int main(int argc, char *argv[]){
  char wd[1024];
  getcwd(wd, sizeof(wd));
  printf("%s\n", wd);
  return 0;
}
