#include<stdio.h>
int fun(int row,int col){
  int a=1;
  if(col>row-col){
  col=row-col;
  }
  for(int i=0;i<col;i++){
   a=a*(row-i);
   a=a/(i+1);
  }
  return a;
}
int main(){
 int req;
 scanf("%d",&req);
 for(int i=0;i<=req;i++)
 {
 	printf("%d ",fun(req,i));
 }	
return 0;
}
