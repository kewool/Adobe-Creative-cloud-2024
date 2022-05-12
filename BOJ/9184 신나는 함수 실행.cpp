/*
����
��� ȣ�⸸ �����ϸ� ���� ����! �ƴѰ���?

������ ���� ����Լ� w(a, b, c)�� �ִ�.

if a <= 0 or b <= 0 or c <= 0, then w(a, b, c) returns:
    1

if a > 20 or b > 20 or c > 20, then w(a, b, c) returns:
    w(20, 20, 20)

if a < b and b < c, then w(a, b, c) returns:
    w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c)

otherwise it returns:
    w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1)
���� �Լ��� �����ϴ� ���� �ſ� ����. ������, �״�� �����ϸ� ���� ���ϴµ� �ſ� ���� �ð��� �ɸ���. (���� ���, a=15, b=15, c=15)

a, b, c�� �־����� ��, w(a, b, c)�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
�Է��� �� ���� a, b, c�� �̷���� ������, �� �ٿ� �ϳ��� �־�����. �Է��� �������� -1 -1 -1�� ��Ÿ����, �� ������ ��� -1�� ���� �Է��� �������� �����ϸ� ����.

���
�Է����� �־��� ������ a, b, c�� ���ؼ�, w(a, b, c)�� ����Ѵ�.

Ǯ��
3���� �迭 ���� �޸������̼��� �����Ѵ�. �������� ������ 1 ~ 20�̴�.
*/

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int arr[100][100][100] = {0,};

int f(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0) return 1;
    if (arr[a - 1][b - 1][c - 1]) return arr[a - 1][b - 1][c - 1];
    if (a > 20 || b > 20 || c > 20) return f(20, 20, 20);
    if (a < b && b < c) return arr[a-1][b-1][c-1] = f(a, b, c - 1) + f(a, b - 1, c - 1) - f(a, b - 1, c);
    
    return arr[a - 1][b - 1][c - 1] = f(a - 1, b, c) + f(a - 1, b - 1, c) + f(a - 1, b, c - 1) - f(a - 1, b - 1, c - 1);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c;
    while (true) {
        cin >> a >> b >> c;
        if (a == -1 && b == -1 && c == -1)break;
        cout << "w(" << a << ", " << b << ", " << c << ") = " << f(a, b, c) << "\n";
    }

    return 0;
}