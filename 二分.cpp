/*¶ş·Ö²éÕÒ*/
#include<stdio.h>
int main() {
	int a[1000];
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);
	}
	int x;
	scanf_s("%d", &x);
	int low = 0, high = n - 1; 
	int mid;
	while (low<high) {
		mid = (low + high) / 2;
		if (a[mid] == x)break;
		else if (a[mid] < x) {
			low = mid + 1;
		}
		else high = mid - 1;
	}
	if (low < high)printf("%d\n", mid);
	else printf("No find\n");
}