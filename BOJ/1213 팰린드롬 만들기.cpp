/*
����
���Ѽ��� �ӹ����� ���� ����ϴ� �����̴�.

���Ѽ��� ���󿡼� �Ӹ������ ���ڿ��� �ʹ� �����ϱ� ������, ���� ������ ����ؼ� �ӹ����� �Ӹ������ �������ַ��� �Ѵ�.

�ӹ����� ���Ѽ��� ���� �̸����� �Ӹ������ ������� �ϴµ�, ���Ѽ��� ���� �̸��� ���ĺ� ������ ������ �ٲ㼭 �Ӹ������ ������� �Ѵ�.

�ӹ����� ���� ���Ѽ��� ���� �̸��� �Ӹ�������� �ٲٴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� ���Ѽ��� ���� �̸��� �ִ�. ���ĺ� �빮�ڷθ� �� �ִ� 50�����̴�.

���
ù° �ٿ� ������ ������ ����Ѵ�. ���� �Ұ����� ���� "I'm Sorry Hansoo"�� ����Ѵ�. ������ ���� ���� ��쿡�� ���������� �ռ��� ���� ����Ѵ�.

Ǯ��
ī���� �迭�� �������� �̿��ؼ� �ܼ� �����ߴ�.
*/
#include <bits/stdc++.h>
#define loop(i,n) for(int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

string str;
int arr[27], arr2[27], flag, max_odd;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> str;

    vector<int> s(str.begin(), str.end());

    sort(s.begin(), s.end());
    for (auto iter : s) {
        arr[iter - 64]++;
        arr2[iter - 64]++;
    }
    for (int i = 1; i < 27; i++) {
        if (arr[i] % 2) flag++;
        arr[i] += arr[i - 1];
        if (arr2[i] % 2) {
            max_odd = i;
        }
    }
    if (flag > 1) {
        cout << "I'm Sorry Hansoo";
    }
    else {
        for (int i = 1; i < 27; i++) {
            flag = arr2[i] / 2;
            if (arr2[i] % 2 && arr2[i] != 1 && !max_odd) flag = 2;
            while (arr2[i] / 2 && flag--) {
                cout << (char)s[arr[i] - arr2[i]];
                arr2[i]--;
            }
        }
        if (max_odd) {
            cout << (char)s[arr[max_odd] - arr2[max_odd]];
            arr2[max_odd]--;
        }
        for (int i = 26; i > 0; i--) {
            while (arr2[i]) {
                cout << (char)s[arr[i] - arr2[i]];
                arr2[i]--;
            }
        }
    }

    return 0;
}