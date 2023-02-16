// 1.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//




#include <iostream>
#include <ctime>
using namespace std;

int linary(int key)
{
    

    int ans[20]; 
    int h = 0;
    int arr[20]; 
    srand(time(NULL));

    for (int i = 0; i < 20; i++)
    {
        arr[i] = 1 + rand() % 20;

        cout << arr[i] << " ";

        
    }


    for (int i = 0; i < 20; i++) 
    {
        if (arr[i] == key) 
        { 
            ans[h++] = i;
        }
    }
    cout << "\n";
    if (h != 0) 
    { 
        for (int i = 0; i < h; i++)
        {
            cout << "Ключ " << key << " находится в ячейке " << ans[i] << endl; 
        }
    }
    else
    {
        cout << "Мы не нашли ключ " << key << " в массиве";
    }

    return 0;
}


int main()
{
    setlocale(0, "");
    cout << "****Функция линейного поиска заданного числа в массиве****" << "\n";
    int key;
    cout << endl << endl << "Введите ключ : ";
    cin >> key; 

    linary(key);


}
