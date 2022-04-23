class Solution {
public:
    unordered_map<string, string> enc, dec;
    const string chars = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    
    string getCode() {
        string code = "";
        for (int i = 0; i < 6; i++) code += chars[rand() % 13];
        return "http://tinyurl.com/" + code;
    }
    
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        if(enc.find(longUrl)!=enc.end()){
            return dec[longUrl];
        }
        
        string code = getCode();

        while(dec.find(code)!=dec.end()){
            code = getCode();
        }

        enc[longUrl] = code;
        dec[code] = longUrl;
        
        return code;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return dec[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));