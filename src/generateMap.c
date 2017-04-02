int*** map;//3-х мерный массив
int h,w,rule,states,p;

void generateMap()
{
  map=(int***)malloc(h*sizeof(int**));
  for(int i=0;i<h;i++){
    map[i]=(int**)malloc(w*sizeof(int*));
    for(int j=0;j<w;j++)
      map[i][j]=(int*)malloc(sizeof(int)*2);
  }
  
}
