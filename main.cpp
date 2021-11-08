#include <iostream>
#include <algorithm>
using namespace std;
string f1(char c){
  string tmp = "";
  switch (c)
  {
  case 'a':
      tmp = "000";
      break;
  case 'e':
      tmp = "001";
      break;
  case 'i':
      tmp = "010";
      break;
  case 'o':
      tmp = "011";
      break;
  case 'u':
      tmp = "100";
      break;                     
  default:
      break;
  }
  return tmp;
}
string f2(char c) {
  string tmp = "";
  switch (c)
  {
  case 'a':
      tmp = "00000";
      break;
  case 'e':
      tmp = "00001";
      break;
  case 'i':
      tmp = "00010";
      break;
  case 'o':
      tmp = "00011";
      break;
  case 'u':
      tmp = "00100";
      break;    
   case 'A':
      tmp = "00101";
      break;
  case 'E':
      tmp = "00110";
      break;
  case 'I':
      tmp = "00111";
      break;
  case 'O':
      tmp = "01000";
      break;
  case 'U':
      tmp = "01001";
      break;   
  case '0':
      tmp = "01010";
      break;
  case '1':
      tmp = "01011";
      break;
  case '2':
      tmp = "01100";
      break;
  case '3':
      tmp = "01101";
      break;
  case '4':
      tmp = "01110";
      break;    
  case '5':
      tmp = "01111";
      break;
  case '6':
      tmp = "10000'";
      break;
  case '7':
      tmp = "10001";
      break;
  case '8':
      tmp = "10010";
      break;
  case '9':
      tmp = "10011";
      break;   
  case ' ':
      tmp = "10100";
      break;
  case '!':
      tmp = "10101";
      break;
  case '"':
      tmp = "10110";
      break;    
  case '#':
      tmp = "10111";
      break;
  case '$':
      tmp = "11000";
      break;
  case '%':
      tmp = "11001";
      break;
  case '&':
      tmp = "11010";
      break;
  case char(39):
      tmp = "11011";
      break;    
  case '(':
      tmp = "11100";
      break;                  
  default:
      break;
  }
  //transiciona con
  //11101
  //11110
  //11111
    return tmp;
}

string f3(char c) {
  string tmp = "";
  switch (c)
  {
  case 'a':
      tmp = "000000";
      break;
  case 'b':
      tmp = "000001";
      break;
  case 'c':
      tmp = "000010";
      break;
  case 'd':
      tmp = "000011";
      break;
  case 'e':
      tmp = "000100";
      break;    
   case 'f':
      tmp = "000101";
      break;
  case 'g':
      tmp = "000110";
      break;
  case 'h':
      tmp = "000111";
      break;
  case 'i':
      tmp = "001000";
      break;
  case 'j':
      tmp = "001001";
      break;   
  case 'k':
      tmp = "001010";
      break;
  case 'l':
      tmp = "001011";
      break;
  case 'm':
      tmp = "001100";
      break;
  case 'n':
      tmp = "001101";
      break;
  case 'o':
      tmp = "001110";
      break;    
  case 'p':
      tmp = "001111";
      break;
  case 'q':
      tmp = "010000'";
      break;
  case 'r':
      tmp = "010001";
      break;
  case 's':
      tmp = "010010";
      break;
  case 't':
      tmp = "010011";
      break;   
  case 'u':
      tmp = "010100";
      break;
  case 'v':
      tmp = "010101";
      break;
  case 'w':
      tmp = "010110";
      break;    
  case 'x':
      tmp = "010111";
      break;
  case 'y':
      tmp = "011000";
      break;
  case 'z':
      tmp = "011001";
      break;
  case 'A':
      tmp = "011010";
      break;
  case 'B':
      tmp = "011011";
      break;    
  case 'C':
      tmp = "011100";
      break;    
  case 'D':
      tmp = "011101";
      break;   
  case 'E':
      tmp = "011110";
      break;
  case 'F':
      tmp = "011111";
      break;
  case 'G':
      tmp = "100000";
      break;    
  case 'H':
      tmp = "100001";
      break;
  case 'I':
      tmp = "100010";
      break;
  case 'J':
      tmp = "100011";
      break;
  case 'K':
      tmp = "100100";
      break;
  case 'L':
      tmp = "100101";
      break;    
  case 'M':
      tmp = "100110";
  case 'N':
      tmp = "100111";
      break;    
  case 'O':
      tmp = "101000";
      break;
  case 'P':
      tmp = "101001";
      break;
  case 'Q':
      tmp = "101010";
      break;
  case 'R':
      tmp = "101011";
      break;
  case 'S':
      tmp = "101100";
      break;    
  case 'T':
      tmp = "101101";
      break;    
  case 'U':
      tmp = "101110";
      break;
  case 'V':
      tmp = "101111";
      break;
  case 'W':
      tmp = "110000";
      break;
  case 'X':
      tmp = "110001";
      break;
  case 'Y':
      tmp = "110010";
      break;    
  case 'Z':
      tmp = "110011";
      break;
  case char(91):
      tmp = "110100";
      break;
  case char(92):
      tmp = "110101";
      break;  
  case char(93):
       tmp = "110110";
      break;
  case char(94):
      tmp = "110111";
      break;
  case char(95):
      tmp = "111000";
      break;
  case char(123):
      tmp = "111001";
      break;    
    case char(124):
     tmp = "111010";
      break;
  case char(125):
     tmp = "111011";
      break;
  case char(126):
     tmp = "111100";
      break;                             
  default:
      break;
  }
  //transiciona con
  //111101
  //111110
  //111111
    return tmp;
}

