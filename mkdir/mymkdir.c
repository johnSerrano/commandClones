#include<stdio.h>
#include<sys/stat.h>

int main(int argc, char *argv[]){
  mkdir(argv[1], S_IRUSR | S_IWUSR | S_IXUSR);
  return 0;
}
