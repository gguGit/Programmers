#include <string>
#include <iostream>
#include <cctype>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int p=0;
    int y=0;   
    for(int i=0;i<s.size();i++)
    {
        s[i] = tolower(s[i]);
        if(s[i] == 'y')
            y++;
        else if(s[i] == 'p')
            p++;
    }

    if(y != p)
        answer=false;
    
    return answer;
}
