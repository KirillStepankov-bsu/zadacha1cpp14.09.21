#include <iostream>
#include <vector>
using namespace std;

int sum(int startt, const vector<int>& numbrs){
    int summ = 0;
    for(int i = startt; i<startt+3; i++)
        summ+=numbrs[i];
    
    return summ;
}

int main(){
    int n, num; cin >> n;
    vector<int> numbers;

    for(int i = 0; i<n; i++){
        cin >> num;
        numbers.push_back(num);
    }

    int max_sum = 0;

    for(int i = 0; i<numbers.size()-2; i++){
        if(sum(i, numbers)>max_sum)
            max_sum = sum(i, numbers);
    } 

    cout << max_sum;

}