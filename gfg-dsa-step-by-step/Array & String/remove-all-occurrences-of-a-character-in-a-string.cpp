class Solution {
  public:
    // Function to remove all occurrences of the character from the string
    void remove(string &s, char c){ // c is the char that we have to remove
        s.erase(std:: remove(s.begin(), s.end(), c), s.end());
    }
    
    void removeCharacter(string &s, char c) {
        remove(s,c);
    }
};

// O(n)
// O(1)