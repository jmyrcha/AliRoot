#ifndef ALIGMATERIAL_H
#define ALIGMATERIAL_H

#include <TNamed.h>

class AliGMaterial: public TNamed {
    private:
        Int_t    fImat;
        Int_t    fIsvol;
        Int_t    fIfield;
        Float_t  fFieldm;
        Float_t  fTmaxfd;
        Float_t  fStemax;
        Float_t  fDeemax;
        Float_t  fEpsil;
        Float_t  fStmin; 

        Float_t* fUbuf; 
        
        Int_t    fNbuf;
        Float_t  fA;
        Float_t  fZ;
        Float_t  fDens;
        Float_t  fRadl;
        Float_t  fAbsl;
    

        Float_t* fBuf;
        
        Int_t    fNwbuf;
        Float_t  fRho; /* Density of material */

    public:
        AliGMaterial( Int_t imat, Text_t* name, Text_t* title, Int_t isvol, Int_t ifield, Float_t fieldm, Float_t tmaxfd, Float_t stemax, Float_t deemax, Float_t epsil, Float_t stmin, Float_t *ubuf, Int_t nbuf, Float_t a, Float_t z, Float_t dens, Float_t radl, Float_t absl, Float_t *buf, Int_t nwbuf );
        AliGMaterial( Text_t* name, Text_t* title, Float_t A=0., Float_t Z=0., Float_t Rho=0. ); /* Constructor */
        AliGMaterial( AliGMaterial* Mat=NULL ); /* Copy or Default Constructor */
        ~AliGMaterial(); /* Destructor */
        AliGMaterial* operator=( const AliGMaterial* Mat );
        Int_t GetfImat() {return fImat;}
    ClassDef(AliGMaterial,1) //Material Class
};

#endif
