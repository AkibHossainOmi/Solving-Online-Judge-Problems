#include<iostream>
using namespace std;
#include <algorithm>
int main()
{
    std::string s;
    int i,j,n,sum;
    int zero, one, two, three, four, five, six, seven, eight, nine;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        cin >> s;
        zero = std::count(s.begin(), s.end(), '0');
        one = std::count(s.begin(), s.end(), '1');
        two = std::count(s.begin(), s.end(), '2');
        three = std::count(s.begin(), s.end(), '3');
        four = std::count(s.begin(), s.end(), '4');
        five = std::count(s.begin(), s.end(), '5');
        six = std::count(s.begin(), s.end(), '6');
        seven = std::count(s.begin(), s.end(), '7');
        eight = std::count(s.begin(), s.end(), '8');
        nine = std::count(s.begin(), s.end(), '9');
        sum = zero*6+one*2+two*5+ three*5+four*4+five*5+six*6+seven*3+eight*7+nine*6;
        printf("%d leds\n",sum);
    }
    return 0;
}
