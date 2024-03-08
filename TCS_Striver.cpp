// // Q-1 --> Check if given year is a leap year or not
// #include <bits/stdc++.h>
// using namespace std;
// bool solve(int year)
// {
//     bool flag = false;
//     if (year % 400 == 0)
//     {
//         flag = true;
//     }
//     else if (year % 4 == 0 && year % 100 != 0)
//     {
//         flag = true;
//     }
//     if (flag)
//     {
//         cout << "Leap year" << endl;
//         return true;
//     }
//     else
//     {
//         cout << "Not a leap year" << endl;
//         return false;
//     }
// }
// int main()
// {
//     cout << "Enter year" << endl;
//     int year;
//     cin >> year;
//      solve(year);
//     return 0;
// }

// // Q-2 Check if a number is Automorphic Number
// #include <bits/stdc++.h>
// using namespace std;

// // int last2Dig(int num)
// // {
// //     int square = num * num;
// //     int res = 0;
// //     int dig1 = square % 10;
// //     num /= 10;
// //     int dig2 = square % 10;
// //     num /= 10;
// //     res = dig2 * 10 + dig1;
// //     return res;
// // }
// // bool isAutomorphic(int num)
// // {
// //     int lastTwoDigit = last2Dig(num);
// //     if (num == lastTwoDigit)
// //     {
// //         cout << "Number is an Automorphic\n";
// //         return true;
// //     }
// //     cout << "Number is not an Automorphic\n";
// //     return false;
// // }
// bool isAutomorphic(int num)
// {
//     int square= num*num;
//     while(num>0){
//         if(num%10!=square%10){
//             cout << "Number is not an Automorphic\n";
//             return false;
//         }
//         num /= 10;
//         square/=10;
//     }
//         cout << "Number is an Automorphic\n";
//         return true;
// }
// int main()
// {
//     int num;
//     cout << "Enter number \n";
//     cin >> num;
//     isAutomorphic(num);
//     return 0;
// }

// // Q-3>> Check if a number is a Strong Number or not
// #include<bits/stdc++.h>
// using namespace std;

// int fact(int num){
//     int res=1;
//     for(int i=1; i<=num; i++){
//         res*=i;
//     }
//     return res;
// }
// bool strongNumber(int num){
//     int temp= num;
//     int sum=0;
//     while(temp>0){
//         int digit= temp%10;
//    sum+= fact(digit);
//    temp/=10;
//     }
//     if(sum==num){
//    cout << "Number is Strong Number\n";
//    return true;
//     }
//    cout << "Number is  not Strong Number\n";
//     return false;
// }
// int main(){
//    int num;
//    cout<<"Enter number\n";
//    cin>>num;
//    strongNumber(num);
//     return 0;
// }

// // Q - 4 >> Find GCD of two numbers
// #include<bits/stdc++.h>
// using namespace std;
// int GCD(int num1, int num2){
//     if(num2==0){
//         return num1;
//     }
//     return GCD(num2, num1%num2);
// }
// int main(){
//    int num1, num2;
//    cout<<"Enters Numbers\n";
//    cin>>num1>>num2;
//    cout<<GCD(num1, num2);
//     return 0;
// }

// // Q-4>>Find LCM of two numbers
// #include <bits/stdc++.h>
// using namespace std;
// int GCD(int num1, int num2)
// {
//     if (num2 == 0)
//     {
//         return num1;
//     }
//     return GCD(num2, num1 % num2);
// }
// int main()
// {
//     int num1, num2;
//     cout << "Enters Numbers\n";
//     cin >> num1 >> num2;
//     int hcf= GCD(num1, num2);
//     int lcm =(num1*num2)/hcf;
//     cout<<lcm<<endl;
//     return 0;
// }

// // Q - 4 >> Check if the given number is Harshad(Or Niven) Number
// #include<bits/stdc++.h>
// using namespace std;
// int sumOfDigit(int num){
//     int sum=0;
//     while(num>0){
//         sum+= num%10;
//         num/=10;
//     }
//    return sum;
// }
// bool isHarshad(int num){
//     int sumDig= sumOfDigit(num);
//     if(num%sumDig==0){
//         cout<<"Given number is a Harshad Number\n";
//         return true;
//     }
//         cout<<"Given number is not a Harshad Number\n";
//     return false;
// }
// int main(){
//    int num;
//    cout<<"Enter number\n";
//    cin>>num;
//    isHarshad(num);
//     return 0;
// }

