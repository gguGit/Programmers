#include <vector>
#include <iostream>
using namespace std;

bool isPrime(int num)
{
    for(int i=2;i*i<=num;i++)
    {
         if(num % i == 0) 
             return false;
    }
    return true;
}

int solution(vector<int> nums) 
{
    int answer = -1;
    int sum=0;
    int res=0;

    for(int i=0;i<nums.size();i++)
    {
        for(int j=i+1;j<nums.size();j++)
        {
            for(int k=j+1;k<nums.size();k++)
            {
                sum=nums[i]+nums[j]+nums[k];
                if(isPrime(sum))
                    res++;
            }
        }
    }

    answer = res;
    return answer;
}
