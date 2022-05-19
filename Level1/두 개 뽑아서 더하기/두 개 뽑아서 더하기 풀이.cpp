#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) 
{
    vector<int> answer;
    int size = numbers.size();
    
    for(int i=0;i<size;i++)
    {
        int sum=0;        
        for(int j=i;j<size;j++)
        {
            if(i!=j)
            {
                sum=numbers[i]+numbers[j];
                if(find(answer.begin(), answer.end(), sum) == answer.end())
                    answer.push_back(sum);
            }
        }
        sort(answer.begin(), answer.end());
    }
    
    return answer;
}
