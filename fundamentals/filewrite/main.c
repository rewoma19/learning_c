#include <stdio.h>

int main() {

  // We get access to the built-in FILE struct that comes from stdio.h

  // Creating a file named output with the txt extension
  // Mode as 2nd argument; w => we will be writing to the file
  // In this case, the output text file will be created in the relative path (the folder in which this C file is located)
  // We can also use absolute file paths
  FILE *pFile = fopen("output.txt", "w");

  // For example, let's write to this new output text file
  char text[] = "LIONEL ANDRES MESSI CUCCITINI";

  if (pFile == NULL) {
    printf("Error opening file\n");

    // We return an int different from 0; 1 in this case, for an early return in the case that there is an error
    return 1;
  }

  // To write some text or content to this new file, we make use of the fprintf function
  // It takes three arguments: pointer file variable name, format specifier of what type of text or content is being written to the file, and then the variable of what is being written into the file
  fprintf(pFile, "%s", text);

  printf("File was written successfully!\n");

  // Note that files must be closed
  fclose(pFile);

  return 0;
}