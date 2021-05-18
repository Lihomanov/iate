#include <iostream>
#include <vector>
#include <string>

using namespace std;

void siftDown(int i, vector <int> &a){
    while (2 * i + 1 < a.size()){
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        int j = left;
        int t;
        if (right < a.size() and a[right] > a[left])
            j = right;
        if (a[i] >= a[j])
            break;
        t = a[i];
        a[i] = a[j];
        a[j] = t;
        i = j;
    } 
}
    

void siftUp(int i, vector <int> &a){
    int t;
    while (a[i] > a[(i - 1) / 2]){
        t = a[i];
        a[i] = a[(i - 1) / 2];
        a[(i - 1) / 2] = t;
        i = (i - 1) / 2;
    }
}


int extractMax(vector <int> &a){
    int max = a[0];
    a[0] = a[a.size() - 1];
    a.pop_back();
    siftDown(0, a);
    return max;
}


void insert(int key, vector <int> &a){
    a.push_back(key);
    siftUp(a.size() - 1, a);
}


int main() {
    vector <int> a;
    int n;
    int number;
    string command;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> command;
        if (command == "Insert"){
            cin >> number;
            insert(number, a);
        }
        else{
            cout << extractMax(a) << endl;
        }
    }
    return 0;
}
