#include <iostream> 

using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    int lastdigit = n%10;
	    int firstdigit = 0;
	    while(n > 0)
	    {
	        firstdigit = n%10;
	        n/= 10;
	    }
	    cout << lastdigit + firstdigit << endl;
	}
	
	

	return 0;
}