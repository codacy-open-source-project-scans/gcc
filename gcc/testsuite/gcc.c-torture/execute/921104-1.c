void abort (void);
void exit (int);

int
main (void)
{
  unsigned long val = 1;

  if (val > (unsigned long) ~0)
    abort();
  exit (0);
}
