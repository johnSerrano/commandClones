#include<stdio.h>
#include<sys/types.h>
#include<dirent.h>


int main(int argc, char *argv[]){
  DIR *dir;
  struct dirent *direct;
  
  dir = opendir("./");
  while ((direct = readdir(dir)) != NULL){
    printf("%s\n", direct->d_name);
  }
  return 0;
}
