#include <iostream>
#include <vector>

using namespace std;

int check_forward(int i, int j, vector<vector<int>> graph);
int check_backwards(int i, int j, vector<vector<int>> graph);

int main(){
	int max;
	cin >> max;
	vector<vector<int>> matrix(max,0);	
	int i = 0, j = 1;
	for (int k = 0; k < max; k++){
		

	}

	return 0;
}

int check_forward(int i, int j, vector<vector<int>> graph){
	int current = i - 1;
	int result = 0;
	int max = graph.size() - 1;
	while(current != j){
		if (current != max){ 
			result = result + graph[current][current+1];
			current++;
		}
		else{
			result = result + graph[current][0];
			current = 0;
		}
	}		
	return result;
}

int check_backwards(int i, int j, vector<vector<int>> graph){
	int current = i - 1;
	int result = 0;
	int max = graph.size() - 1;
	while(current != j){
		if (current != 0){ 
			result = result + graph[current][current-1];
			current--;
		}
		else{
			result = result + graph[max][0];
			current = max;
		}
	}		
	return result;
}
