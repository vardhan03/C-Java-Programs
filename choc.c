#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
 int t;
 
 scanf("%d",&t);
 while(t--){
 int n,p,a[100];
 scanf("%d",&n);
 for(int i=0;i<n;i++){
 scanf("%d",&a[i]);
 }
 scanf("%d",&p);
 for(int i=0;i<n;i++){
 //printf("%d ",a[i]);
 }
 int buy=a[0],bal=0;
 for(int i=0;i<n-1;i++){
 	if( (a[i]-a[i+1])<0 && bal>0 )
 	{
 		bal=bal+(a[i]-a[i+1]);
 		if(bal<0){
 		buy=buy+abs(bal);
 		bal=0;
 		}
 		else if(bal>0){continue;}
 	}
 	else if( (a[i]-a[i+1]>0)){
 	bal=bal+(a[i]-a[i+1]);
 	}
 	else if( (a[i]-a[i+1])<0){
 	buy=buy+abs(a[i]-a[i+1]);
 	}
 		
 	//printf("%d ",a[i]-a[i+1]);
 }
 printf("%d\n",buy);
 printf("%d",(buy*p));
 printf("\n");
 }
 return 0;
 }
