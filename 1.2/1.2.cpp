// 1.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <algorithm>

using namespace std;

int binary(int key) 
{
    
    int arr[10];
    srand(time(NULL));
    for (int i = 0; i < 10; i++) 
    {
        arr[i] = 1 + rand() % 20;

        cout << arr[i] << " ";
    }

    sort(arr, arr + 10); 


    bool flag = false;
    int l = 0; 
    int r = 9; 
    int mid;

    while ((l <= r) && (flag != true))
    {
        mid = (l + r) / 2; 

        if (arr[mid] == key) flag = true; 
        if (arr[mid] > key) r = mid - 1; 
        else l = mid + 1;
    }

    if (flag) 
        cout << "Индекс элемента " << key << " в массиве равен: " << mid;
    else 
        cout << "Извините, но такого элемента в массиве нет";

   
    return 0;
}


int main()
{
	

    setlocale(0, "");
    cout << "****Функция бинарного поиска заданного числа в массиве****" << "\n";
    int key;
    cout << endl << endl << "Введите ключ : ";
    cin >> key;

    binary(key);

}

