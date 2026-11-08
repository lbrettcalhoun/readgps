#include <stdio.h>

#define FILE "readgps.dat"

int fd, res;

int main () {
  res = access(FILE,1);
  if (res == -1) {
    printf("Creating DAT file ... \n");
    fd = creata(FILE,0);
    if (fd == -1) {
      perror(FILE);
      return 1;
    }
  } else {
    printf("Opening DAT file ... \n");
    fd = open(FILE,2);
    if (fd == -1) {
      perror(FILE);
      return 2;
    }
  }
  res = write(fd, "BLAHblahBlah", 12);
  if (res == -1) {
    perror(FILE);
    return 3;
  }
  printf("Closing DAT file ... \n");
  res = close(fd);
  if (res == -1) {
    perror(FILE);
    return 4;
  }
  return 0;
}