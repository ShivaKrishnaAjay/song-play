#include<stdio.h>
 int main(){

char str;
scanf("%[^/n]s",str);
char temp,j=0;
for(i=0;i<strlen(str);i++){


if(str[i+1]==" "){



for(k=i;k<strlen(str);k--){

if(j<=k){

temp=str[j];
str[j]=str[k];
str[k]=temp;

}
j++;

}

j=i+2;

}








}



 }