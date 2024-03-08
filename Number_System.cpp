// // Ques-1: Binary to octal
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//    string s;
//    cin>>s;

//    if(s.length()%3==1){
//     s= "00"+s;
//    }
//    if(s.length()%3==2){
//     s= "0"+s;
//    }
//    string result ="";
//    for(int i=0; i<s.length(); i+=3){
//       int temp =(s[i]-'0')*4 + (s[i+1]-'0')*2 + (s[i+2]-'0')*1;
//       result.push_back(temp + '0');
//    }
//    cout<<result;
//     return 0;
// }

// // // Ques-2: Decimal to Binary
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int num;
//    cin>>num;
//    string ans="";
//    while(num>0){
//      int bit = num&1;
//      ans+= (bit+'0');
//      num= num>>1;
//    }
// //    ans+= num+'0';
//   reverse(ans.begin(), ans.end());
//    cout<<ans;
//     return 0;
// }

// // Ques-3: Decimal to Octal
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int num;
//     cin >> num;
//     string ans = "";
//     while (num !=0)
//     {
//         int bit = num%8;
//         ans += (bit + '0');
//         num = num /8;
//     }
//     reverse(ans.begin(), ans.end());
//     cout << ans;
//     return 0;
// }

// // Ques-4, 5: Octal to decimal || and || octal to  Binary
// #include <bits/stdc++.h>
// using namespace std;

// int octalToDec(int num)
// {
//     int ans = 0, i = 0;
//     while (num > 0)
//     {
//         int bit = num % 10;
//         num = num /= 10;
//         ans += (bit * pow(8, i));
//         i++;
//     }
//     return ans;
// }
// string decToBin(int num)
// {
//     string ans = "";
//     while (num != 0)
//     {
//         int bit = num % 2;
//         ans += (bit + '0');
//         num = num / 2;
//     }
//     reverse(ans.begin(), ans.end());
//     return ans;
// }
// int main()
// {
//     int num;
//     cin >> num;
//     int dec = octalToDec(num);
//     // cout<<dec;
//     cout << decToBin(dec);
//     return 0;
// }

// Ques-6: Number To Words
#include <bits/stdc++.h>
using namespace std;
int countOfDigit(int num)
{
    int cnt = 0;
    while (num > 0)
    {
        cnt++;
        num = num / 10;
    }
    return cnt;
}

string numToWord(int num)
{
    string ans = "";
    string str = to_string(num);
    string singleDigits[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string twoDigits[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string tensmultiple[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninty"};
    string tensPower[] = {"Hundred", "Thousand"};
    int len = countOfDigit(num);
    if (len == 1)
    {
        ans += str[0] - '0';
        return ans;
    }
    else if (len == 2)
    {
        if (str[0] == 1)
        {
            ans += twoDigits[str[1] - '0'];
        }
        else
        {
            ans += tensmultiple[str[0] - '0'];
            if (str[1] - '0' != 0)
            {
                ans += " " + singleDigits[str[1] - '0'];
            }
        }
    }
    else if (len == 3)
    {
        ans += singleDigits[str[0] - '0'] + " " + tensPower[0];
        int rem = stoi(str.substr(1));
        if (rem != 0)
        {
            ans += numToWord(rem);
        }
    }
    else
    {
        ans += singleDigits[str[0] - '0'] + " " + tensPower[1];
        int rem = stoi(str.substr(1));
        if (rem != 0)
        {
            ans += numToWord(rem);
        }
    }

    return ans;
}

int main()
{
    int num;
    cin >> num;
    if (countOfDigit(num) > 4)
    {
        cout << "Enter 4 digit number only....";
    }
    else
    {
        cout << numToWord(num);
    }
    return 0;
}