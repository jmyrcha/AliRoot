#ifndef TRDv0_H
#define TRDv0_H
////////////////////////////////////////////////////////
//  Manager and hits classes for set:TRD version 0    //
////////////////////////////////////////////////////////
 
#include "AliTRD.h"
 
class AliTRDv0 : public AliTRD {

public:
  AliTRDv0() {}
  AliTRDv0(const char *name, const char *title);
  virtual      ~AliTRDv0() {}
  virtual void  CreateGeometry();
  virtual void  CreateMaterials();
  virtual Int_t IsVersion() const       { return 0;       };
  virtual void  SetHits(Int_t ihit = 1) { fHitsOn = ihit; };
  virtual void  StepManager();
  virtual void  Init();
  
protected:
  Int_t        fIdSens;     // Sensitive volume identifier

  Int_t        fIdSpace1;   // Spaceframe volume identifier
  Int_t        fIdSpace2;   // 
  Int_t        fIdSpace3;   // 

  Int_t        fIdChamber1; // Driftchamber volume identifier
  Int_t        fIdChamber2; // 
  Int_t        fIdChamber3; // 

  Int_t        fHitsOn;     // Used to switch hits on

  ClassDef(AliTRDv0,1)      // Transition Radiation Detector version 0

};

#endif
