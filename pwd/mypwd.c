#include<stdio.h>

int main(int argc, char *argv[]){
  FILE *toLs;
  char wd[1024];
  getcwd(wd, sizeof(wd));
  toLs = fopen(wd, "r");
  printf("%s\n", wd);
  return 0;
}
