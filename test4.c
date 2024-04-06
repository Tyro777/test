void xuanze(int a[], int n) {
	int temp, k = 0;

	for (int i = 0;i < n - 1;i++) {
		k = i;
		for (int j = 1 + i;j < n ;j++) {
			if (a[j] < a[k])
				k = j;
		}
		temp = a[k];
		a[k] = a[i];
		a[i] = temp;
		for (int m = 0;m < n;m++) {
			printf("%d  ", a[m]);
		}printf("\n");

	}
}