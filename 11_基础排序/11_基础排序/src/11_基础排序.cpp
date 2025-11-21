#include <iostream>

void BubbleSort(int* arr, int size)
{
	// 外层循环，排除内层循环结束后的最后一个元素（最大元素）
	for (int i = 0; i < size - 1; i++)
	{
		// 内层循环是否对数组排序（优化）
		bool flag = false;

		// 内层循环，将当前数组中最大的元素排到最后一个
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = true;
			}
		}

		if (!flag)
		{
			return;
		}
	}
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

	BubbleSort(arr, size);
	
	for (int v : arr)
	{
		std::cout << v << " ";
	}
	std::cout << std::endl;
}