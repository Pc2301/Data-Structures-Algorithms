#include<iostream>

void moveAtBeginning(int a[],int n)
{

	int swap=n-1;
	for(int i=n-1;i>=0;i--)
	{
		if(a[i]!=0)
		{
			a[swap--]=a[i];
		}
		else
		{
			continue;
		}
		
	}
	while(swap>=0)
	{
		a[swap--]=0;
	}
}
// Driver program to test above function
int main()
{
    int arr[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    moveAtBeginning(arr, n);
    std::cout<<"Done";
   std:: cout << "Array after pushing all zeros to beginning of array :\n";
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    return 0;
}