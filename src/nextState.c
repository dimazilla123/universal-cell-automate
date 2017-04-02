int*** map;
int h,w,p,rule,state;

int pow(int x,int y)
{
  int res=1;
  for(int i=0;i<y;i++)
    res*=x;
  return res;
}


int nextState(int x,int y)
{
  int* xn;int* yn;
  int neirbourN=getAround(x,y,xn,yn);
  int cellState=0;
  for(int i=0;i<neirbourN;i++)
    cellState+=pow(state,i)*map[xn[i]][yn[i]][p];
  
  return rule%cellState;
}


