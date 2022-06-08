#include <bits/stdc++.h>
using namespace std;
#define bool int

void reverseArray(int arr[], int start, int end);
void rightRotate(int arr[], int d, int n);
void printArray(int arr[], int size);
bool getParity(unsigned int n);

int main()
{
    srand(time(0));
    int size;
    printf("Enter the number of elements of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the array elements:\n");
    for (int i = 1; i < size; i++)
    {
        scanf("%d\n", &arr[i]);
    }
    int k = (rand() % 10);
    int n = sizeof(arr) / sizeof(arr[0]);
    rightRotate(arr, k, n);
    printArray(arr, n);
    printf("\nParity of no %d = %s", n, (getParity(n) ? "odd" : "even"));
    return 0;
}

void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        std::swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rightRotate(int arr[], int d, int n)
{
    d = d % n;
    reverseArray(arr, 0, n - 1);
    reverseArray(arr, 0, d - 1);
    reverseArray(arr, d, n - 1);
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << "";
}

bool getParity(unsigned int b)
{
    bool parity = 0;
    while (b)
    {
        parity = !parity;
        b = b & (b - 1);
    }
    return parity;
}