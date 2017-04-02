int h,w;

int getAround(int x,int y,int* xn,int* yn)
{
  xn=(int*)malloc(sizeof(int)*9);
  yn=(int*)malloc(sizeof(int)*9);
  int n=0;
  for(int i=-1;i<2;i++)
      for(int j=-1;j<2;j++){
	  xn[n]=x-j;yn[n]=y-i;
	  n++;
      }
  for(int i=0;i<9;i++){
      if(xn[i]==w) xn[i]=0;
      if(xn[i]==-1) xn[i]=w-1;
      if(yn[i]==h) yn[i]=0;
      if(yn[i]==-1) yn[i]=h-1;
  }
  
  return 9;
}
