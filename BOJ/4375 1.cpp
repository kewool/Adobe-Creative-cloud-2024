/*
����
2�� 5�� ������ �������� �ʴ� ���� n(1 �� n �� 10000)�� �־����� ��, 1�θ� �̷���� n�� ����� ã�� ���α׷��� �ۼ��Ͻÿ�.

�Է�
�Է��� ���� ���� �׽�Ʈ ���̽��� �̷���� �ִ�. �� �׽�Ʈ ���̽��� �� �ٷ� �̷���� �ְ�, n�� �־�����.

���
1�� �̷���� n�� ��� �� ���� ���� ���� �ڸ����� ����Ѵ�.
*/
#include <bits/stdc++.h>
#define loop(i,n) for(int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

int n;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while (true) {
        ll res = 1, d = 1;
        cin >> n;
        if (cin.eof() == true) break;
        while (res % n && d++) res = (res * 10 + 1) % n;

        cout << d << "\n";

    }

    return 0;
}