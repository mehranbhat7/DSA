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
#include <iostream>
using namespace std;
int main(){
  int num = 50;
  int count = 1;
  int sum = 0;
  for(count = 0; count <= num; count++){
   sum = sum + count;
 
  }
    cout<< sum << endl;
  
    return 0;
}
#include <iostream>
using namespace std;
int main(){
  int n = 15;
  int i = 1;
  int sum = 0;
  while(i<=n){
    sum = sum + i;
    i++;
  }
  cout<< sum <<endl;
    return 0;
}