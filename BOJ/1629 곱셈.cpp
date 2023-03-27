/*
����
�ڿ��� A�� B�� ���� ���� �˰� �ʹ�. �� ���Ϸ��� ���� �ſ� Ŀ�� �� �����Ƿ� �̸� C�� ���� �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� A, B, C�� �� ĭ�� ���̿� �ΰ� ������� �־�����. A, B, C�� ��� 2,147,483,647 ������ �ڿ����̴�.

���
ù° �ٿ� A�� B�� ���� ���� C�� ���� �������� ����Ѵ�.

Ǯ��
���� �ŵ��������� �̿��Ѵ�.
*/
#include <bits/stdc++.h>
#define loop(i,n) for(int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

ll A, B, C, res = 1;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> A >> B >> C;


    while (B > 1) {
        if (B & 1) res = res * A % C;
        A = A * A % C;
        B = B >> 1;
    }

    cout << A * res % C;

    return 0;
}
