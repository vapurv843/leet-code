vector<string> generate(int N)
{
	// Your code here
	vector<string> ans;
	queue<string> q;
	q.push("1");
	while(N--)
	{
	    string s = q.front();
	    ans.push_back(s);
	    q.pop();
	    q.push(s+'0');
	    q.push(s+'1');
	}
	return ans;
}