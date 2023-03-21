// 014.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
#include <iostream>
#include <string>

using namespace std;
int main()
{
    string st,st2;
    cin >> st;
    int i;
    for (i = st.size()-1;i>=0; i--)
    {
        st2 += st[i];
    }
    if (st2 == st) { cout << "YES\n"; }
    else
    {
        cout << "NO\n";
    }
}
