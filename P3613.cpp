#include<iostream>
#include<vector>
#include<list>
#define ll long long

using namespace std;

int n,q;

class node{
private:
    int position;
    bool is_clear = true; // whether the box is clean
    ll integer;

public:
    node(int p, ll stuff, bool set = false):position(p), is_clear(set), integer(stuff){}
    int position_get(){
        return position;
    }
    bool is_clear_get(){
        return is_clear;
    }
    ll integer_get(){
        return integer;
    }
};
class pointer{
private:
    int number;
    node* p = nullptr;
public:
    pointer(int num, node* ptr){
        number = num;
        p = ptr;
    }
    int number_get(){
        return number;
    }
};

// search the link, when we want to load a file, 
// just add the node to the nodelist
// each cabinet is a struct, it has a queue which stores many stuff
int main()
{
    int type, i, j, k;
    // use vector to link vector<node>...
    // so that I can take it everytime I want to
    // and I can insert anything I want into the exact place
    vector<node> seq;
    vector<pointer> base;



    while(q--){
        cin >> type;
        if(type == 1){
            // means add stuff
            cin >> i >> j >> k;
            for(int q = 0; q < base.size() && base[q].number_get() != i; i++){
                break;
            }
            if(q != base.size()){
                // which means the base doesn't have this box seq
                
                base.push_back()
            }
        }
        else if(type == 2){
            // which means inquire the unique stuff

        }
        else{
            cout << "Wrong input type!" << endl;
        }
    }
}
