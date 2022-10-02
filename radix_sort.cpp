#include <iostream>

using namespace std;

void countingsort(int arr[], int n, int div)
{
	int output_array[n];

	int count_array[10] = {0};

	for(int i = 0; i<n; i++)
	{
		count_array[ (arr[i]/div) %10]++;
	}
	
	
	for(int i = 1; i<10; i++)
	{
		count_array[i] += count_array[i-1];
	}
	
	for(int i=n-1; i>=0; i--)
	{
		output_array[ count_array[ (arr[i]/div) %10]-1] = arr[i];
		count_array[(arr[i]/div)%10]--;
	}

	for(int i = 0; i<n; i++)
	{
		arr[i] = output_array[i];
	}
}

int getmax(int arr[], int n)
{
	int max = arr[0];
	for(int i=1; i<n; i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
	}

	return max;
}

void radix_sort(int arr[], int n)
{
	int m = getmax(arr, n);

	for(int div=1; m/div>0; div *= 10)
	{
		countingsort(arr, n, div);
	}
}

int main()
{
	int n;
	cout<<"\nEnter the size of the array : ";
	cin>>n;

	int arr[n];
	cout<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<"Enter element : ";
		cin>>arr[i];
	}
	cout<<endl;

	cout<<"Before Sorting : ";
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	radix_sort(arr, n);

	cout<<"After Sorting : ";
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}