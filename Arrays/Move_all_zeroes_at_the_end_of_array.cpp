# include <iostream> 

void pushZerosToEnd(int a[],int n)
{
	int count=0;

	for(int i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			a[count++]=a[i];
		}
	}

	while(count<n)
	{
		a[count++]=0;
	}
}

// Driver program to test above function
int main()
{
    int arr[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    pushZerosToEnd(arr, n);
    std::cout << "Array after pushing all zeros to end of array :\n";
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    return 0;
}