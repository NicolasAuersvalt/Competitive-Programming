long int findNextSquare(long int sq)
{
  long int i;
  for(i=1; i!=0; i++){
    if(i*i == sq)
      return ((i+1)*(i+1));

    else if(i*i > sq)
      return -1;
  }
}