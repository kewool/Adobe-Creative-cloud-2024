/*
����
ROT13�� ī�̻縣 ��ȣ�� �������� ���� ���ĺ��� 13���ھ� �о �����.

���� ���, "Baekjoon Online Judge"�� ROT13���� ��ȣȭ�ϸ� "Onrxwbba Bayvar Whqtr"�� �ȴ�. ROT13���� ��ȣȭ�� ������ ���� �������� �ٲٷ��� ��ȣȭ�� ���ڿ��� �ٽ� ROT13�ϸ� �ȴ�. �տ��� ��ȣȭ�� ���ڿ� "Onrxwbba Bayvar Whqtr"�� �ٽ� ROT13�� �����ϸ� "Baekjoon Online Judge"�� �ȴ�.

ROT13�� ���ĺ� �빮�ڿ� �ҹ��ڿ��� ������ �� �ִ�. ���ĺ��� �ƴ� ���ڴ� ���� ���� �״�� ���� �־�� �Ѵ�. ���� ���, "One is 1"�� ROT13���� ��ȣȭ�ϸ� "Bar vf 1"�� �ȴ�.

���ڿ��� �־����� ��, "ROT13"���� ��ȣȭ�� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� ���ĺ� �빮��, �ҹ���, ����, ���ڷθ� �̷���� ���ڿ� S�� �־�����. S�� ���̴� 100�� ���� �ʴ´�.

���
ù° �ٿ� S�� ROT13���� ��ȣȭ�� ������ ����Ѵ�.

Ǯ��
���ĺ��� �ƽ�Ű�ڵ� �������� üũ�ϰ� �빮�ڸ� 65, �ҹ��ڸ� 97�� ���ְ� 13�� ���Ѵ��� ��ⷯ 26�� �ϰ� �ٽ� �� ���� ���ؼ� ����Ѵ�.
*/
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
string str;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    getline(cin, str);
    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') cout << (char)((str[i] - 65 + 13) % 26 + 65);
        else if (str[i] >= 'a' && str[i] <= 'z') cout << (char)((str[i] - 97 + 13) % 26 + 97);
        else cout << str[i];
    }

    return 0;
}