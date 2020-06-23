#include <iostream>
#include<fstream>
#include "Map.h"
#include"Flows.h"
using namespace std;


int main() {
	
	ifstream input("input.txt");
	Flows* flow=new Flows(input);

	
	// Выводим максимальный поток
	int max = flow->max_flow();

	 input.close();
	 delete flow;
	cout <<"Max flow: "<< max << endl;
	cin.get();
	return 0;
}