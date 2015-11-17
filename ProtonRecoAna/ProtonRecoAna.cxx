#ifndef PROTONRECO_PROTONRECOANA_CXX
#define PROTONRECO_PROCONRECOANA_CXX

#include "ProtonRecoAna.hh"
#include <iostream>

protonreco::ProtonRecoAna::ProtonRecoAna()
  : fAlgName("ProtonRecoAna")
{}

void protonreco::ProtonRecoAna::SetupOutputTree(TTree* tfs_tree){
  fTree = tfs_tree;

  std::string title = fAlgName + " Tree";
  fTree->SetObject(fTree->GetName(),title.c_str());
}

void protonreco::ProtonRecoAna::RunAnalysis(art::Event const & e){
	
  PrintInfo();
}

void protonreco::ProtonRecoAna::PrintInfo(){
  std::cout << "\n================================== ProtonRecoAna ==========================" << std::endl;
  std::cout << "This is a ub_ProtonRecoAna class called " << fAlgName << std::endl;
  std::cout << "\tThere is an output tree called "
	    << fTree->GetName() << " (" << fTree->GetTitle() << ")" << std::endl;
  std::cout << "==========================================================================\n" << std::endl;
}

#endif
