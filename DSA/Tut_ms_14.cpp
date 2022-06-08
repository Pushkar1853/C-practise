#include <bits/stdc++.h>
using namespace std;


     int function2 (int a[], int n, int x)
{
int i, j, k;
i = 0; j = n -1;
while (i <= j) {
k = (i + j)/2;
if (x == a[k])
 return k;
if (x > a[k])
 i = k + 1;
else j = k - 1;
}
return -1;
}

int main(){
    int a[4]={2,3,4,5};
    int l=5;
    int y=3;
    printf("%d",function2(a,l,y));
    return 0;
}