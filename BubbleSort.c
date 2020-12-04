#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void BubbleSort(int array[],int size);
void Swap(int *x,int *y);

int main(){
    enum{size =10};
    int array[size]={3,91,11,52,7,64,71,34,64,42};
    BubbleSort(array,size);
    for (int d=0;d<size;d++)
    {
      printf ("%d\n",array[d]);
    }
}


void BubbleSort(int array[],int size)
{
    for (int i=0;i<size-1;i++)
    {
        for (int k=0;k<size;k++)
        {
            if (array[k]>array[k+1])
            {
                Swap(&array[k],&array[k+1]);
            }
        }

    }
}

void Swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y = temp;
}
//by walczy
