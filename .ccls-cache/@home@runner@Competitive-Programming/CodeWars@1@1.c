int last_digit(const char *a, const char *b)
{

  long long int i, res, aa, bb;
  aa = (long long int) (*a-'0');
  bb = (long long int) (*b-'0');
  res = aa;


  for(i=1; i<bb; i++){
    res *= aa;
  }

  return (res%10);
}