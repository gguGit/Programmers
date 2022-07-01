#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> p;
    queue<int> s;
    int days=1;
    int count=0;
    
    for(int i=0;i<progresses.size();i++)
    {
        p.push(progresses[i]);
        s.push(speeds[i]);
    }
    
    while(!(p.empty()))
    {
        int pro=p.front()+s.front()*days;
        
        /*
          맨 앞에 있는 기능이 완료되어야 다음 기능도 배포가 가능하므로,
          큐를 이용하여 맨 앞의 기능이 완료되어야 다음 기능의 진척도를 확인
        */
        if(pro>=100) //맨 앞의 기능이 완료
        {
            p.pop();
            s.pop();
            count++;
        }        
        else //완료되지 않음
        {
            if(count>0) //배포할 수 있는 기능의 개수가 0보다 클 때
            {
                answer.push_back(count);
                count=0;
            }
            days++;           
        }
        
        if(p.empty())
        {
            answer.push_back(count);
        } 
    }
    
    return answer;
}
