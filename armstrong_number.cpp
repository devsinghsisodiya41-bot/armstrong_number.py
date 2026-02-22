#include<stdio.h>
#include<math.h>
int main ()
{
int num,og_num,count=0,sum=0,rem,curr-sum;
printf("enter the value "); 
scanf("%d,&num");
og_num=num;
while(num!=0){
  num=num/10;
  ++count;
}
  num=og_num;
  while(num!=0){
    rem=num%10;
    curr_sum=(int)pow(rem,count);
    sum=sum+curr_sum;
    num=num/10;
  }
  if(og_num==sum){
    printf("this is armstrong number");
  }
  else{
    printf("this is not armstrong number");
  }
}
