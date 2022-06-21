#include <iostream>

using namespace std;

const int MAX = 4;

class Tensor{
private:
int v[MAX];


public:
void input(int v[MAX]){
  cout<<"Enter element : "<<endl;
  for(int i=0;i<MAX;i++){
    cin>>v[i];
  }
}

void sort(int v[MAX]){
  int x=0;
  for(int i=0;i<MAX-1;i++){
    for(int j=i+1;j<MAX;j++){
      if(v[i]>v[j]){
      x = v[i];
      v[i] = v[j];
      v[j] = x;
        }
    }
  }
}

void print(int v[MAX]){
for(int i=0;i<MAX;i++){
cout<<v[i]<< ",";
  
}
}

};

int main(){
int v[MAX];
Tensor t;
  t.input(v);
  t.sort(v);
  t.print(v);
  


  
}