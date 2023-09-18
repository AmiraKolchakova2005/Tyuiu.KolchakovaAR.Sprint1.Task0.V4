#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b;
    cout << "Введите а = " << endl;
    cin >> b;
    double S;
    S = (a * b);
    cout << "Площадь прямоугольника (a*d) =" <<S << endl;
    return 0;
    /*использую double, чтобы овысить точность вычислений в случае если длина a и d 
     в прямоугольнике не будет равнацелому числу
     */


}