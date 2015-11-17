/**
 * \file ProtonRecoAna.h
 *
 * 
 * \brief Little sample program for establishing a user analysis space.
 *
 * @author wketchum
*/

#ifndef TEST_USERANALYSIS_H
#define TEST_USERANALYSIS_H

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

  void RunAnalysis();
  void SetupOutputTree(TTree*);
  
 private:

  std::string fAlgName;
  TTree*      fTree;
  
  void PrintInfo();

  
};

#endif
