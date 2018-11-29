#include <stdio.h>
#include <math.h>
int main(){
long int input;
int ret=0;//ret=位数 
int a,d;//a暂存input,d=10的平方数； 
scanf("%d",&input);//倒序30 
//input=2;
 int b,c;
 if(input>=-100000&&input<=100000){
 if(input<0){
 	printf("fu ");
 	input*=-1;
 }
 if(input==0){
 	printf("ling");
 	
 }
while(input>0){

  a=input;
  while(input>0){
 	input/=10;
 	ret++;
 }
 input=a;
 if(ret==1){


 d=pow(10,--ret);
 b=input/d;//b是首位
switch(b){
case 0:printf("ling");

break;
case 1:printf("yi");

break;
case 2:printf("er");

break;
case 3:printf("san");

break;
case 4:printf("si");

break;
case 5:printf("wu");

break;
case 6:printf("liu");

break;
case 7:printf("qi");

break;
case 8:printf("ba");

break;
case 9:printf("jiu");

break;}
goto s;}
else{
 d=pow(10,--ret);
 b=input/d;
switch(b){
case 0:printf("ling");
if(ret>0){printf(" ");
	 }
break;
case 1:printf("yi");
if(ret>0){printf(" ");
	 }
break;
case 2:printf("er");
if(ret>0){printf(" ");
	 }
break;
case 3:printf("san");
if(ret>0){printf(" ");
	 }
break;
case 4:printf("si");
if(ret>0){printf(" ");
	 }
break;
case 5:printf("wu");
if(ret>0){printf(" ");
	 }
break;
case 6:printf("liu");
if(ret>0){printf(" ");
	 }
break;
case 7:printf("qi");
if(ret>0){printf(" ");
	 }
break;
case 8:printf("ba");
if(ret>0){printf(" ");
	 }
break;
case 9:printf("jiu");
if(ret>0){printf(" ");
	 }
break;}//b是首位

// 65405
 if(input%d==0){
 	while(ret>0){printf("ling");
 	ret--;
 	if(ret>0){printf(" ");
	 }
	 }
 if(input%d==0){goto s;
 }
 } 
 int ret2=0;int p;
 input%=d;a=input;//65405 d=10000,input=5405,a=5405,input=0,
   while(input>0){
 	input/=10;
 	ret2++;
 }
 if(ret2!=ret){
 p=ret-ret2;
 while(p>0){
 	printf("ling ");
 	p--;}
 	input=a;
 }
 input=a;
 ret2=0;
 ret=0;

}
}
s:;
}

 
return 0;

}

