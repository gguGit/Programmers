#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
  
    /*
      3으로 나눈 나머지에 따라 수가 변환 된다.
      단, 3으로 나눈 나머지가 0인 경우에 3이 아니라 4로 변환이 되므로
      나머지를 인덱스로 보았을 경우 해당 배열을 가지게 된다.
    */
    string res[3]={"4","1","2"};
    
    while(n>0)
    {
        answer=res[n%3]+answer; //가장 오른쪽의 수부터 채워나감
        if(n%3==0)
        {
            /*
              나머지가 0인 경우 3으로 나눈 몫이 하나 줄어든다.
            */
            n=n/3-1;
        }
        else
        {
            n/=3;
        }
    }
    
    return answer;
}
