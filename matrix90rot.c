#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int a[100][100];
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
scanf("%d",&a[i][j]);
}
}
for(int i=0;i<n;i++){
int t[100],k=0;
for(int j=0;j<n;j++){
	t[k++]=a[j][i];
	}
	for(int m=k-1;m>=0;m--){
	printf("%d ",t[m]);
	}
	printf("\n");
}
return 0;
}
