/*******************************
Author:        Tanushree Gupta(tshreegupta@gmail.com)
File:          main.cpp
Last Modified: 18/04/2019, 17:58:02
Purpose:       Main function
*******************************/
#include "main.h"

int main()
{
  int arr[10] = {-1,2,3,10,94,0,34,42,32,2};

  qsort<int>(arr,0,9);

  for(int i =0;i<10;i++)
    std::cout<<arr[i]<<"\t";
  std::cout<<std::endl;

  return 0;
}
