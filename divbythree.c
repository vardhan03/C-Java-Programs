#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
while(t--){
int n,a[100];
scanf("%d",&n);
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
int cnt=0;
for(int i=0;i<n-1;i++){
 for(int j=i+1;j<n;j++){
  if( (a[i]+a[j]) %3 ==0){
  //printf("%d %d\n",a[i],a[j]);
  cnt++;
  }
}
}
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
for(int k=j+1;k<n;k++){
if( (a[i]+a[j]+a[k])%3==0){
//printf("%d %d %d\n",a[i],a[j],a[k]);
cnt++;
}}}}
printf("%d",cnt);
printf("\n");
}
return 0;
}
