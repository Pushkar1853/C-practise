#include <bits/stdc++.h>
using namespace std;


int compareArrays(int a[], int b[], int n)
{
  for (int i=0; i<n; ++i)
  {
      if (a[i] != b[i])
      {
          return -1;
      }
  }
  return 0;
}

int main()
{
    int arr1[4] = {3, 4, 5, 7};
    int arr2[4] = {3, 4, 5, 7};

    int arr3[4] = {1, 5, 3, 7};
    int arr4[4] = {3, 4, 5, 19};

    printf("Should be True %d\n", compareArrays(arr1, arr2, 4));
    printf("Should be False %d\n", compareArrays(arr3, arr4, 4));
    return 0;
}