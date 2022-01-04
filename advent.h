#pragma once

int adventstag(int dy, int mo){
switch (mo)
  {
    case 11: //November
      return dy - 26;
    case 12: //Dezember
      return dy + 4;
    default:
      return 0;
  }
}

int candles(int a, int dow){
  return (a-dow+7)/7;
}
