#include <iostream>
using namespace std;

#define ARRAY
#define ARRAY2
#define REVERSE_ARRAY
#define SUM_ARRAY
#define AVG_ARRAY
#define MIN_MAX_ARRAY




int main()

{
	int n;
	const int size = 5;
	int arr[size] = {3, 5, 8, 6, 9};

	setlocale(LC_ALL, "");

#ifdef ARRAY
	

	cout << "Введите элементы массива: " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
#endif 
	
#ifdef ARRAY2
	cout << "Массив из пяти значений: " << endl;
	
	
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
#endif

#ifdef REVERSE_ARRAY 
	for (int i = size - 1; i >= 0; i--)
	{
		cout << arr[i] << endl;

	}
#endif

#ifdef SUM_ARRAY
	
	int sum=0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма массива: " << sum << endl;
#endif

#ifdef AVG_ARRAY
cout << "Среднее арифметическое массива: " << (double)sum/size << endl;
#endif

#ifdef MIN_MAX_ARRAY
int min, max;
min = max = arr[0];
for (int i = 0; i < size; i++)
{
	if (arr[i] < min)
		min = arr[i];
	if (arr[i] > max)
		max = arr[i];
}
cout << "Минимальное/максимальное значение массива: " << min << max;
#endif
}