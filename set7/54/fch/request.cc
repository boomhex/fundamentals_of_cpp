#include "fch.ih"

char Fch::request() const
{
    string ans;
    getline(cin, ans);
    return ans[0];
}