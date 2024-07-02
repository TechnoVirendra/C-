#include<bits/stdc++.h>
using namespace std;

void mergeSort(int list[],int low,int mid,int high){
    int j, mi, k, lo, temp[50];
    lo = low;
    j = low;
    mi = mid + 1;
    while ((lo <= mid) && (mi <= high)){
        if (list[lo] <= list[mi]){
            temp[j] = list[lo];
            lo++;
        }
        else{
            temp[j] = list[mi];
            mi++;
        }
        j++;
    }
    if (lo > mid){
        for (k = mi; k <= high; k++){
            temp[j] = list[k];
            j++;
        }
    }
    else{
        for (k = lo; k <= mid; k++){
            temp[j] = list[k];
            j++;
        }
    }
    for (k = low; k <= high; k++){
        list[k] = temp[k];
    }
}

void partition(int list[],int low,int high){
    int mid;
    if(low < high){
        mid = (low + high) / 2;
        partition(list, low, mid);
        partition(list, mid + 1, high);
        mergeSort(list, low, mid, high);
    }
}

int main(){
    int list[50];
    int j, size;
    cout<<"Enter total number of elements : "<<size<<"\n";
    cout<<"Enter the elements:\n";
    for(j = 0; j < size; j++){
        cin>>list[j];
    }
    partition(list, 0, size - 1);
    cout<<"After merge sort:\n";
    for(j = 0;j < size; j++){
        cout<<list[j]<<"    ";
    }
    return 0;
}