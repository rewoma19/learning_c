#include <stdio.h>

int main(void) {

  // READ A FILE

  FILE *pFile = fopen("input.txt", "r");
  // We need a "buffer" => a waiting room that temporarily stores data for us to use
  // A buffer that is too large will make use of too much memory
  char buffer[1024] = {0};

  if (pFile == NULL) {
    printf("Could not open file\n");
    return 1;
  }

  while (fgets(buffer, sizeof(buffer), pFile) != NULL) {
    printf("%s", buffer);
  }

  fclose(pFile);

  return 0;
}