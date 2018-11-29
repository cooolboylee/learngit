#include <stdio.h>
int main(){
int i=2,m=1,p=0,input1,input2,sum=0,ret;
scanf("%d ",&input1);
scanf("%d",&input2);
if(input2>=input1&&input2<=200&&input1>0){

while(i>=2) {
while (m<=i){
if(i%m==0)
{p++;}
m++;}
if(p<3){
ret++;}
m=1;
p=0;
if(ret==input1)
break;
i++;}
for( ; ;i++){
	p=0;
if(ret==input2+1){
break;}
while (m<=i){
if(i%m==0)
{p++;}
m++;}
m=1;
if(p<3){
ret++;}
else{continue;
}
sum+=i;
}
printf("%d",sum);
return 0;
}
}

