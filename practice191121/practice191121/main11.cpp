#include<iostream> 
#include <vector>
#include<algorithm> 
using namespace std;

int getLuckyPacket(vector<int> x, int n, int pos, int sum, int multi) {
	int count = 0;
	
	for (int i = pos; i<n; i++){
		sum += x[i];
		multi *= x[i];
		if (sum > multi){
		
			count += 1 + getLuckyPacket(x, n, i + 1, sum, multi);
		}
		else if (x[i] == 1){
		      
			count += getLuckyPacket(x, n, i + 1, sum, multi);
		}
		else{
		           
			break;
		}       
		sum -= x[i];
		multi /= x[i];
		while (i < n - 1 && x[i] == x[i + 1]){
			i++;
		}
	}
	return count;
}

int main(){
	int n;
	vector<int> x;
	while (cin >> n){
		for (int i = 0; i < n; i++){
			int tmp = 0;
			cin >> tmp;
			x.push_back(tmp);
		}
		sort(x.begin(), x.end());
		cout << getLuckyPacket(x, n, 0, 0, 1) << endl;
	}
	return 0;
}
