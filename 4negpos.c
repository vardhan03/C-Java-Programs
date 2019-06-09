////fucking

#include<stdio.h>
void swap(int*a ,int* b)
{
 int temp=*a;
  *a=*b;
  *b=temp;
}
int main()
{
 int n,a[100];
 scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 int j;
 for(int i=0;i<n-1;i++)
 {
  if(a[i]>0 && a[i+1]<0)
  { 
  int key=a[i+1];
   for(j=i;a[j]>0;j--)
   {
    a[j+1]=a[j];
   }
   a[j+1]=key;
  }
 }
 for(int i=0;i<n;i++)
 {
 printf("%d ",a[i]);
 }
  return 0;
 }
