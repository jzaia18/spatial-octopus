#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <time.h>
#include <errno.h>

//Prints file info
void printFileInfo(char* filename) {
  struct stat ap;
  stat(filename, &ap);
  printf("size: %lu\nmode: %o\ntime: %s\n", ap.st_size, ap.st_mode, ctime(&ap.st_atime));
}


int main() {
  printFileInfo("c.c");
  return 0;
}
