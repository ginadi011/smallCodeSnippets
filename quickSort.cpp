int partition(int A[], int p, int q)
{
	int x = A[p];
	int i = p;
	int j;

	for (j = p + 1; j<q; j++)
	{
		if (A[j] <= x)
		{
			i = i + 1;
			//swap(A[i],A[j]);
			int temp = A[i];
			A[i] = A[j];
			A[j] = temp;
		}

	}
	// swap(A[i],A[p]);
	int tempa = A[i];
	A[i] = A[p];
	A[p] = tempa;
	return i;
}


void quicksort(int*data, int top, int bottom) {
	int pivot;

	if(top<bottom) {
		pivot = partition(data,top,bottom);
		quicksort(data, top, pivot);
		quicksort(data, pivot + 1, bottom);
	}

}
