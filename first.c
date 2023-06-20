#include<stdio.h>
#include<string.h>
 int main(){

   char str[50];
      fgets(str, sizeof(str), stdin);  // read string
   
   
   char temp;
  
   
   int n= strlen(str)-1;
   printf("%d\n",n);
  int j=0;
    for(int i=0;i<n;i++){

        if((str[i+1]==' ') || (i==n-1))
        { 
         
          for(int k=i;k>=j;k--){

          
                 temp=str[j];
                 str[j]=str[k];
                 str[k]=temp;

          
            j++;

                    }

              j=i+2;

         }

}

char tem;
for(int i=0;i<n/2;i++){
    tem=str[i];
    str[i]=str[n-i-1];
    str[n-i-1]=tem;
    
}

printf(str);
return 0;
}