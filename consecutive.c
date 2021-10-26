#include <stdio.h>
#include <stdlib.h>

void get_bit_pos(unsigned int x)
{

int i=0,count=0;
unsigned int bit = 0x1;
while(i<8)
{
  if((x&bit) == bit)
  {
    count++;
  }
  bit = bit<<1;
  i++;
}
if(count==3)
{
  printf("Number contains three alternate ones.\n");
}else{
    printf("Number doesn't contains three ones.\n");
    exit(1);
}

}

int main()
{

int x=0;
unsigned int mask = 0x07;
int i,count=0;

scanf("%d",&x);

if(0>x)
{
    printf("Natural number is required\n");
    exit(0);
}
for(i=0; i<32; i++)
{
  if((x&mask)==mask)
  {
    count++;
  }
  mask = mask<<1;
}
if(count==1)
{
  printf("Number contains three consecutive ones.\n");
  exit(1);
}

get_bit_pos(x);

}
