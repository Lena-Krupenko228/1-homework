

#include <iostream>
using namespace std;

int main()

{
    setlocale(LC_ALL, "rus");
    int centimeters;
    cout << "Введите длину в сантиметрах: ";
    cin >> centimeters;
    int meters = centimeters / 100;
    int remaining_centimeters = centimeters % 100;
    cout << "Полных метров: " << meters << endl;
    cout << "Оставшиеся сантиметры: " << remaining_centimeters << endl;

    return 0;

}
