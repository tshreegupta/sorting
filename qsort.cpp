/*******************************
Author:        Tanushree Gupta(tshreegupta@gmail.com)
File:          qsort.cpp
Last Modified: 18/04/2019, 17:58:02
Purpose:       Quick sort Algorithm
Usage:         qsort<int>(arr, start, end)
*******************************/

//swap function
template<class T>
void swap(T* a, T*b)
{
  T temp = *a;
  *a=*b;
  *b=temp;
}

template<class T>
int partition(T arr[], int start, int end)
{
  T pivot = arr[end];
  int i = start - 1;//index for smaller element
  for(int j=start;j<=end-1;j++)
  {
    if(arr[j]<pivot)  //if jth element is less than pivot only then swap
    {
      i++;
      swap(arr+j,arr+i);
    }
  }
  swap(arr+i+1, arr+end);
  return i+1;
}

template<class T>
int qsort(T arr[], int start, int end)
{
  if(start<end)
  {
    int p = partition(arr, start, end); //p is index of pivot

    qsort(arr,start,p-1);
    qsort(arr, p+1, end);
  }
  return 0;
}
