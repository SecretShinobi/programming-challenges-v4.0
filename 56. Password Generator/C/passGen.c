#include <stdio.h>
#include <stdlib.h>
#include "libParseArgs.h"
#include "libPassGen.h"

void usage(FILE *fp){
  char *s= "Usage: passGen NUM [OPTIONS]...\n"
    "Generates a NUM long password to stdout with OPTIONS to modify the password\n";

  fputs(s, fp);
}

int main (int argc, char *argv[]) {
  if (argc < 2 || argc > 5) {
    usage(stderr);
    exit(255);
  }
  
  char* pass = malloc(argv[1] * sizeof(char));

  for (int i = 0; i < argv[1]; i++) {
    continue; //TODO: Add implementation
  }

  fprintf(stdout, pass);
}
