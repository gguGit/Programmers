#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) 
{
    int answer = 0;
    
    sort(d.begin(), d.end());
    
    for(auto b:d)
    {
        if(budget-b>=0)
        {
            budget-=b;
            answer++;
        }
        else
        {
            break;
        }
    }
    
    return answer;
}
