#include "mergeheader.h"

void merge(int arr[],int l,int m,int h)
{

 int n1=m-l+1;
int n2=h-m;
int L[n1+1],R[n2+1];
int i,j,k;
for(i=1;i<=n1;i++)
L[i]=arr[i+l-1];
for(j=1;j<=n2;j++)
R[j]=arr[m+j];
i=1;
j=1;
k=l;
while(i<=n1 && j<=n2)
{
if(L[i]<R[j])
{
arr[k]=L[i];
i++;
}
else
{
arr[k]=R[j];
j++;
}
k++;
}
while(i<=n1)
arr[k++]=L[i++];
while(j<=n2)
arr[k++]=R[j++];



}

void mergesort(int arr[],int l,int h)
{
if(l<h)
{ 
  int m=(l+h)/2;
   mergesort(arr,l,m);
  mergesort(arr,m+1,h);
merge(arr,l,m,h);
}
}

