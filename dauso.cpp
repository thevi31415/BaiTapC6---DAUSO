#include <iostream>
using namespace std;
void nhapmang1(int a[], int n);
void nhapmang2(int b[], int n);
void dauso(int a[], int b[], int n);
int main()
{
	int n;
	int a[100], b[100];
	cin >> n;
	nhapmang1(a, n);
	nhapmang2(b, n);
	dauso(a, b, n);
}
void nhapmang1(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
void nhapmang2(int b[], int n) {
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}
}
void dauso(int a[], int b[], int n) {
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			if (b[i]>a[j] && (b[i]!=-1 && a[j]!=-1))
			{
				dem = dem + 1;
				a[i] = -1;
				b[i] = -1;
			}
		}
	}
	cout << dem;
}