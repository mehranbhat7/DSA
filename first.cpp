// #include <iostream>
// using namespace std;
// int main(){
//     int age;
//     cout << "please enter your age ! "<< endl;
//     cin >> age ;
//     cout << " your age is :" << age << endl;

//     int distance ;
//     cout << "what is the distanec from srinagar to jammu\n";
//     cin >> distance;
//     cout <<"the total distanec is :" << distance << endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout << "enetr a :" ;
//     cin >> a;
//     cout << "enetr b :" ;
//     cin >> b;
//     int divide = a % b;
//     cout<< divide << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int age ;
//    cout << "Enter your age\n";
//    cin >> age;
//     if(age >= 18){
//         cout << "you can Vote\n";
//     }else{
//         cout << "you are not eligible to Vote\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
// int n ;
// cout << "enter any number\n";
// cin >> n;
// if(n % 2 == 0){
//     cout << "This number is evn\n";
// }else{
//     cout << "This number is odd\n";
// }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
// int marks ;
// cout << "enter your marks obtained\n";
// cin >> marks;
// if(marks >= 90){
//     cout << "grade A\n";
// }else if(marks >= 80 && marks <= 90 ){
//     cout << "grade B\n";
// }else if(marks >= 50 && marks <= 80){
//     cout << "grade C\n";
// }else{
//     cout << "fail\n";
// }
// char a ;
// cout << "enter :\n";
// cin >> a;
// if((a >= 'a' && a <= 'z')){
//     cout << "lowercase\n";
// }else{
//     cout << "uppercase\n";
// }
// int a = 17;
// a > 10 ? cout << "good\n" :cout << "bad\n";
// return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int count = 1;
//     int num ;
//     cout << "Enter any number\n";
//     cin >> num;
//     while(count <= num){
//         cout << count << " ";
//         count++;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout << "enter:\n";
//     cin >> n;
//    for(int i = 0;i<=n;i++){
//     cout << i << " ";
//    }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//   int num = 50;
//   int count = 1;
//   int sum = 0;
//   for(count = 0; count <= num; count++){
//    sum = sum + count;
 
//   }
//     cout<< sum << endl;
  
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//   int n = 15;
//   int i = 1;
//   int sum = 0;
//   while(i<=n){
//     sum = sum + i;
//     i++;
//   }
//   cout<< sum <<endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//   int n = 10;
// int i = 0;
// int sum = 0;
// while(i <= n){
//   if(i % 2 == 0){
//     sum = sum + i;
//   }
//   i++;
// }
// cout << sum << endl;
//     return 0;
// }


  // int n = 10;
  // int sum = 0;
  
  // for (int i = 0; i <= n; i++){
  //   if(i % 2 != 0){
  //       cout << i << endl;
  //       sum = sum + i;
  //   }
  // }
  // cout << sum << endl;







// #include <iostream>
// using namespace std;
// int main(){
//   int n = 9;
 
//  for(int i = 2; i <= (n-1); i++){
//   if(n % i == 0){
//     cout << n << " is not a prime number.\n";
//     return 0;
//   }else{
//     cout << n << " is a prime number.\n";
//     break;
//   }
//  }
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//   for(int i = 1; i <= 20; i++){
  
//   for(int i = 1; i <=35; i++){
//     cout << "*";
//   }
//   cout << endl;
//   }
  
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//   int n = 15;
//   for(int i =0;i<n;i++){
//     char ch = 'A';
//     for(int j=0;j<n;j++){
//       cout << ch << " ";
//       ch++;
//     }
//     cout << endl;
//   }
//   return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//   int n = 3;
//   char ch= 'A';
 
//  for(int i =0;i<n;i++){
//   for(int j =0;j<n;j++){
//     cout << ch<< "   ";
//    ch++;
//  }
//  cout << endl;
//  }
//   return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
// int n = 7;
// char ch = 'A';

// for(int i =0; i<n;i++){
 
//   for(int j=0;j <i+1;j++){
//     cout << ch << " ";
//   }
//   cout << endl;
//      ch++;
// }
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
// int n = 3;
// for(int i = 0; i < n; i++){
//   for(int j =1; j <=i +1 ; j++){
//     cout << j << " ";
//   }
//   cout << endl;
// }
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
// int n = 7;
// for(int i = 0; i < n; i++){
//   for(int j = i+1; j>0; j--){
//     cout << j << " ";
//   }
//   cout << endl;
// }
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
// int n = 4;
// char num = 'a';
// for(int i = 0; i < n; i++){
//   for(int j=n + 1; j< 0;j++){
//     cout << num << " ";
//     num++;
//   }
//   cout << endl;
// }
//   return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
// int n = 5;
// for(int i = 0; i<n;i++){
//   for(int j = 0; j < i; j++){
//     cout << " ";
//   }
//   for(int j =0; j< n-i; j++){
//     cout << i+ 1 << " ";
//   }
//   cout << endl;
// }
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
// int n = 5;
// for(int i =0;i<n;i++){
//   for( int j=0;j<=n-i-1;j++){
//     cout << " ";
//   }
//   for(int j=1;j <= i+1;j++){
//     cout << j;
//   }
//   for(int j= i; j >0;j--){
//     cout << j;
//   }
//   cout << endl;
// }
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//   int n = 4;
// for(int i=0;i<n;i++){
//   for(int j=1;j<=n;j++){
//     cout << j ;
//   }
//   cout << endl;
// }
//   return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
//   int n = 3;
//   int num = 1;
// for(int i = 0;i<n;i++){
//   for(int j=1;j<=n;j++){
//     cout << num;
//     num++;
//   }
//   cout << endl;
// }
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//   int  n = 4;
//   int num = 1;
//   for(int i =0;i<n;i++){
//     for(int j=0;j< i+1;j++){
//       cout << num;
//     }
//     cout << endl;
//       num++;
//   }
//   return 0;
// }

#include <iostream>
using namespace std;
int main(){
  int  n = 4;
  int num = 1;
  for(int i =0;i<n;i++){
    for(int j=0;j< i+1;j++){
      cout << j+1;
    }
    cout << endl;
      
  }
  return 0;
}