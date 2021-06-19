/* Enter your solutions in this file */
#include <stdio.h>
int max(int number[], int length){
 int maximum= number[0];
   for(int i=0; i<length; i++){
    if (maximum<number[i]){
      maximum = number[i] ;
}
}
   return maximum;
}

int min(int number[], int length){
   int minimum= number[0];
   for(int i=0; i<length; i++){
    if (minimum>number[i]){
      minimum = number[i] ;
}
}
   return minimum;
}

float average(int number[], int length){
   float sum=0;
   for(int i=0; i<length; i++){
    sum += number[i];
}
   return sum/length;
}

int mode(int number[], int length){
  int n= (max(number,length))+1;
  int counts[n];
 
  for(int i=0; i<n; i++){
    counts[i]=0;
    for(int j=0; j<length; j++){
  if(i==number[j]){
    counts[i]++;
}
}
} 
 int Mode;
 for(int k=0; k<n; k++){
   if(max(counts,n)==counts[k]){
    Mode=k;
}
}
  return Mode;
}

int factors(int number, int f[]){
 int i=0;
 int j=2;
while(number>1){
 if(number%j==0){
   f[i]=j;
   i++;
  number=number/j;
}
 else
   j++;
}
 return i;
}
