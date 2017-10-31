#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <time.h>
#include <errno.h>

void printFileInfo(char* filename) {
  struct stat ap;
  stat(filename, &ap);
  printf("size: %lu\ntime: %s", ap.st_size, ctime(&ap.st_atime));
}


int main() {
  printFileInfo("c.c");
  return 0;
}
