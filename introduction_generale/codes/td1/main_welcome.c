#ifndef DEFAULT
#define DEFAULT "everybody"
#endif

extern void welcome(char const*);

int main(int argc, char const* argv[]) {
  if      (argc == 1) { welcome(DEFAULT); }
  else if (argc == 2) { welcome(argv[1]); }
  else { return 1; }
  return 0;
}
