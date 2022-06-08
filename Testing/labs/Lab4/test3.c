#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
//#include <bits/stdc++.h>
#define bool int

void reverseArray(int arr[], int start, int end);
void rightRotate(int arr[], int d, int n);
void printArray(int arr[], int size);
bool getPArity(unsigned int n);

int main()
{
    int arr[] = { 1,
                  2,
                  3,
                  4,
                  5,
                  6,
                  7,
                  8,
                  9,
                  10 } int k = 3;
    rightRotate(arr, k, n);
    printArray(arr, n);
    unsigned int n = 7;
    printf("Parity of no %d = %s", n, (getParity(n) ? "odd" : "even"));
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

bool getParity(unsigned int n)
{
    bool parity = 0;
    while (n)
    {
        parity = !parity;
        n = n & (n - 1);
    }
    return parity;
}