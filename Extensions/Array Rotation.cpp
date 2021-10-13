#include <bits/stdc++.h>
using namespace std;


void rotate(int ar[], int siz)
{
	int temp = ar[0], i;
	for (i = 0; i < siz - 1; i++)
		ar[i] = ar[i + 1];

	ar[siz-1] = temp;
}

void leftRotate(int ar[], int d, int siz)
{
	for (int i = 0; i < d; i++)
		rotate(ar, siz);
}


void printArray(int ar[], int siz)
{
	for (int i = 0; i < siz; i++)
		cout << ar[i] << " ";
}

int main()
{
	int ar[] = { 21, 22, 23, 24, 25, 26, 27, 28, 29 };
	int siz = sizeof(ar) / sizeof(ar[0]);

	
	leftRotate(ar, 2, siz);
	printArray(ar, siz);

	return 0;
}

