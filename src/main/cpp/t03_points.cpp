//Выведите все исходные точки в порядке возрастания их расстояний от начала координат.
//
//Входные данные
//
//Программа получает на вход набор точек на плоскости. 
// Сначала задано количество точек n, затем идет последовательность из n строк,
// каждая из которых содержит два числа: координаты точки. 
// Величина n не превосходит 100, все исходные координаты – целые числа, не превосходящие 10^3.
//
//Выходные данные
//
//Необходимо вывести все исходные точки в порядке возрастания их расстояний от начала координат.
//
//Sample Input:
//
//2
//1 2
//2 3
//Sample Output:
//
//1 2
//2 3

#include "t03_points.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct point {
    int x, y;
};

bool cmp (const point &a, const point &b)
{
    return (a.x*a.x + a.y*a.y < b.x*b.x + b.y*b.y);
}
int t03_points() {
    int n;
    cin >> n;

    vector<point> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].x >> v[i].y;

    sort (v.begin(), v.end(), cmp);

    for (int i = 0; i < n; i++)
        cout << v[i].x << ' ' << v[i].y << ' ';
}
