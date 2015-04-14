#include<stdio.h>

int main(int argc, char *argv[]){
  FILE *topwd;
  char wd[1024];
  getcwd(wd, sizeof(wd));
  topwd = fopen(wd, "r");
  printf("%s\n", wd);
  return 0;
}
