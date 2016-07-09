#include <iostream>
#include <vector>

using namespace std;

void Tri_bulles(vector<int> &T);
void echanger(int &a, int &b);

int main(){

    vector<int> v;

    v.push_back(5);
    v.push_back(3);
    v.push_back(9);
    v.push_back(1);
    v.push_back(12);
    v.push_back(0);

    Tri_bulles(v); // le tableau est modifié

    for (int i=0; i<(int)v.size(); i++)
        cout << v.at(i) << endl;


    return 0;
}

void Tri_bulles(vector<int> &T){

    int taille = T.size();

    for (int i=taille-1; i>0; i--){
        for (int j=0; j<i; j++){
            if (T[j+1] < T[j])
                echanger(T[j+1], T[j]);
        }
    }
}

void echanger(int &a, int &b){

    int temp = b;

    b = a;
    a = temp;

}
