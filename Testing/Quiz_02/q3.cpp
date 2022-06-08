// #include <iostream>
// using namespace std;
#include <stdio.h>

int recforMax(int arr[], int len){
   int maximum;

   if (len == 1){
      maximum=arr[0];
      return maximum;
   }
   else{
      return maximum=arr[len]>recforMax(arr,len-1)?arr[len]:recforMax(arr,len-1);
   }
}

int main(){
   int Arr[] = {-89,98,76,32,21,35,101};
   int length = sizeof(Arr)/sizeof(Arr[0]);
   printf("Maximum in the array : %d",recforMax(Arr, length));
   return 0;
}