// // Q - 5 >> Check if the number is an abundant number or not
// #include<bits/stdc++.h>
// using namespace std;
// bool isAbundant(int num){
//     int sum=0;
//     for(int i=1; i<=num/2; i++){
//         if(num%i==0){
//             sum+=i;
//         }
//     }
//     if(sum>num){
//         cout << "Given number is a Abundant Number\n";
//                 return true;
//     }
//     cout << "Given number is not a Abundant Number\n";
//     return false;
// }
// int main(){
//        int num;
//        cout<<"Enter number\n";
//        cin>>num;
//        isAbundant(num);
//         return 0;
// }

// // Q - 6 >> Permutations in which N people can occupy R seats
// #include<bits/stdc++.h>
// using namespace std;
// int fact(int num){
//     if(num<0){
//         return -1;
//     }
//     int res=1;
//     for(int i=1; i<=num; i++){
//         res*=i;
//     }
//     return res;
// }
// int main(){
//            int num, r;
//            cout<<"Enter total number and number of people you wanna arrange\n";
//            cin>>num>>r;
//            if(num<r){
//             cout<<(-1)<<endl;
//            }
//            else{
//             int n = fact(num);
//             int d = fact(num - r);
//             if (n > d)
//             {
//                 cout << (n / d) << endl;
//             }
//            }
//     return 0;
// }

// // Q - 7 >> Program to Find Roots of a quadratic equation
// #include<bits/stdc++.h>
// using namespace std;
// void Roots(int a, int b, int c){
//     int dis = (b*b)-(4*a*c);
//     int sq_val = sqrt(dis);
//      if(dis>0){
//    cout<<"Roots are Real and Different\n";
//    int root1 = (double)(-b + sq_val) / (2 * a);
//    int root2 = (double)(-b - sq_val) / (2 * a);
//    cout<<"Roots are- "<<root1<< " and "<<root2<<endl;
//      }
//      else if(dis==0){
//    cout<<"Roots are Real and Equal\n";
//    int root1 = (double)(-b)/(2*a);
//    cout<<"Roots are- "<<root1<<endl;
//      }
//      else{
//    cout << "Roots are Imaginary\n";
//    int realPart= (double)(-b)/(2*a);
//    int imgPart= (double)(sq_val)/(2*a);
//    cout << "Roots are- "
//         << "(" << (realPart) << " +i"<<(imgPart) << ")"
//         << " and "
//         << "(" << (realPart) << " -i"<<(imgPart) << ")"<< endl;
//      }
//      return;
// }
// int main(){
//    int  a, b, c;
//    cin>>a>>b>>c;
//    Roots(a, b, c);
//     return 0;
// }

// // Q - 8 >> Express given number as Sum of Two Prime Numbers
// #include<bits/stdc++.h>
// using namespace std;
// bool isPrime(int num){
//     for(int i=2; i<=num/2;  i++){
//         if(num%i==0){
//      return false;
//         }
//     }
//     return true;
// }
// void solve(int num){
//     int first, second;
//     for(int i=2; i<=num/2; i++){
//       if(isPrime(i)){
//         first= i;
//         second= num-first;
//         if(isPrime(second)){
//             break;
//         }
//       }
//     }
//     cout<<"Pair is- ("<<first<<", "<<second<<")"<<endl;
// }
// int main(){
//            int num;
//            cout<<"Enter number\n";
//            cin>>num;
//     solve(num);
//     return 0;
// }

// // Q-9> Program to Add two fractions
// #include<bits/stdc++.h>
// using namespace std;
// int GCD(int num1, int num2)
// {
//     if (num2 == 0)
//     {
//         return num1;
//     }
//     return GCD(num2, num1 % num2);
// }
// void sum(int n1, int n2, int d1, int d2){
//       int den=(d1*d2)/ GCD(d1, d2);
//       int res =n1*(den/d1) + n2*(den/d2);
//       cout<<"Sum is "<<res<<"/"<<den<<endl;
// }
// int main(){
//    int num1, num2, den1, den2;
//    cout<<"Enter numerator and denominator for first number\n";
//    cin>>num1>>den1;
//    cout<<"Enter numerator and denominator for second number\n";
//    cin>>num2>>den2;
//    sum(num1, num2, den1, den2);
//     return 0;
// }

// Q - 11 > Replace all the 0’s with 1 in a given integer
#include<bits/stdc++.h>
using namespace std;
int main(){
   int num;
   cin>>num;
   int ans=0, tmp=1;
   int i=0;
   while(num>0){
    int rem=num%10;
    cout<<rem<<" "<<endl;
    if(rem==0){
        rem=1;
    }
    ans= rem*tmp + ans;
    cout<<ans<<endl;
    num/=10;
    tmp*=10;
    i++;
   }

   cout<<ans;
    return 0;
}