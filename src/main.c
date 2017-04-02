#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int*** map;//3-х мерный массив
int h,w,rule,states,p;

int main(int argc,char** argv)//Script Rule H W States
{
  if(argc<5){
    printf("Usage: %s Rule H W States\n",argv[0]);
    return 0;
  }
  rule=atoi(argv[1]);
  h=atoi(argv[2]);
  w=atoi(argv[3]);
  states=atoi(argv[4]);
  generateMap();
  for(;;){
    printMap();
    updateMap();
  }
  
  return 0;
}
