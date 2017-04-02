int*** map;
int h,w,p;

void printMap()
{
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++)
      printf("%d",map[i][j][p]);
    putchar('\n');
  }
}
