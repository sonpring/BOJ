#include <iostream>

int main()
{
    int num;
    int get = 1;
    int result = 0;
    std::string s;
    std::cin >> num;
    for (int a = 0; a < num; a++)
    {
        std::cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s.length() == 1)
            {
                break;
            }

            for (int j = i; j >= 0; j--)
            {
                if (s[i] != s[j])
                {
                    if (get == 0)
                    {
                        break;
                    }
                    for (int k = j - 1; k >= 0; k--)
                    {
                        if (s[i] == s[k])
                        {
                            get = 0;
                            break;
                        }
                    }
                }
            }
        }
        result += get;
        get = 1;
    }
    std::cout << result;
    return 0;
}

// ���� Ž������ �����鼭
// i �� �״�� ��������
// j �� i�κ��� 0���� ���鼭 ������ �������� ������ ���� �ִ��� ����
// ������ result ���� --;