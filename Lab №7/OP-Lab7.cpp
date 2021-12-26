#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int num;
int i;
int main()
{
    cout << "Input referee number up to 10: "; //запит на кількість суддів
    cin >> num;
    if (num > 10) {
        cout << "Inputed number is bigger than 10. Try again: ";
        exit(0);
    }

    int* array = new int[num]; //заповнення масива випадковими числами від 0 до 10
    for (int i = 0; i < num; i++) {
            array[i] = rand()% 10;
            cout << array[i] << " ";
    }
    cout << endl;
    int max = array[0]; //поміщаємо значення 1-го елемента массива в змінні
    int min = array[0];
    int idxMax = 1;
    int idxMin = 1;
    for (int i = 0; i < num; i++)
    {
        if (max < array[i]) {  //якщо значення елемента більше значення змінної max, то записуємо це значення в змінну 
            max = array[i];
            idxMax = i;
            swap(array[0], array[idxMax]);  //макс. елемент обмінюємо місцями з первим елементом під індексом 0
        }
        
       
        if (min > array[i]) { //аналогічно і для min
            min = array[i];
            idxMin = i;
            swap(array[1], array[idxMin]); //мін. елемент обмінюємо місцями з другим елементом під індексом 1
        }
        
    }

    cout << "Changed array: "  ;  //виводимо масив, щоб відслідкувати зміну положення макс. та мін. елементів
    for (int i = 0; i < num; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    int sum=0;
    int average;
    for (int i = 2; i < num; i++) { //обраховуємо середнє арифетичне оминаючи макс. та мін. елементи
            sum = sum + array[i];  
            average = sum;
    }
    average = average / (num - 2);
    cout << "Score is " << average;
      
    delete[] array;
}
