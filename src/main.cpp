#include <iostream>
#include <memory>
#include <vector>
#include <list>
#include <queue>
#include <stdlib.h>
#include "swap.h"
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

int main(int argc, char **argv){ 

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

    int val1 = 10;
    int val2 = 20;
    cout << "before swap: val1=" << val1 << ", val2=" << val2 << endl;
    swap(val1, val2);
    cout << "after swap: val1=" << val1 << ", val2=" << val2 << endl;
    return 0;

}
