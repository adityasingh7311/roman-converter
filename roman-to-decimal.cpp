class Solution {
public:
    //3999 = MMMCMXCIX
    int romanToInt(string s) {
        char c;
        int val = 0;
        
        for (int i = 0; i < s.length(); i++) {
            c = s[i];
            switch(c) {
                case 'V':
                    val += 5;
                    break;
                case 'L':
                    val += 50;
                    break;
                case 'D':
                    val += 500;
                    break;
                case 'M':
                    val += 1000;
                    break;
                case 'I':
                    if (i < s.length() - 1) {
                        if (s[i + 1] == 'V') {
                            val += 4;
                            i++;
                        } else if (s[i + 1] == 'X') {
                            val += 9;
                            i++;
                        } else {
                            val += 1;
                        }
                    } else {
                        val += 1;
                    }
                    break;
                case 'X':
                    if (i < s.length() - 1) {
                        if (s[i + 1] == 'L') {
                            val += 40;
                            i++;
                        } else if (s[i + 1] == 'C') {
                            val += 90;
                            i++;
                        } else {
                            val += 10;
                        }
                    } else {
                        val += 10;
                    }
                    break;
                case 'C':
                    if (i < s.length() - 1) {
                        if (s[i + 1] == 'D') {
                            val += 400;
                            i++;
                        } else if (s[i + 1] == 'M') {
                            val += 900;
                            i++;
                        } else {
                            val += 100;
                        }
                    } else {
                        val += 100;
                    }
                    break;
                default:
                    val += 0;
            }
        }
        return val;
    }
};