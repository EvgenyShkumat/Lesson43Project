#include <iostream>
#include <ctime>
using namespace std;

int* create(int size) {
	int* array = new int[size];
	return array;
}

void destroy(int* array) {
	delete[] array;
}

int* test1() {
	int a = 100;
	return &a;
}

void test(int n) {
	n *= n * n;
}

int* test2() {
	int* a = new int;
	*a = 100;
	return a;
}

int* test3() {
	static int a = 100;
	return &a;
}

void swap_s(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void random_init(int* array, int size, int start) {
	int n = start;

	for (int i = 0; i < size; i++)
	{
		*(array + i) = n;
		n++;
	}

	for (int i = 0; i < size; i++)
	{
		int first = rand() % size;
		int second = rand() % size;

		swap_s((array + first), (array + second));
	}
}



void output(int* array, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << *(array + i) << " ";
	}
}

int main() {
	srand(time(NULL));

	int size = 10;
	int start = 20;

	int* array = new int[size];

	random_init(array, size, start);

	output(array, size);

	return 0;
}