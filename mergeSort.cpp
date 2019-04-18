/*******************************
Author:        Tanushree Gupta(tshreegupta@gmail.com)
File:          mergeSort.cpp
Last Modified: 18/04/2019, 19:26:50
Purpose:       recursivev Merge Sort Algorithm
*******************************/
template<class T>
int merge(T arr[],int start,int  mid,int end)
{
  int l = start; //pointers for two sorted array
  int r = mid+1;
  int p = 0;   //pointer for the temporary array
  int len = end-start+1;
  //create temp array for storing sorted data
  T temp[len];

  while(l<=mid&&r<=end)
  {
    if(arr[l]<arr[r])
      temp[p++]=arr[l++];
    else
      temp[p++]=arr[r++];
  }
  //copy the rest.
  while(l<=mid)
    temp[p++]=arr[l++];
  while(r<=end)
    temp[p++]=arr[r++];


  //copy back to array
  p=0;
  for(int i =start;i<=end;i++)
    arr[i] = temp[p++];
  return 0;
}
template<class T>
int mergeSort(T arr[], int start, int end)
{
  if(start<end)
  {
    int mid = (start+end)/2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);

    merge(arr, start, mid, end);
  }
  return 0;
}
