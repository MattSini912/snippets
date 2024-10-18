#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	ifstream in("input.txt");
	ofstream out("output.txt");
	
	int task;
	for(task=1; task<=100; task++){
		int N;
		in>>N;
		for(int i=0;i<N;i++){
			//code
		}
		out<<endl;
	}
	in.close();
	out.close();
	return 0;
}
