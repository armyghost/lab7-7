#include <stdio.h>

int main(void) {
  char name[100];
  char day[7][10] = {"Monday  ","Tuesday ","Wenesday","Thursday","Friday  ","Saturday","Sunday  "};
  int temp[7][2];
  int Max,Min;
  float SumH,SumL;
  int midH,midL;
  int i,j,k;
  printf("Enter your name : ");
  scanf("%s",name);
  printf("Hello %s\n",name);
  printf("*******************************************\n");
  for (i=0;i<7;i++)
  {
    printf("High Temp %s       : ",day+i);
    scanf("%d",&temp[i][0]);
    printf("Low Temp %s        : ",day+i);
    scanf("%d",&temp[i][1]);
  }
  printf("*******************************************\n");
  Min = temp[0][0];
  Max = temp[0][0];
  for (j=0;j<7;j++)//HighMax&Min
  {
    if(Min>temp[j][0]){
      Min=temp[j][0];
    }
    else if(Min>temp[j][1]){
      Min=temp[j][1];
    }
    if(Max < temp[j][0]){
      Max=temp[j][0];
    }
    else if(Max < temp[j][1]){
      Max=temp[j][1];
    }
    
  }
  printf("Max Temperature is %d C\n",Max);
  printf("Min Temperature is %d C\n",Min);
  for(i=0;i<7;i++){
    SumH += temp[i][0];
    SumL += temp[i][1];
  }
  printf("Average High Temperature is %.2f",SumH/7);
  printf("Average LOW Temperature is %.2f",SumL/7);
  return 0;
}