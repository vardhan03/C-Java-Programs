#include<stdio.h>
#include<string.h>
int main()
{
char s[100];char c[10];
scanf("%s",s);
scanf("%s",c);
int len=strlen(s);
int cnt[100];
int k=0,flag=0;
for(int i=0;i<len;i++){
if(s[i]==c[0]){
 flag=1;
 break;
 }
 else{flag=0;
 }
}
if(flag==1)
{
for(int i=0;i<len;i++){
if(s[i]==c[0]){
cnt[k++]=i;
}
}
int cn=0;
for(int i=0;i<k;i++){
 if(cnt[i]+1==cnt[i+1]){
  cn++;
  }
}
if(cn==k-1){
printf("true");
}
else
{
printf("false");
}
}
else{
printf("true");
}
return 0;
}

