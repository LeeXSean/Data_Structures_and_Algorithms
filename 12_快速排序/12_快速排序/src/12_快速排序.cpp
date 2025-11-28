#include <iostream>

// 快排分割函数
int Partation(int* arr, int l, int r)
{
	// 记录基准数
	int val = arr[l];

	// 一次快排处理
	while (l < r)
	{
		while (l < r && arr[r] > val)
		{
			r--;
		}

		if (l < r)
		{
			arr[l] = arr[r];
			l++;
		}
		
		while (l < r && arr[l] < val)
		{
			l++;
		}

		if (l < r)
		{
			arr[r] = arr[l];
			r--;
		}
	}

	// l == r 的位置，即基准数的位置
	arr[l] = val;
	return l;
}

// 快速排序的递归接口
void QuickSort(int* arr, int begin, int end)
{
	// 快排递归的结束条件
	if (begin >= end)
		return;

	// 在[begin, end]区间做一次快排分割处理
	int pos = Partation(arr, begin, end);

	// 对基准数左边和右边的序列分别做快排（递归）
	QuickSort(arr, begin, pos - 1);
	QuickSort(arr, pos + 1, end);
}

// 快速排序
void QuickSort(int* arr, int size)
{
	return QuickSort(arr, 0, size - 1);
}

int main()
{
	int arr[10];
	int size = sizeof(arr) / sizeof(arr[0]);
	srand(time(NULL));

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100 + 1;
	}

	for (int v : arr)
	{
		std::cout << v << " ";
	}
	std::cout << std::endl;

	QuickSort(arr, size);

	for (int v : arr)
	{
		std::cout << v << " ";
	}
	std::cout << std::endl;
}