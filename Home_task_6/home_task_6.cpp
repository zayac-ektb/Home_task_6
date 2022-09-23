#include <iostream>
using namespace std;

double mean(int a, int b) {
	return (a + b) / (double)2;
}
double arrMeanValue(int anyarr[], int const length) {
	int counter = 0, sum = 0;
	for (int i = 0; i < length; i++) {
		sum += anyarr[i];
	}
	return sum / length;
}
void arrPositive(int anyarr[], int const length) {
	for (int i = 0; i < length; i++) {
		anyarr[i] = abs(anyarr[i]);
	}
}
void factor(int a);

int main() 
{
	int n, m;
	setlocale(LC_ALL, "Russian");

/*Задача 1
		Создайте функцию mean(), которая возвращает
		среднее арифметическое двух переданных в неё чисел.
		Не забудьте продемонстрировать её работу.
*/
	cout << "\tHome_task_6.1\n";
	cout << " Введите 2 целых числа: " << "\n";
	cin >> n >> m;
	cout << " Среднее арифметическое введенных чисел: " << mean(n, m) << "\n\n";

/*Задача 2
		Создайте функцию arrMeanValue(), которая будет
		возвращать среднее арифметическое всех элементов
		переданного ей массива.
*/
	cout << "\tHome_task_6.2\n";
	int const size1 = 5;
	int arr1[size1];
	cout << "заполните массив из " << size1 << " целых чисел: \n";
	for (int i = 0; i < size1; i++) {
		cin >> arr1[i];
	}
	cout << " Среднее арифметическое всех элементов массива: ";
	for (int i = 0; i < size1; i++) {
		cout << arr1[i] <<", ";
	}
	cout << "\b\b ";
	cout << "\n равно: " << arrMeanValue(arr1, size1) << "\n\n";
	
/*Задача 3
		Создайте функцию, которая принимает массив и его
		длину, после чего меняет в нём все отрицательные числа
		на положительные.Сами положительные числа никак
		меняться не должны
*/
	cout << "\tHome_task_6.3\n";
	int const size2 = 6;
	int arr2[size2];
	cout << "заполните массив из " << size2 << " целых чисел: \n";
	for (int i = 0; i < size2; i++) {
		cin >> arr2[i];
	}
	arrPositive(arr2, size2);
	cout << " \"Положительный\" массив введенных чисел выглядит так: ";
	for (int i = 0; i < size2; i++) {
		cout << arr2[i] << ", ";
	}
	cout << "\b\b  \n\n";

/*Задача 4
		Создайте функцию, которая принимает число N и
		увеличивает значение статичной переменной S,
		хранящейся в функции, в N раз.После этого функция
		выводит значение S.Продемонстрируйте работу
		функции, вызвав её несколько раз, передавая в неё
		различные значения.
*/

	cout << "\tHome_task_6.4 \n";
	cout << " Введите число: ";
	cin >> n;
	cout << " а мое число больше: ";
	factor(n);
	cout << " :p\n";
	cout << " Попробуйте еще раз: ";
	cin >> n;
	cout << " а мое снова больше: ";
	factor(n);
	cout << " :p\n";
	cout << " Введите число: ";
	cin >> n;
	cout << " я опять победил: ";
	factor(n);
	cout << " :p\n пожалуй хватит игр)";
	return 0;
}
void factor(int a) {
	int s = 4;
	s *= a;
	cout << s;
}