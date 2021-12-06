typedef unsigned int TypVyznam;
const TypVyznam Max = 1000; //max. významových
typedef void * TypHodnoty[Max]; //vektor hodnot
typedef TypIndex TypCols[Max]; //vektor sloupců
typedef TypVyznam TypRows[Max]; //začátky řádků

typedef struct {
  TypHodnoty hodnoty; //datový vektor
  TypCols sloupce; //sloupcové indexy
  TypRows indradky; //začátky řádků
  TypVyznam obsaz, radku; //počet obsazených
  void * majorit;
} TypRMatice;

TypRMatice RM;
RM.obsaz = RM.radku = 0; //inicializace

void *Ziskej(TypRMatice M,TypIndex i,TypIndex j){
  TypVyznam kde, konecr;
  if (i<=radku and M.indradky[i-1]!=0) {
    kde=M.indradky[i-1];
    konecr=M.indradky[i];
    if (konecr==0) konecr=M.obsaz;
    while (kde<konecr and sloupce[kde]!=j)
      kde++;
    if (kde<konecr) return M.hodnoty[kde];
      else return M.majorit;
  } else return M.majorit;
}
