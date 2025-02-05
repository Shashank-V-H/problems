//First attempt 
class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
		if(s1.size() != s2.size()){
			return false;
		}
		int count = 0;
		for(int i = 0; i < s1.size(); i++){
			if(s1[i] == s2[i]){
				count++;
			}
		}
		if( count == s1.size() -2 || count == s1.size()){
			return true;
		}
		return false;
    }
}

// Second attempt 

class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
		if(s1.size() != s2.size()){
			return false;
		}
		if(s1 == s2){
			return true;
		}
		int count = 0;
		vector<int> notMatch_index;
		vector<char> notMatch_char;
		char c1,c2;
		for(int i = 0; i < s1.size(); i++){
			if(s1[i] != s2[i]){
				if(count < 2){
					notMatch_index.push_back(i);
					notMatch_char.push_back(s1[i]);
					count++;
				}
				else{
					return false;
				}
			}
		}
		s1[notMatch_index.front()] = notMatch_char.back();
		s1[notMatch_index.back()] = notMatch_char.front();

		if(s1 == s2){
			return true; 
		}

		return false;
    }
};
