const int Kapacita = 100000; //max. počet údajů ve struktuře
typedef void* ZaklPole[Kapacita];
typedef bool (*TypPorovnej)(void*, void*);
struct VyhledTab {
  ZaklPole ZP;
  //základní pole
  int Obsazeno;
  //počet obsazených prvků pole
  TypPorovnej Rovno; //porovnávací funkce, true -> data shodná
};

void VTInit(VyhledTab &VT, TypPorovnej X){
  VT.Obsazeno=0;
  VT.Rovno=X; //přiřazení uživatelské funkce
}

void VTVloz(VyhledTab &VT, void *Data){
  VT.ZP[VT.Obsazeno]=Data; //nová data na konec pole
  VT.Obsazeno++;
}

bool VTNajdi(VyhledTab VT, void *Data){
  int Index=0;
  //obyčejné sekvenční hledání
  while (Index<VT.Obsazeno and not VT.Rovno(VT.ZP[Index],Data))
    Index++;
  return Index<VT.Obsazeno;
}
