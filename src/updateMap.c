int*** map;
int h,w,p;

void updateMap()
{
  for(int i=0;i<h;i++)
    for(int j=0;j<w;j++)
      map[i][j][(p+1)%2]=nextState(i,j);
  p=(p+1)%2;
}
