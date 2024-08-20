//ye question kehta hai ki t ka sara character agar s me presenr hai to t uska anagram h 

class Solution {
public:
    bool isAnagram(string s, string t) {
       //make freqTable aur o se 255 tak sbko '0' se initialise krdo
        int freqTable[256] = {0};
        for(int i=0; i<s.size(); i++){
            freqTable[s[i]]++;   // jaise jaise character milega vaise vaise table me add krte jyenge
        }
        for(int i=0; i<t.size(); i++){
            freqTable[t[i]]--;   //jaise jaise character milega vaise vaise table se minus krte jyenge
        }
        for(int i=0; i<256; i++){  // last 256 tak hoga(0-255)
            if(freqTable[i]!=0) return false;
        }
        return true;
    }
};