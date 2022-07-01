#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int index=0; //문자열 인덱스를 비교하기 위함

bool comp_index(string s1, string s2)
{
    //두 문자열의 index번째 글자가 동일하다면 오름차순으로 정렬
    if(s1[index]==s2[index])
    {
        return s1<s2;
    }
    return s1[index]<s2[index];
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    index=n;
    
    sort(strings.begin(),strings.end(),comp_index);
    
    for(string s:strings)
    {
        answer.push_back(s);
    }
    
    return answer;
}
