/*
- Accesing vector element
  myVector.at(0) or myVector[0];
- Intilize 3 element is 100
  vector<int> myVector(3,100) 
- 2D-vector
  vector < vector<int>> movie_rating
 {
  {1,2,3}
  { 2,3,4}
  {4,5,6}
 }
- size() kich thuoc vector 

push_back(): Thêm một phần tử vào cuối vector.
vector.push_back(value);

pop_back(): Loại bỏ phần tử cuối cùng của vector.
vector.pop_back();

size(): Trả về số lượng phần tử trong vector.
int size = vector.size();

empty(): Kiểm tra xem vector có trống không.
if (vector.empty()) {
    // vector rỗng
}

at(): Trả về tham chiếu đến phần tử tại một vị trí cụ thể trong vector.
int element = vector.at(index);

front(): Trả về tham chiếu đến phần tử đầu tiên của vector.
int firstElement = vector.front();

back(): Trả về tham chiếu đến phần tử cuối cùng của vector.
int lastElement = vector.back();

clear(): Xóa tất cả các phần tử trong vector.
vector.clear();

erase(): Xóa một hoặc một khoảng các phần tử từ vector.
vector.erase(iterator);
vector.erase(startIterator, endIterator);

insert(): Chèn một phần tử hoặc một khoảng các phần tử vào vector.
vector.insert(iterator, value);
vector.insert(iterator, startIterator, endIterator);

begin() và end(): Trả về iterator cho phần tử đầu tiên và vị trí sau phần tử cuối cùng của vector.
iterator = vector.begin();
iterator = vector.end();

*/
#include <iostream>
#include <vector>

int main() {
    // Khai báo một vector kiểu int
    std::vector<int> myVector;

    // Thêm phần tử vào vector
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);

    // Truy cập và in ra các phần tử của vector
        for (std::vector<int>::iterator it = myVector.begin() ; it != myVector.end();it++) {
        std::cout << *it << " ";
    }

    return 0;
}
