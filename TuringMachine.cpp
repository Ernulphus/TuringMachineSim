#include "TuringMachine.h"

int main(){

  // // States
  // std::set<char> Q; Q.insert('A'); Q.insert('B'); Q.insert('C'); //Q.insert('D');
  // //Q.insert('E'); Q.insert('F'); Q.insert('G');
  // // Input symbols
  // std::set<char> S; S.insert('0'); S.insert('1'); S.insert('$');
  // // Tape symbols
  // std::set<char> G(Q); G.insert('X'); G.insert ('_');
  // // Accept states
  // std::set<char> F; F.insert('C');
  // // Start state
  // char q0 = 'A';
  // // Blank symbol
  // char b = '_';
  // // Delta function infile
  std::string deltaFile = "0^n1^n0^n.txt";

  TuringMachine M (deltaFile,'B','f');
  //M.check();
  M.run(true, "010");

}
