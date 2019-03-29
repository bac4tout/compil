#ifdef BIG_N
#define n 100
#else
#define n 5
#endif

int main() {
  int a[n];
  for (int i = 0; i < n; ++i) { a[i] = i+1; }

  int s = 0;
  for (int i = 0; i < n; ++i) { s +=a [i]; }

  if ( s== (n*(n+1))/2 )      { return s; }
  return -1;
}
