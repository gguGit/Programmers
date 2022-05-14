#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

string solution(string new_id) 
{
    string answer = "";    
    
     //step1
    for(int i=0;i<new_id.size();i++)
    {
        char temp;
        temp = tolower(new_id[i]);
        answer += temp;       
    }
    
    //step2
    for(int j=0;j<answer.size();j++)
    {
        if(answer[j] != '-' && answer[j] != '_' && answer[j] != '.' && 
          isdigit(answer[j]) != true && 
          !islower(answer[j]))
        {
            answer.erase(j,1);
            j--;
        }        
    }
    
    //step3
    for(int k=1;k<answer.size();k++)
    {
        if(answer[k-1] == '.' && answer[k] == '.')
        {
            answer.erase(k,1);
            k--;
        }
    }
    
    //step4
    if(answer[0] == '.')
    {
        answer.erase(0,1);
    }
    else if(answer[answer.size()-1] == '.')
    {
        answer.erase(answer.size()-1,1);
    }
    
    //step5
    if(new_id.size()==0 || answer.size()==0)
    {
        new_id = "a";
        answer = "a";
    }
    
    //step6
    if(answer.size()>15)
    {
        answer.erase(15,answer.size()-15);
    }
    if(answer[answer.size()-1]=='.')
    {
        answer.erase(answer.size()-1,1);
    }
    
    //step7
    if(answer.size()<3)
    {
        while(answer.size()<3)
        {
            answer += answer[answer.size()-1];
        }
    }
    
    return answer;
}
