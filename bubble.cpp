#include<iostream>
using namespace std;

int set[] = {1,0};
//Bubble sort
auto sort()->void{
  int tam = sizeof set / sizeof set[0];
  for(int i = 0; i < tam; i++){ //Each element has to find it´s place in the array
    for(int j = 0, k = 1; j < tam - 1; j++, k++){//Swapping 
      if(set[j]>set[k]){
        int aux = set[j];
        set[j] = set[k];
        set[k] = aux;
      }
    }
  }
}

int main(){
  sort();
  for(int i: set){
    cout<<i<<" ";
  }
  return 0;
}
