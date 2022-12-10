#include<stdio.h>
void see(int heightsSize, int* heights)
{
 int i,j,k,returnSize[heightsSize];
 for(i=0;i<heightsSize;i++)
 {  int s=0,l,h;
     l=heights[i+1];
     h=heights[i];
     for(j=i+1;j<heightsSize;j++)
     {
        if(h<heights[j])
        {
            s++;
            break;
        }
         if(l<=heights[j])
         {
           s++;
          l=heights[j];
         }

     }
    returnSize[i]=s;
 }
 for(k=0;k<heightsSize;k++)
 printf("%d",returnSize[k]);
}
void main()
{
    int heights[]={10,6,8,5,11,9};
    int heightsSize=6;
    see(heightsSize,heights);
}
