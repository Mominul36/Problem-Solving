class Solution {
public:
void generate_parenthesis(vector<string> &a, string &s, int open, int close)
{
	if(open==0 && close==0)
	{
		a.push_back(s);
		return;
	}
	if(open)
	{
		s.push_back('(');
		generate_parenthesis(a,s,open-1,close);
		s.pop_back();
	}
	
	if(close && open<close)
	{
		s.push_back(')');
		generate_parenthesis(a,s,open,close-1);
		s.pop_back();
	}
}
    vector<string> generateParenthesis(int n) {
        vector<string> a;
       string s;
        generate_parenthesis(a,s,n,n);
        return a;
    }
};