string f4(char c) {
  string tmp = "";
  switch (c)
  {
  case char(32):
      tmp = "0000000";
      break;
  case char(33):
      tmp = "0000001";
      break;
  case char(34):
      tmp = "0000010";
      break;
  case char(35):
      tmp = "0000011";
      break;
  case char(36):
      tmp = "0000100";
      break;    
   case char(37):
      tmp = "0000101";
      break;
  case char(38):
      tmp = "0000110";
      break;
  case char(39):
      tmp = "0000111";
      break;
  case char(40):
      tmp = "0001000";
      break;
  case char(41):
      tmp = "0001001";
      break;   
  case char(42):
      tmp = "0001010";
      break;
  case char(43):
      tmp = "0001011";
      break;
  case char(44):
      tmp = "0001100";
      break;
  case char(45):
      tmp = "0001101";
      break;
  case char(46):
      tmp = "0001110";
      break;    
  case char(47):
      tmp = "0001111";
      break;
  case char(48):
      tmp = "0010000'";
      break;
  case char(49):
      tmp = "0010001";
      break;
  case char(50):
      tmp = "0010010";
      break;
  case char(51):
      tmp = "0010011";
      break;   
  case char(52):
      tmp = "0010100";
      break;
  case char(53):
      tmp = "0010101";
      break;
  case char(54):
      tmp = "0010110";
      break;    
  case char(55):
      tmp = "0010111";
      break;
  case char(56):
      tmp = "0011000";
      break;
  case char(57):
      tmp = "0011001";
      break;
  case char(58):
      tmp = "0011010";
      break;
  case char(59):
      tmp = "0011011";
      break;    
  case char(60):
      tmp = "0011100";
      break;    
  case char(61):
      tmp = "0011101";
      break;   
  case char(62):
      tmp = "0011110";
      break;
  case char(63):
      tmp = "0011111";
      break;
  case char(64):
      tmp = "0100000";
      break;    
  case char(65):
      tmp = "0100001";
      break;
  case char(66):
      tmp = "0100010";
      break;
  case char(67) :
      tmp = "0100011";
      break;
  case char(68):
      tmp = "0100100";
      break;
  case char(69):
      tmp = "0100101";
      break;    
  case char(70):
      tmp = "0100110";
  case char(71):
      tmp = "0100111";
      break;    
  case char(72) :
      tmp = "0101000";
      break;
  case char(73):
      tmp = "0101001";
      break;
  case char(74):
      tmp = "0101010";
      break;
  case char(75):
      tmp = "0101011";
      break;
  case char(76) :
      tmp = "0101100";
      break;    
  case char(77):
      tmp = "0101101";
      break;    
  case char(78):
      tmp = "0101110";
      break;
  case char(79):
      tmp = "0101111";
      break;
  case char(80) :
      tmp = "0110000";
      break;
  case char(81):
      tmp = "0110001";
      break;
  case char(82):
      tmp = "0110010";
      break;    
  case char(83):
      tmp = "0110011";
      break;
  case char(84):
      tmp = "0110100";
      break;
  case char(85):
      tmp = "0110101";
      break;  
  case char(86):
       tmp = "0110110";
      break;
  case char(87):
      tmp = "0110111";
      break;
  case char(88):
      tmp = "0111000";
      break;
  case char(89):
      tmp = "0111001";
      break;    
    case char(90):
     tmp = "0111010";
      break;
  case char(91):
     tmp = "0111011";
      break;
  case char(92):
     tmp = "0111100";
      break;  
  case char(93):
      tmp = "0111101";
      break;
  case char(94):
      tmp = "0111110";
      break;
  case char(95):
      tmp = "0111111";
      break;
  case char(96):
      tmp = "1000000";
      break;   
  case char(97):
      tmp = "1000001";
      break;
  case char(98):
      tmp = "1000010";
      break;
  case char(99):
      tmp = "1000011";
      break;    
  case char(100):
      tmp = "1000100";
      break;
  case char(101):
      tmp = "1000101";
      break;
  case char(102):
      tmp = "1000110";
      break;
  case char(103):
      tmp = "1000111";
      break;
  case char(104):
      tmp = "1001000";
      break;    
  case char(105):
      tmp = "1001001";
      break;    
  case char(106):
      tmp = "1001010";
      break;   
  case char(107):
      tmp = "1001011";
      break;
  case char(108):
      tmp = "1001100";
      break;
  case char(109):
      tmp = "1001101";
      break;    
  case char(110):
      tmp = "1001110";
      break;
  case char(111):
      tmp = "1001111";
      break;
  case char(112) :
      tmp = "1010000";
      break;
  case char(113):
      tmp = "1010001";
      break;
  case char(114):
      tmp = "1010010";
      break;    
  case char(115):
      tmp = "1010011";
  case char(116):
      tmp = "1010100";
      break;    
  case char(117) :
      tmp = "1010101";
      break;
  case char(118):
      tmp = "1010110";
      break;
  case char(119):
      tmp = "1010111";
      break;
  case char(120):
      tmp = "1011000";
      break;
  case char(121) :
      tmp = "1011001";
      break;    
  case char(122):
      tmp = "1011010";
      break;    
  case char(123):
      tmp = "1011011";
      break;
  case char(124):
      tmp = "1011100";
      break;      
  case char(125):
      tmp = "1011101";
      break;
  case char(126):
      tmp = "1011110";
      break;                                       
  default:
      break;
  }
  //no se usa 
  //1011111     96
  //1100000     97
  //1100001     98
  //1100010     99
  //1100011     100
  //1100100     101
  //1100101     102
  //1100110     103
  //1100111     104
  //1101000     105    
  //1101001     106
  //1101010     107    
  //1101011     108   
  //1101100     109   
  //1101101     110    
  //1101110     111
  //1101111     112
  //1110000     113     
  //1110001     114
  //1110010     115
  //1110011     116
  //1110100     117
  //1110101     118
  //1110110     119
  //1110111     120
  //1111000     121
  //1111001     122
  //1111010     123
  //1111011     124
  //1111100     125

  //3 ultimos (para transacionar):

  //1111101     126    
  //1111110     127
  //1111111     128    
    return tmp;
}

int main(){
  string result = "";
  string s = "a0e";
  sort(s.begin(), s.end());
  for (int i = 0; i < s.length(); ++i) {
      result += f1(s[i]);
  }
  cout << result << endl;
  cout << s << endl;
  return 0;
}
