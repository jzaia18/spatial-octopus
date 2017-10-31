#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <time.h>
#include <errno.h>

char* getFileInfo(char* filename) {
  struct stat ap;
  int stat = stat(filename, ap);
  char str[] = sprintf("size: %d\ntime: %s",stat.st_size,ctime(&stat.st_time));
  return str;
}


int main() {
  printf(getFileInfo("c.c"));
  return 0;
}
