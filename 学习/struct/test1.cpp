#include<iostream>
using namespace std;

struct stu{
    string name;
    int age;
    int score;
};

int main(){
    struct stu s={"张三",18,100};
    struct stu *p=&s;
    cout<<p->age;
    return 0;
}