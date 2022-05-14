#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) 
{
    int answer = 0;
    
    for (int i=0;i<=9;i++)
    {
        answer+=i;
    }
    
    for (int j=0;j<numbers.size();j++)
    {
        answer-=numbers[j];
    }
    
    return answer;
}
