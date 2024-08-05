
class Solution{
    bool allZero(vector<int>&counter){
        for(int &i : counter){
            if(i!=0){
                return false;
            }
           
        }
         return true;
    }
public:
	int search(string pat, string txt) {
	    // code here
	    int n = txt.size();
	    
	    vector<int>counter(26,0);
	    //counting the frequency of each character in pat
	    for(int i = 0;i<pat.length();i++){
	        char ch = pat[i];
	        //to find the index of the character 
	        counter[ch -'a']++;
	    }
	    
	    int i = 0;
	    int j = 0;
	    int res = 0;
	    int k = pat.length();
	    
	    while(j<n){
	        counter[txt[j] -'a']--;
	        
	        if(j-i+1 == k){
	            if(allZero(counter)){
	                res++;
	                
	        }
	        counter[txt[i]-'a']++;
	        i++;
	    }
	    j++;
	    
	    }
	    return res;
	}

};
