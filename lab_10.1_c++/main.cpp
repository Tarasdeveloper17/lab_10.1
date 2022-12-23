#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

void CreateTXT(char* fname)
{
    ofstream fout(fname);
    string s;
    cout << "enter line: "; getline(cin, s);
    fout << s << endl;
    cout << endl;
}

void PrintTXT(char* fname)
{
    ifstream fin(fname);
    string s;
    while (getline(fin, s))
    {
        cout << s << endl;
    }
    cout << endl;
}
int CheckString(char* fname)
{
    ifstream fin(fname);
    string s;
    int k = 0;
    while (getline(fin, s))
    {
        for (unsigned i=0; i < s.length(); i++)
        {
            if (('n' == s[i]  && 'o' == s[i+1]) ||( 'o' == s[i] && 'n' == s[i+1]))
                k++;
        }
    }
    return k;

}
int main()
{
    char fname[100] = "t.txt";
    CreateTXT(fname);
    PrintTXT(fname);
    if(CheckString(fname) != 0)
    {
        cout<<"Yes";
    }
    else
        cout<<"No";
    return 0;
}
