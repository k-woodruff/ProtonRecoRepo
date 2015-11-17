/**
 * \file ProtonRecoAna.h
 *
 * 
 * \brief Little sample program for establishing a user analysis space.
 *
 * @author Tia Miceli Katherine Woodruff
*/

#ifndef PROTONRECO_PROTONRECOANA_H
#define PROTONRECO_PROTONRECOANA_H

#include <string>

#include "TTree.h"

namespace protonreco{
  class ProtonRecoAna;
}

class protonreco::ProtonRecoAna{
  
public:
  
  /// Default constructor
  ProtonRecoAna();

  /// Default destructor
  virtual ~ProtonRecoAna(){};

  void RunAnalysis(art::Event const & e);
  void SetupOutputTree(TTree*);
  
 private:

  std::string fAlgName;
  TTree*      fTree;
  
  void PrintInfo();

  
};

#endif
