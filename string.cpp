#include <iostream>
#include <string>

using namespace std;

int main()
{
 string s1; //empty
 string s2{"France"};
 string s3{s2};
 string s4{s2,0,2};// Fr
 string s5{3,'x'};
 string s7{s2 +" "+ s5};

 cout << s7 <<endl;
 //extracts of string
 cout << s7.substr(1 ,3) <<endl;
 /*
 Mot so ham khac
string str = "Hello";
cout << str.size(); // 5
cout << str.length(); // 5

string str = "";
if (str.empty())
    cout << "Chuỗi rỗng";


string str = "Hello";
str.append(" World"); // str = "Hello World"
str += "!"; // str = "Hello World!"

string str = "HellWorld";
str.insert(4, "o "); // str = "Hello World"


string str = "Hello World";
str.erase(5, 6); // str = "Hello"

string str = "Hello World";
str.replace(6, 5, "CPP"); // str = "Hello CPP"

string str = "Hello World";
size_t pos = str.find("World"); // pos = 6

string str1 = "Hello";
string str2 = "World";
int result = str1.compare(str2); // result < 0 vì 'H' < 'W'

string str = "Hello";
char ch = str.at(1); // ch = 'e'
char ch2 = str[1]; // ch2 = 'e'

 */
}
