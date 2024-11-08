enum quadrants {I=1, II, III, IV};

enum quadrants quadrant(int x, int y) {

    //  <----  hajime!
  if(x>0&&y>0){
    return 1;
  }
  else if(x<0&&y>0)
    return 2;
  else if(x<0&&y<0)
    return 3;
  else if(x>0&&y<0)
    return 4;

}