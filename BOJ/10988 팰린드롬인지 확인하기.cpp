/*
����
���ĺ� �ҹ��ڷθ� �̷���� �ܾ �־�����. �̶�, �� �ܾ �Ӹ�������� �ƴ��� Ȯ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Ӹ�����̶� ������ ���� ���� �Ųٷ� ���� �� �Ȱ��� �ܾ ���Ѵ�.

level, noon�� �Ӹ�����̰�, baekjoon, online, judge�� �Ӹ������ �ƴϴ�.

�Է�
ù° �ٿ� �ܾ �־�����. �ܾ��� ���̴� 1���� ũ�ų� ����, 100���� �۰ų� ������, ���ĺ� �ҹ��ڷθ� �̷���� �ִ�.

���
ù° �ٿ� �Ӹ�����̸� 1, �ƴϸ� 0�� ����Ѵ�.

Ǯ��
���ڿ� ������ �߶� ���Ѵ�.
*/
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

string str, str2;
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> str;
	str2 = str;
	reverse(str2.begin(), str2.end());

	if (str.substr(0, (str.length() / 2)) == str2.substr(0, (str.length() / 2))) cout << 1;
	else cout << 0;
	return 0;
}