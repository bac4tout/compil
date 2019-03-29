#include <assert.h>
#define MAX_SIZE 512

int count_char(const char* str) {
  int c = 0;
  while ( (c < MAX_SIZE) && (str[c] != '\0')) { ++c; }
  return c;
}

int main(int argc, char** argv) {
  assert(argc == 2 && "compliant number of arguments");
  return count_char(argv[1]);
}
