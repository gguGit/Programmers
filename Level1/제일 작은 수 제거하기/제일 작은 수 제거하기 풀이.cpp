#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    int min=arr[0];
    int index=0;
    
    for(int i=1;i<arr.size();i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
            index=i;
        }
    }
    
    arr.erase(arr.begin()+index);
    if(arr.size()<1)
        arr.push_back(-1);
    
    return arr;
}
