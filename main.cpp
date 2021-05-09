#include <iostream>
#include <memory>
#include <vector>
#include <list>
#include <queue>
#include <stdlib.h>
using namespace std;

struct yType
{
    int a;
    int b;
};
queue<yType> *que= new queue<yType>();
void yAdd(int x, int y){ 
    yType tmp;
    tmp.a =x;
    tmp.b=y;
    que->push(tmp);
}

int main(){ 

    for(int i=0;i<100;i++){
        yAdd(i,i);
    }
    
    for(int i=0;i<100;i++){
        cout << que->size() << endl;
        yType a = que->front();
        cout <<a.a << "  "<< a.b <<endl;
        que->pop();        
    }
    vector<int> vec;
    vec.push_back(5);
    size_t a=5;

    

    return 0;
}
