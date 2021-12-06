#include <iostream>
#include <fstream>
using namespace std;

const int Kapacita = 100000; //max. počet údajů ve struktuře
typedef void* ZaklPole[Kapacita];
typedef bool (*TypPorovnej)(void*, void*);
struct VyhledTab {
  ZaklPole ZP;

  int Obsazeno;

  TypPorovnej Rovno;
};

void VTInit(VyhledTab &VT, TypPorovnej X){
  VT.Obsazeno=0;
  VT.Rovno=X;
}

void VTVloz(VyhledTab &VT){
  ifstream Retezce("data.txt");

  if (Retezce.is_open()){
    string Retez = "";
    void *Data;

    while (getline (Retezce, Retez)) {
      Data = (&Retez);
      VT.ZP[VT.Obsazeno] = Data;
      VT.Obsazeno++;
    }

  } else {
    cout << "file is not found" << endl;
  }

  Retezce.close();

}

void Read(VyhledTab VT, void *Data){
  int Index = 0;
  string Retez = "";
  while (Index < VT.Obsazeno and not VT.Rovno(VT.ZP[Index],Data))
      cout << VT.ZP[Index] << endl;
      Index++;
}

bool VTNajdi(VyhledTab VT, void *Data){
  int Index=0;

  while (Index<VT.Obsazeno and not VT.Rovno(VT.ZP[Index],Data))
    Index++;
  return Index<VT.Obsazeno;
}
