#include <iostream>  
#include <set>  
#include<string>
using namespace std;

class Mycompare
{
public:
    bool operator()(int v1, int v2)const//����const��ֹ����
    {
        return v1 > v2;
    }
};

set<int, Mycompare> s1;//�Ӵ�С��������

int main()
{
    string a, b, c;
    getline(cin, a);
    for (int i = 0; i < a.size(); i++)
    {
        int num = a[i] - '0';
        s1.insert(num);
    }
    

    set<int, Mycompare>::iterator it;
    int arri = 0;
    int arr[10], index[20];
    for (it = s1.begin(); it != s1.end(); it++)
    {
        arr[arri++] = *it;
    }//ʹ��arr�������
    cout << "int[] arr = new int[]{";
    for (int i = 0; i < arri - 1; i++)
    {
        cout << arr[i] << ",";
    }
    cout << arr[arri-1] << "};" << endl;//������Ч
    for (int i = 0; i < a.size(); i++)
    {
        int d = a[i] - '0';
        for (int j = 0; j < arri; j++)
        {
            if (d == arr[j])
            {
                index[i] = j;
            }
        }
    }
    cout << "int[] index = new int[]{";
    for (int i = 0; i < a.size() - 1; i++)
        cout << index[i] << ',';
    cout << index[a.size() - 1] << "};" << endl;
    return 0;
}