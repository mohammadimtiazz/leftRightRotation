#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

vector<int> leftRotation(int dim, vector<int> v){
	vector<int> leftRot(v.size());
	int pos;
	for(int i = 0; i < v.size(); i++){
		if (i + dim >=  v.size()){
			pos  = v.size()-dim -i;
			leftRot[i] = v[abs(pos)];
		}
		else
			leftRot[i] = v[i+dim];
	}

	return leftRot;
}



vector<int> rightRotation(int dim, vector<int> v){
	vector<int> rightRot(v.size());
	int pos;
	for(int i = v.size()-1; i >= 0; i--){
		if (i - dim <  0){
			pos  = dim + i -1;
			rightRot[i] = v[abs(pos)];
		}
		else
			rightRot[i] = v[i-dim];
	}

	return rightRot;
}


int main() {
	int arrSize, dim;
	cout << "given array size and dim for rotation: " << endl;
	cin >> arrSize >> dim;
	cout << endl;

	vector<int> arr(arrSize);

	cout << "insert array values: " << endl;
	for (int i = 0; i < arrSize ; i++){
		cin >> arr[i];
	}
	cout << endl;


	vector<int> leftRotRes;
	leftRotRes = leftRotation(dim, arr);

	cout << dim << " left rotation:" << endl;
	for (int i = 0; i < arrSize; i++){
		cout << leftRotRes[i] << " ";
	}
	cout << endl;


	vector<int> rightRotRes(arr.size());
	rightRotRes = rightRotation(dim, arr);

	cout << dim << " right rotation:" << endl;
	for (int i = 0; i < arrSize; i++){
		cout << rightRotRes[i] << " ";
	}


	return 0;

}