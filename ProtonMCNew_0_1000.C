#define ProtonMCNew_0_1000_cxx
#include "ProtonMCNew_0_1000.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>
#include <TVector3.h>

// ===================================================================================================================
// ====================================       PUT HISTOGRAMS HERE           ==========================================
// ===================================================================================================================

/////////////////////////////////// Primary Particle Start X Position //////////////////////////////////////////
TH1D *hMCPrimaryStartX = new TH1D("hMCPrimaryStartX", "Primary Particle X_{0}", 200, -50 , 50);
/////////////////////////////////// Primary Particle Start Y Position //////////////////////////////////////////
TH1D *hMCPrimaryStartY = new TH1D("hMCPrimaryStartY", "Primary Particle Y_{0}", 200, -50 , 50);
/////////////////////////////////// Primary Particle Start Z Position //////////////////////////////////////////
TH1D *hMCPrimaryStartZ = new TH1D("hMCPrimaryStartZ", "Primary Particle Z_{0}", 600, -120 , 180);

/////////////////////////////////// Primary Particle End X Position //////////////////////////////////////////
TH1D *hMCPrimaryEndX = new TH1D("hMCPrimaryEndX", "Primary Particle X_{f}", 120, -10 , 50);
/////////////////////////////////// Primary Particle End Y Position //////////////////////////////////////////
TH1D *hMCPrimaryEndY = new TH1D("hMCPrimaryEndY", "Primary Particle Y_{f}", 40, -20 , 20);
/////////////////////////////////// Primary Particle End Z Position //////////////////////////////////////////
TH1D *hMCPrimaryEndZ = new TH1D("hMCPrimaryEndZ", "Primary Particle Z_{f}", 200, -10 , 90);

/////////////////////////////////// Primary Particle Start X Position inside TPC //////////////////////////////////////////
TH1D *hMCPrimaryTPCStartX = new TH1D("hMCPrimaryTPCStartX", "Primary Particle X_{0} inside TPC", 200, -50 , 50);
/////////////////////////////////// Primary Particle Start Y Position inside TPC //////////////////////////////////////////
TH1D *hMCPrimaryTPCStartY = new TH1D("hMCPrimaryTPCStartY", "Primary Particle Y_{0} inside TPC", 200, -50 , 50);
/////////////////////////////////// Primary Particle Start Z Position inside TPC //////////////////////////////////////////
TH1D *hMCPrimaryTPCStartZ = new TH1D("hMCPrimaryTPCStartZ", "Primary Particle Z_{0} inside TPC", 600, -120 , 180);

/////////////////////////////////// Primary Particle Initial Px   //////////////////////////////////////////
TH1D *hMCPrimaryPxUnWeighted = new TH1D("hMCPrimaryPxUnWeighted", "Primary Particle P_{x}", 300, -150 , 150);
/////////////////////////////////// Primary Particle Initial Py  //////////////////////////////////////////
TH1D *hMCPrimaryPyUnWeighted = new TH1D("hMCPrimaryPyUnWeighted", "Primary Particle P_{y}", 300, -150 , 150);
/////////////////////////////////// Primary Particle Initial Pz //////////////////////////////////////////
TH1D *hMCPrimaryPzUnWeighted = new TH1D("hMCPrimaryPzUnWeighted", "Primary Particle P_{z}", 250, 0 , 2500);



TH1D *hMCPrimaryPUnWeighted = new TH1D("hMCPrimaryPUnWeighted", "Primary Particle P_{0}", 250, 0, 2500);



/////////////////////////////////// Primary End X vs Z Position //////////////////////////////////////////////
TH2D *hMCPrimaryEndXvsZ = new TH2D("hMCPrimaryEndXvsZ", "X_{f} vs Z_{f}", 200, -10, 90, 120, -10, 50);
/////////////////////////////////// Primary End Y vs Z Position //////////////////////////////////////////////
TH2D *hMCPrimaryEndYvsZ = new TH2D("hMCPrimaryEndYvsZ", "Y_{f} vs Z_{f}", 200, -10, 90, 40, -20, 20);


/////////////////////////////////////////// Initial Kinetic Energy ///////////////////////////////////////////
TH1D *hMCTrueInitialKE = new TH1D("hMCTrueInitialKE", "Initial Kinetic Energy (MC Truth)", 200, 0, 1000);

/////////////////////////////////// Energy Loss in the upstream region of the beamline ///////////////////////
TH1D *hMCTrueELossUpstream = new TH1D("hMCTrueELossUpstream", "Energy loss prior to entering the TPC (MC Truth)", 1100, -100, 1000);

/////////////////////////////////// Energy Loss in the TPC  ///////////////////////
TH1D *hMCTrueELossInTPC = new TH1D("hMCTrueELossInTPC", "Energy loss inside the TPC (MCTruth)", 1100, -100, 1000);

/////////////////////////////////// Final Kinetic Energy in the TPC /////////////////////////
TH1D *hERemainMCTrue = new TH1D("hERemainMCTrue", "Remaining Energy from MC Truth", 1000, -50, 50);

/////////////////////////////////// E Loss upstream of the TPC /////////////////////////
TH2D *hELossXvsY = new TH2D("hELossXvsY", "Energy Loss X vs Y", 200, 0, 50, 200, -25, 25);

/////////////////////////////////// E Loss upstream of the Flux TPC /////////////////////////
TH2D *hELossXvsYFlux = new TH2D("hELossXvsYFlux", "Energy Loss X vs Y", 200, 0, 50, 200, -25, 25);

/////////////////////////////////// Divided E Loss /////////////////////////
TH2D *hELossXvsYDivide = new TH2D("hELossXvsYDivide", "Energy Loss X vs Y", 200, 0, 50, 200, -25, 25);

////////////////////////////////// MC Theta  //////////////////////////////
TH1D *hMCThetaAtFrontFace = new TH1D("hMCThetaAtFrontFace", "#theta at the front face of the TPC", 180, 0, 180);

////////////////////////////////// MC Phi  //////////////////////////////
TH1D *hMCPhiAtFrontFace = new TH1D("hMCPhiAtFrontFace", "#phi at the front face of the TPC", 360, 0, 360);

/////////////////////////////////// Phi vs Theta ELoss /////////////////////////
TH2D *hPhivsThetaELoss = new TH2D("hPhivsThetaELoss", "Phi vs Energy Loss", 360, 0, 360, 40, -10, 30);

/////////////////////////////////// Phi vs Theta ELoss Flux /////////////////////////
TH2D *hPhivsThetaELossFlux = new TH2D("hPhivsThetaELossFlux", "Phi vs Energy Loss", 360, 0, 360, 40, -10, 30);

/////////////////////////////////// Phi vs Theta ELoss Divided /////////////////////////
TH2D *hPhivsThetaELossDivided = new TH2D("hPhivsThetaELossDivided", "Phi vs Energy Loss", 360, 0, 360, 40, -10, 30);



/////////////////////////////////// Weird Energy Loss Peak 1 X vs Z //////////////////////////////////////////////
TH2D *hMCPrimaryXvsZNotWeirdPeak = new TH2D("hMCPrimaryXvsZNotWeirdPeak", "X vs Z", 200, -100, 10, 120, -10, 50);
/////////////////////////////////// Weird Energy Loss Peak 1 Y vs Z //////////////////////////////////////////////
TH2D *hMCPrimaryYvsZNotWeirdPeak = new TH2D("hMCPrimaryYvsZNotWeirdPeak", "Y vs Z", 200, -100, 10, 40, -20, 20);

/////////////////////////////////// Weird Energy Loss Peak 1 X vs Z //////////////////////////////////////////////
TH2D *hMCPrimaryXvsZNotWeirdPeakFlux = new TH2D("hMCPrimaryXvsZNotWeirdPeakFlux", "X vs Z", 200, -100, 10, 120, -10, 50);
/////////////////////////////////// Weird Energy Loss Peak 1 Y vs Z //////////////////////////////////////////////
TH2D *hMCPrimaryYvsZNotWeirdPeakFlux = new TH2D("hMCPrimaryYvsZNotWeirdPeakFlux", "Y vs Z", 200, -100, 10, 40, -20, 20);

/////////////////////////////////// Weird Energy Loss Peak 1 X vs Z //////////////////////////////////////////////
TH2D *hMCPrimaryXvsZNotWeirdPeakDivide = new TH2D("hMCPrimaryXvsZNotWeirdPeakDivide", "X vs Z", 200, -100, 10, 120, -10, 50);
/////////////////////////////////// Weird Energy Loss Peak 1 Y vs Z //////////////////////////////////////////////
TH2D *hMCPrimaryYvsZNotWeirdPeakDivide = new TH2D("hMCPrimaryYvsZNotWeirdPeakDivide", "Y vs Z", 200, -100, 10, 40, -20, 20);



/////////////////////////////////// Weird Energy Loss Peak 1 X vs Z //////////////////////////////////////////////
TH2D *hMCPrimaryXvsZWeirdPeak1 = new TH2D("hMCPrimaryXvsZWeirdPeak1", "X vs Z", 200, -100, 10, 120, -10, 50);
/////////////////////////////////// Weird Energy Loss Peak 1 Y vs Z //////////////////////////////////////////////
TH2D *hMCPrimaryYvsZWeirdPeak1 = new TH2D("hMCPrimaryYvsZWeirdPeak1", "Y vs Z", 200, -100, 10, 40, -20, 20);

/////////////////////////////////// Weird Energy Loss Peak 1 X vs Z //////////////////////////////////////////////
TH2D *hMCPrimaryXvsZWeirdPeak1Flux = new TH2D("hMCPrimaryXvsZWeirdPeak1Flux", "X vs Z", 200, -100, 10, 120, -10, 50);
/////////////////////////////////// Weird Energy Loss Peak 1 Y vs Z //////////////////////////////////////////////
TH2D *hMCPrimaryYvsZWeirdPeak1Flux = new TH2D("hMCPrimaryYvsZWeirdPeak1Flux", "Y vs Z", 200, -100, 10, 40, -20, 20);

/////////////////////////////////// Weird Energy Loss Peak 1 X vs Z //////////////////////////////////////////////
TH2D *hMCPrimaryXvsZWeirdPeak1Divide = new TH2D("hMCPrimaryXvsZWeirdPeak1Divide", "X vs Z", 200, -100, 10, 120, -10, 50);
/////////////////////////////////// Weird Energy Loss Peak 1 Y vs Z //////////////////////////////////////////////
TH2D *hMCPrimaryYvsZWeirdPeak1Divide = new TH2D("hMCPrimaryYvsZWeirdPeak1Divide", "Y vs Z", 200, -100, 10, 40, -20, 20);


/////////////////////////////////// Energy Loss Upstream vs Particle Pz //////////////////////////////////////////
TH2D *hMCPrimaryPzvsELossUpstream = new TH2D("hMCPrimaryPzvsELossUpstream", "Energy Loss Upstream vs Primary Particle P_{z}", 250, 0 , 2500, 1100, -100, 1000);


// --------------------------------------------------------------------------------------------------------------
// --------------------                   Phi vs Theta loss for 5 cm < Y < 15 cm                         --------
// --------------------------------------------------------------------------------------------------------------
/////////////////////////////////// Phi vs Theta ELoss /////////////////////////
TH2D *hPhivsThetaELossTop = new TH2D("hPhivsThetaELossTop", "Phi vs Energy Loss ", 72, 0, 360, 8, -10, 30);

/////////////////////////////////// Phi vs Theta ELoss Flux /////////////////////////
TH2D *hPhivsThetaELossFluxTop = new TH2D("hPhivsThetaELossFluxTop", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

/////////////////////////////////// Phi vs Theta ELoss Divided /////////////////////////
TH2D *hPhivsThetaELossDividedTop = new TH2D("hPhivsThetaELossDividedTop", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

// --------------------------------------------------------------------------------------------------------------
// --------------------                   Phi vs Theta loss for 5 cm < Y < -5 cm                         --------
// --------------------------------------------------------------------------------------------------------------
/////////////////////////////////// Phi vs Theta ELoss /////////////////////////
TH2D *hPhivsThetaELossMid = new TH2D("hPhivsThetaELossMid", "Phi vs Energy Loss ", 72, 0, 360, 8, -10, 30);

/////////////////////////////////// Phi vs Theta ELoss Flux /////////////////////////
TH2D *hPhivsThetaELossFluxMid = new TH2D("hPhivsThetaELossFluxMid", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

/////////////////////////////////// Phi vs Theta ELoss Divided /////////////////////////
TH2D *hPhivsThetaELossDividedMid = new TH2D("hPhivsThetaELossDividedMid", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

// --------------------------------------------------------------------------------------------------------------
// --------------------                   Phi vs Theta loss for -5 cm < Y < -15 cm                         --------
// --------------------------------------------------------------------------------------------------------------
/////////////////////////////////// Phi vs Theta ELoss /////////////////////////
TH2D *hPhivsThetaELossBottom = new TH2D("hPhivsThetaELossBottom", "Phi vs Energy Loss ", 72, 0, 360, 8, -10, 30);

/////////////////////////////////// Phi vs Theta ELoss Flux /////////////////////////
TH2D *hPhivsThetaELossFluxBottom = new TH2D("hPhivsThetaELossFluxBottom", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

/////////////////////////////////// Phi vs Theta ELoss Divided /////////////////////////
TH2D *hPhivsThetaELossDividedBottom = new TH2D("hPhivsThetaELossDividedBottom", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);


/////////////////////////////////// Energy Loss in the upstream region of the beamline ///////////////////////
TH1D *hMCELossUpstreamLookUp = new TH1D("hMCELossUpstreamLookUp", "Energy loss prior to entering the TPC (Map)", 1100, -100, 1000);


/////////////////////////////////// Final Kinetic Energy in the TPC using Map /////////////////////////
TH1D *hERemainMCMap = new TH1D("hERemainMCMap", "Remaining Energy from MC Map", 1000, -75, 75);

/////////////////////////////////// Delta Energy Loss between True and Map method /////////////////////////
TH1D *hDeltaEnergyLossTruevsMap = new TH1D("hDeltaEnergyLossTruevsMap", "#Delta Energy Loss Upstream (True - Map)", 1000, -75, 75);

/////////////////////////////////// Energy Loss in the upstream region of the beamline flat method ///////////////////////
TH1D *hMCELossUpstreamFlat = new TH1D("hMCELossUpstreamFlat", "Energy loss prior to entering the TPC (Flat 66.6 MeV)", 1100, -100, 1000);


/////////////////////////////////// Final Kinetic Energy in the TPC using Map /////////////////////////
TH1D *hERemainMCFlat = new TH1D("hERemainMCFlat", "Remaining Energy from MC using flat 66.6 MeV", 1000, -75, 75);



/////////////////////////////////// "Matched Track" dE/dX /////////////////////////////////////////////////////
TH1D *hRecoMCdEdX = new TH1D("hRecoMCdEdX", "Matched Track dE/dX", 200, 0, 50);

/////////////////////////////////// "Matched Track" Residual Range //////////////////////////////////////////
TH1D *hRecoMCResidualRange = new TH1D("hRecoMCResidualRange", "Matched Track Residual Range", 400, -100, 100);

/////////////////////////////////// "Matched Track" Track Pitch //////////////////////////////////////////////
TH1D *hRecoMCTrkPitch = new TH1D("hRecoMCTrkPitch", "Matched Track Pitch", 1000, 0, 5);

///////////////////////////////// "Matched Track" dE/dX vs RR ///////////////////////////////////////////////
TH2D *hRecoMCdEdXvsRR = new TH2D("hRecoMCdEdXvsRR", "dE/dX vs Residual Range",200, 0, 100, 200, 0, 50);

/////////////////////////////////// Energy Loss in the TPC (Reco-info)  /////////////////////////////////////
TH1D *hMCELossRecoInTPC = new TH1D("hMCELossRecoInTPC", "Reconstructed Energy loss inside the TPC", 1100, -100, 1000);

/////////////////////////////////// TPC Track Phi at the upstream point ///////////////////////////////////////
TH1D *hRecoMCTPCPhi = new TH1D("hRecoMCTPCPhi", "TPC Track Phi", 360, 0, 360);

/////////////////////////////////// TPC Track Theta at the upstream point //////////////////////////////////////
TH1D *hRecoMCTPCTheta = new TH1D("hRecoMCTPCTheta", "TPC Track Theta", 180, 0, 180);

/////////////////////////////////// Reconstructed Particle Start X Position inside TPC //////////////////////////////////////////
TH1D *hRecoMCTPCStartX = new TH1D("hRecoMCTPCStartX", "Reconstructed X_{0} inside TPC", 200, -50 , 50);
/////////////////////////////////// Reconstructed Particle Start Y Position inside TPC //////////////////////////////////////////
TH1D *hRecoMCTPCStartY = new TH1D("hRecoMCTPCStartY", "Reconstructed Y_{0} inside TPC", 200, -50 , 50);
/////////////////////////////////// Reconstructed Particle Start Z Position inside TPC //////////////////////////////////////////
TH1D *hRecoMCTPCStartZ = new TH1D("hRecoMCTPCStartZ", "Primary Particle Z_{0} inside TPC", 600, -120 , 180);

/////////////////////////////////// Final Kinetic Energy in the TPC using TPC Reco Only /////////////////////////
TH1D *hERemainTPCRecoOnly = new TH1D("hERemainTPCRecoOnly", "Remaining Energy using TPC Reco Energy", 1000, -75, 75);

/////////////////////////////////// Energy Loss in the upstream region of the beamline using TPC theta and Phi ///////////////////////
TH1D *hMCELossUpstreamTPCRecoMap = new TH1D("hMCELossUpstreamTPCRecoMap", "Energy loss prior to entering the TPC (using Reco TPC #theta and #phi)", 1100, -100, 1000);


/////////////////////////////////// Delta Energy Loss in TPC between True and dE/dX method /////////////////////////
TH1D *hDeltaEnergyLossInTPCTruevsReco = new TH1D("hDeltaEnergyLossInTPCTruevsReco", "#Delta Energy Loss in the TPC (True - Reco)", 1000, -75, 75);

/////////////////////////////////// Delta Energy Loss in TPC between True and Reco Map Method /////////////////////////
TH1D *hDeltaEnergyLossUpstreamTPCTruevsReco = new TH1D("hDeltaEnergyLossUpstreamTPCTruevsReco", "#Delta Energy Loss Upstream of the TPC (True - Reco)", 1000, -75, 75);


TH1D *hDeltaTotalTruevsReco = new TH1D("hDeltaTotalTruevsReco", "#Delta E_{Total} (True - Reco)", 1001, -75, 75);


TH2D *hDeltaEInTPCvsTrkLength = new TH2D("hDeltaEInTPCvsTrkLength", "TrkLength vs Delta E", 1000, 0, 110, 1000, -75, 75);
TH2D *hDeltaEInTPCvsKEinit = new TH2D("hDeltaEInTPCvsKEinit", "Initial KE vs Delta E", 80, 0, 800, 1000, -75, 75);

//--------------------------------------|
//--- Checking Dual Peaks Histograms ---|
//--------------------------------------|

TH1D *hLXRecoInTPC = new TH1D("hLXRecoInTPC", "Reconstructed X_{0} Inside the TPC of the Left Peak of the Dual Peaks", 200, -50, 50);
TH1D *hLYRecoInTPC = new TH1D("hLYRecoInTPC", "Reconstructed Y_{0} Inside the TPC of the Left Peak of the Dual Peaks", 200, -50, 50);
TH1D *hLZRecoInTPC = new TH1D("hLZRecoInTPC", "Reconstructed Z_{0} Inside the TPC of the Left Peak of the Dual Peaks", 600, -120, 180);

TH1D *hLInitKE = new TH1D("hLInitKE", "The Left Peaks Initial Kinetic Energy", 1100, -100, 1000);

TH1D *hLTrueELossInTPC = new TH1D("hLTrueELossInTPC", "The Left Peaks True E_{Loss} Inside the TPC", 1100, -100, 1000);
TH1D *hLRecoELossInTPC = new TH1D("hLRecoELossInTPC", "The Left Peaks Reconstructed E_{Loss} Inside the TPC", 1100, -100, 1000);
TH1D *hLDeltaInTPC = new TH1D("hLDeltaInTPC", "#Delta E_{Loss} Inside the TPC of the Left Peak (True - Reco)", 1000, -75, 75);

TH1D *hRXRecoInTPC = new TH1D("hRXRecoInTPC", "Reconstructed X_{0} Inside the TPC of the Right Peak of the Dual Peaks", 200, -50, 50);
TH1D *hRYRecoInTPC = new TH1D("hRYRecoInTPC", "Reconstructed Y_{0} Inside the TPC of the Right Peak of the Dual Peaks", 200, -50, 50);
TH1D *hRZRecoInTPC = new TH1D("hRZRecoInTPC", "Reconstructed Z_{0} Inside the TPC of the Right Peak of the Dual Peaks", 600, -120, 180);

TH1D *hRInitKE = new TH1D("hRInitKE", "The Right Peaks Initial Kinetic Energy", 1100, -100, 1000);

TH1D *hRTrueELossInTPC = new TH1D("hRTrueELossInTPC", "The Right Peaks True E_{Loss} Inside the TPC", 1100, -100, 1000);
TH1D *hRRecoELossInTPC = new TH1D("hRRecoELossInTPC", "The Right Peaks Reconstructed E_{Loss} Inside the TPC", 1100, -100, 1000);
TH1D *hRDeltaInTPC = new TH1D("hRDeltaInTPC", "#Delta E_{Loss} Inside the TPC of the Right Peak (True - Reco)", 1000, -75, 75);

//--------------------------------------|


//=================================|
//=== Breaking up theta and phi ===|
//=================================|

//--- Left ---|
TH2D *hPhivsThetaELossL = new TH2D("hPhivsThetaELossL", "Phi vs Energy Loss ", 360, 0, 360, 40, -10, 30);
TH2D *hPhivsThetaELossFluxL = new TH2D("hPhivsThetaELossFluxL", "Phi vs Energy Loss", 360, 0, 360, 40, -10, 30);
TH2D *hPhivsThetaELossDividedL = new TH2D("hPhivsThetaELossDividedL", "Phi vs Energy Loss", 360, 0, 360, 40, -10, 30);

TH2D *hELossXvsYL = new TH2D("hELossXvsYL", "Energy Loss X vs Y", 200, 0, 50, 200, -25, 25);
TH2D *hELossXvsYFluxL = new TH2D("hELossXvsYFluxL", "Energy Loss X vs Y", 200, 0, 50, 200, -25, 25);
TH2D *hELossXvsYDivideL = new TH2D("hELossXvsYDivideL", "Energy Loss X vs Y", 200, 0, 50, 200, -25, 25);

//--- Middle ---|
TH2D *hPhivsThetaELossM = new TH2D("hPhivsThetaELossM", "Phi vs Energy Loss ", 360, 0, 360, 40, -10, 30);
TH2D *hPhivsThetaELossFluxM = new TH2D("hPhivsThetaELossFluxM", "Phi vs Energy Loss", 360, 0, 360, 40, -10, 30);
TH2D *hPhivsThetaELossDividedM = new TH2D("hPhivsThetaELossDividedM", "Phi vs Energy Loss", 360, 0, 360, 40, -10, 30);

TH2D *hELossXvsYM = new TH2D("hELossXvsYM", "Energy Loss X vs Y", 200, 0, 50, 200, -25, 25);
TH2D *hELossXvsYFluxM = new TH2D("hELossXvsYFluxM", "Energy Loss X vs Y", 200, 0, 50, 200, -25, 25);
TH2D *hELossXvsYDivideM = new TH2D("hELossXvsYDivideM", "Energy Loss X vs Y", 200, 0, 50, 200, -25, 25);

//--- Right ---|
TH2D *hPhivsThetaELossR = new TH2D("hPhivsThetaELossR", "Phi vs Energy Loss ", 360, 0, 360, 40, -10, 30);
TH2D *hPhivsThetaELossFluxR = new TH2D("hPhivsThetaELossFluxR", "Phi vs Energy Loss", 360, 0, 360, 40, -10, 30);
TH2D *hPhivsThetaELossDividedR = new TH2D("hPhivsThetaELossDividedR", "Phi vs Energy Loss", 360, 0, 360, 40, -10, 30);

TH2D *hELossXvsYR = new TH2D("hELossXvsYR", "Energy Loss X vs Y", 200, 0, 50, 200, -25, 25);
TH2D *hELossXvsYFluxR = new TH2D("hELossXvsYFluxR", "Energy Loss X vs Y", 200, 0, 50, 200, -25, 25);
TH2D *hELossXvsYDivideR = new TH2D("hELossXvsYDivideR", "Energy Loss X vs Y", 200, 0, 50, 200, -25, 25);

//=================================|

//=================================|
//=== New Map Method Histograms ===|
//=================================|

TH2D *hPhivsThetaELossX0Y0 = new TH2D("hPhivsThetaELossX0Y0", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX0Y0 = new TH2D("hPhivsThetaELossX0Y0", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX0Y0 = new TH2D("hPhivsThetaELossX0Y0", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX0Y1 = new TH2D("hPhivsThetaELossX0Y1", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX0Y1 = new TH2D("hPhivsThetaELossX0Y1", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX0Y1 = new TH2D("hPhivsThetaELossX0Y1", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX0Y2 = new TH2D("hPhivsThetaELossX0Y2", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX0Y2 = new TH2D("hPhivsThetaELossX0Y2", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX0Y2 = new TH2D("hPhivsThetaELossX0Y2", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX0Y3 = new TH2D("hPhivsThetaELossX0Y3", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX0Y3 = new TH2D("hPhivsThetaELossX0Y3", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX0Y3 = new TH2D("hPhivsThetaELossX0Y3", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX0Y4 = new TH2D("hPhivsThetaELossX0Y4", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX0Y4 = new TH2D("hPhivsThetaELossX0Y4", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX0Y4 = new TH2D("hPhivsThetaELossX0Y4", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX0Y5 = new TH2D("hPhivsThetaELossX0Y5", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX0Y5 = new TH2D("hPhivsThetaELossX0Y5", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX0Y5 = new TH2D("hPhivsThetaELossX0Y5", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX0Y6 = new TH2D("hPhivsThetaELossX0Y6", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX0Y6 = new TH2D("hPhivsThetaELossX0Y6", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX0Y6 = new TH2D("hPhivsThetaELossX0Y6", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX0Y7 = new TH2D("hPhivsThetaELossX0Y7", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX0Y7 = new TH2D("hPhivsThetaELossX0Y7", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX0Y7 = new TH2D("hPhivsThetaELossX0Y7", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX0Y8 = new TH2D("hPhivsThetaELossX0Y8", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX0Y8 = new TH2D("hPhivsThetaELossX0Y8", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX0Y8 = new TH2D("hPhivsThetaELossX0Y8", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX0Y9 = new TH2D("hPhivsThetaELossX0Y9", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX0Y9 = new TH2D("hPhivsThetaELossX0Y9", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX0Y9 = new TH2D("hPhivsThetaELossX0Y9", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX1Y0 = new TH2D("hPhivsThetaELossX1Y0", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX1Y0 = new TH2D("hPhivsThetaELossX1Y0", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX1Y0 = new TH2D("hPhivsThetaELossX1Y0", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX1Y1 = new TH2D("hPhivsThetaELossX1Y1", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX1Y1 = new TH2D("hPhivsThetaELossX1Y1", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX1Y1 = new TH2D("hPhivsThetaELossX1Y1", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX1Y2 = new TH2D("hPhivsThetaELossX1Y2", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX1Y2 = new TH2D("hPhivsThetaELossX1Y2", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX1Y2 = new TH2D("hPhivsThetaELossX1Y2", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX1Y3 = new TH2D("hPhivsThetaELossX1Y3", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX1Y3 = new TH2D("hPhivsThetaELossX1Y3", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX1Y3 = new TH2D("hPhivsThetaELossX1Y3", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX1Y4 = new TH2D("hPhivsThetaELossX1Y4", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX1Y4 = new TH2D("hPhivsThetaELossX1Y4", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX1Y4 = new TH2D("hPhivsThetaELossX1Y4", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX1Y5 = new TH2D("hPhivsThetaELossX1Y5", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX1Y5 = new TH2D("hPhivsThetaELossX1Y5", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX1Y5 = new TH2D("hPhivsThetaELossX1Y5", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX1Y6 = new TH2D("hPhivsThetaELossX1Y6", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX1Y6 = new TH2D("hPhivsThetaELossX1Y6", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX1Y6 = new TH2D("hPhivsThetaELossX1Y6", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX1Y7 = new TH2D("hPhivsThetaELossX1Y7", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX1Y7 = new TH2D("hPhivsThetaELossX1Y7", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX1Y7 = new TH2D("hPhivsThetaELossX1Y7", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX1Y8 = new TH2D("hPhivsThetaELossX1Y8", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX1Y8 = new TH2D("hPhivsThetaELossX1Y8", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX1Y8 = new TH2D("hPhivsThetaELossX1Y8", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX1Y9 = new TH2D("hPhivsThetaELossX1Y9", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX1Y9 = new TH2D("hPhivsThetaELossX1Y9", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX1Y9 = new TH2D("hPhivsThetaELossX1Y9", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX2Y0 = new TH2D("hPhivsThetaELossX2Y0", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX2Y0 = new TH2D("hPhivsThetaELossX2Y0", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX2Y0 = new TH2D("hPhivsThetaELossX2Y0", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX2Y1 = new TH2D("hPhivsThetaELossX2Y1", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX2Y1 = new TH2D("hPhivsThetaELossX2Y1", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX2Y1 = new TH2D("hPhivsThetaELossX2Y1", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX2Y2 = new TH2D("hPhivsThetaELossX2Y2", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX2Y2 = new TH2D("hPhivsThetaELossX2Y2", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX2Y2 = new TH2D("hPhivsThetaELossX2Y2", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX2Y3 = new TH2D("hPhivsThetaELossX2Y3", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX2Y3 = new TH2D("hPhivsThetaELossX2Y3", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX2Y3 = new TH2D("hPhivsThetaELossX2Y3", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX2Y4 = new TH2D("hPhivsThetaELossX2Y4", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX2Y4 = new TH2D("hPhivsThetaELossX2Y4", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX2Y4 = new TH2D("hPhivsThetaELossX2Y4", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX2Y5 = new TH2D("hPhivsThetaELossX2Y5", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX2Y5 = new TH2D("hPhivsThetaELossX2Y5", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX2Y5 = new TH2D("hPhivsThetaELossX2Y5", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX2Y6 = new TH2D("hPhivsThetaELossX2Y6", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX2Y6 = new TH2D("hPhivsThetaELossX2Y6", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX0Y6 = new TH2D("hPhivsThetaELossX2Y6", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX2Y7 = new TH2D("hPhivsThetaELossX2Y7", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX2Y7 = new TH2D("hPhivsThetaELossX2Y7", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX2Y7 = new TH2D("hPhivsThetaELossX2Y7", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX2Y8 = new TH2D("hPhivsThetaELossX2Y8", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX2Y8 = new TH2D("hPhivsThetaELossX2Y8", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX2Y8 = new TH2D("hPhivsThetaELossX2Y8", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX2Y9 = new TH2D("hPhivsThetaELossX2Y9", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX2Y9 = new TH2D("hPhivsThetaELossX2Y9", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX2Y9 = new TH2D("hPhivsThetaELossX2Y9", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX3Y0 = new TH2D("hPhivsThetaELossX3Y0", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX3Y0 = new TH2D("hPhivsThetaELossX3Y0", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX3Y0 = new TH2D("hPhivsThetaELossX3Y0", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX3Y1 = new TH2D("hPhivsThetaELossX3Y1", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX3Y1 = new TH2D("hPhivsThetaELossX3Y1", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX3Y1 = new TH2D("hPhivsThetaELossX3Y1", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX3Y2 = new TH2D("hPhivsThetaELossX3Y2", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX3Y2 = new TH2D("hPhivsThetaELossX3Y2", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX3Y2 = new TH2D("hPhivsThetaELossX3Y2", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX3Y3 = new TH2D("hPhivsThetaELossX3Y3", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX3Y3 = new TH2D("hPhivsThetaELossX3Y3", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX3Y3 = new TH2D("hPhivsThetaELossX3Y3", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX3Y4 = new TH2D("hPhivsThetaELossX3Y4", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX3Y4 = new TH2D("hPhivsThetaELossX3Y4", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX3Y4 = new TH2D("hPhivsThetaELossX3Y4", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX3Y5 = new TH2D("hPhivsThetaELossX3Y5", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX3Y5 = new TH2D("hPhivsThetaELossX3Y5", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX3Y5 = new TH2D("hPhivsThetaELossX3Y5", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX3Y6 = new TH2D("hPhivsThetaELossX3Y6", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX3Y6 = new TH2D("hPhivsThetaELossX3Y6", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX3Y6 = new TH2D("hPhivsThetaELossX3Y6", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX3Y7 = new TH2D("hPhivsThetaELossX3Y7", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX3Y7 = new TH2D("hPhivsThetaELossX3Y7", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX3Y7 = new TH2D("hPhivsThetaELossX3Y7", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX3Y8 = new TH2D("hPhivsThetaELossX3Y8", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX3Y8 = new TH2D("hPhivsThetaELossX3Y8", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX3Y8 = new TH2D("hPhivsThetaELossX3Y8", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX3Y9 = new TH2D("hPhivsThetaELossX3Y9", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX3Y9 = new TH2D("hPhivsThetaELossX3Y9", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX3Y9 = new TH2D("hPhivsThetaELossX3Y9", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX4Y0 = new TH2D("hPhivsThetaELossX4Y0", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX4Y0 = new TH2D("hPhivsThetaELossX4Y0", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX4Y0 = new TH2D("hPhivsThetaELossX4Y0", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX4Y1 = new TH2D("hPhivsThetaELossX4Y1", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX4Y1 = new TH2D("hPhivsThetaELossX4Y1", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX4Y1 = new TH2D("hPhivsThetaELossX4Y1", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX4Y2 = new TH2D("hPhivsThetaELossX4Y2", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX4Y2 = new TH2D("hPhivsThetaELossX4Y2", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX4Y2 = new TH2D("hPhivsThetaELossX4Y2", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX4Y3 = new TH2D("hPhivsThetaELossX4Y3", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX4Y3 = new TH2D("hPhivsThetaELossX4Y3", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX4Y3 = new TH2D("hPhivsThetaELossX4Y3", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX4Y4 = new TH2D("hPhivsThetaELossX4Y4", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX4Y4 = new TH2D("hPhivsThetaELossX4Y4", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX4Y4 = new TH2D("hPhivsThetaELossX4Y4", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX4Y5 = new TH2D("hPhivsThetaELossX4Y5", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX4Y5 = new TH2D("hPhivsThetaELossX4Y5", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX4Y5 = new TH2D("hPhivsThetaELossX4Y5", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX4Y6 = new TH2D("hPhivsThetaELossX4Y6", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX4Y6 = new TH2D("hPhivsThetaELossX4Y6", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX4Y6 = new TH2D("hPhivsThetaELossX4Y6", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX4Y7 = new TH2D("hPhivsThetaELossX4Y7", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX4Y7 = new TH2D("hPhivsThetaELossX4Y7", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX4Y7 = new TH2D("hPhivsThetaELossX4Y7", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX4Y8 = new TH2D("hPhivsThetaELossX4Y8", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX4Y8 = new TH2D("hPhivsThetaELossX4Y8", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX4Y8 = new TH2D("hPhivsThetaELossX4Y8", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX4Y9 = new TH2D("hPhivsThetaELossX4Y9", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX4Y9 = new TH2D("hPhivsThetaELossX4Y9", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX4Y9 = new TH2D("hPhivsThetaELossX4Y9", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX5Y0 = new TH2D("hPhivsThetaELossX5Y0", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX5Y0 = new TH2D("hPhivsThetaELossX5Y0", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX5Y0 = new TH2D("hPhivsThetaELossX5Y0", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX5Y1 = new TH2D("hPhivsThetaELossX5Y1", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX5Y1 = new TH2D("hPhivsThetaELossX5Y1", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX5Y1 = new TH2D("hPhivsThetaELossX5Y1", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX5Y2 = new TH2D("hPhivsThetaELossX5Y2", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX5Y2 = new TH2D("hPhivsThetaELossX5Y2", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX5Y2 = new TH2D("hPhivsThetaELossX5Y2", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX5Y3 = new TH2D("hPhivsThetaELossX5Y3", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX5Y3 = new TH2D("hPhivsThetaELossX5Y3", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX5Y3 = new TH2D("hPhivsThetaELossX5Y3", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX5Y4 = new TH2D("hPhivsThetaELossX5Y4", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX5Y4 = new TH2D("hPhivsThetaELossX5Y4", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX5Y4 = new TH2D("hPhivsThetaELossX5Y4", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX5Y5 = new TH2D("hPhivsThetaELossX5Y5", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX5Y5 = new TH2D("hPhivsThetaELossX5Y5", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX5Y5 = new TH2D("hPhivsThetaELossX5Y5", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX5Y6 = new TH2D("hPhivsThetaELossX5Y6", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX5Y6 = new TH2D("hPhivsThetaELossX5Y6", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX5Y6 = new TH2D("hPhivsThetaELossX5Y6", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX5Y7 = new TH2D("hPhivsThetaELossX5Y7", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX5Y7 = new TH2D("hPhivsThetaELossX5Y7", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX5Y7 = new TH2D("hPhivsThetaELossX5Y7", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX5Y8 = new TH2D("hPhivsThetaELossX5Y8", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX5Y8 = new TH2D("hPhivsThetaELossX5Y8", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX5Y8 = new TH2D("hPhivsThetaELossX5Y8", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX5Y9 = new TH2D("hPhivsThetaELossX5Y9", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX5Y9 = new TH2D("hPhivsThetaELossX5Y9", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX5Y9 = new TH2D("hPhivsThetaELossX5Y9", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX6Y0 = new TH2D("hPhivsThetaELossX6Y0", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX6Y0 = new TH2D("hPhivsThetaELossX6Y0", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX6Y0 = new TH2D("hPhivsThetaELossX6Y0", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX6Y1 = new TH2D("hPhivsThetaELossX6Y1", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX6Y1 = new TH2D("hPhivsThetaELossX6Y1", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX6Y1 = new TH2D("hPhivsThetaELossX6Y1", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX6Y2 = new TH2D("hPhivsThetaELossX6Y2", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX6Y2 = new TH2D("hPhivsThetaELossX6Y2", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX6Y2 = new TH2D("hPhivsThetaELossX6Y2", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX6Y3 = new TH2D("hPhivsThetaELossX6Y3", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX6Y3 = new TH2D("hPhivsThetaELossX6Y3", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX6Y3 = new TH2D("hPhivsThetaELossX6Y3", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX6Y4 = new TH2D("hPhivsThetaELossX6Y4", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX6Y4 = new TH2D("hPhivsThetaELossX6Y4", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX6Y4 = new TH2D("hPhivsThetaELossX6Y4", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX6Y5 = new TH2D("hPhivsThetaELossX6Y5", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX6Y5 = new TH2D("hPhivsThetaELossX6Y5", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX6Y5 = new TH2D("hPhivsThetaELossX6Y5", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX6Y6 = new TH2D("hPhivsThetaELossX6Y6", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX6Y6 = new TH2D("hPhivsThetaELossX6Y6", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX6Y6 = new TH2D("hPhivsThetaELossX6Y6", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX6Y7 = new TH2D("hPhivsThetaELossX6Y7", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX6Y7 = new TH2D("hPhivsThetaELossX6Y7", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX6Y7 = new TH2D("hPhivsThetaELossX6Y7", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX6Y8 = new TH2D("hPhivsThetaELossX6Y8", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX6Y8 = new TH2D("hPhivsThetaELossX6Y8", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX6Y8 = new TH2D("hPhivsThetaELossX6Y8", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX6Y9 = new TH2D("hPhivsThetaELossX6Y9", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX6Y9 = new TH2D("hPhivsThetaELossX6Y9", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX6Y9 = new TH2D("hPhivsThetaELossX6Y9", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX7Y0 = new TH2D("hPhivsThetaELossX7Y0", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX7Y0 = new TH2D("hPhivsThetaELossX7Y0", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX7Y0 = new TH2D("hPhivsThetaELossX7Y0", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX7Y1 = new TH2D("hPhivsThetaELossX7Y1", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX7Y1 = new TH2D("hPhivsThetaELossX7Y1", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX7Y1 = new TH2D("hPhivsThetaELossX7Y1", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX7Y2 = new TH2D("hPhivsThetaELossX7Y2", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX7Y2 = new TH2D("hPhivsThetaELossX7Y2", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX7Y2 = new TH2D("hPhivsThetaELossX7Y2", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX7Y3 = new TH2D("hPhivsThetaELossX7Y3", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX7Y3 = new TH2D("hPhivsThetaELossX7Y3", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX7Y3 = new TH2D("hPhivsThetaELossX7Y3", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX7Y4 = new TH2D("hPhivsThetaELossX7Y4", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX7Y4 = new TH2D("hPhivsThetaELossX7Y4", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX7Y4 = new TH2D("hPhivsThetaELossX7Y4", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX7Y5 = new TH2D("hPhivsThetaELossX7Y5", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX7Y5 = new TH2D("hPhivsThetaELossX7Y5", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX7Y5 = new TH2D("hPhivsThetaELossX7Y5", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX7Y6 = new TH2D("hPhivsThetaELossX7Y6", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX7Y6 = new TH2D("hPhivsThetaELossX7Y6", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX7Y6 = new TH2D("hPhivsThetaELossX7Y6", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX7Y7 = new TH2D("hPhivsThetaELossX7Y7", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX7Y7 = new TH2D("hPhivsThetaELossX7Y7", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX7Y7 = new TH2D("hPhivsThetaELossX7Y7", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX7Y8 = new TH2D("hPhivsThetaELossX7Y8", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX7Y8 = new TH2D("hPhivsThetaELossX7Y8", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX7Y8 = new TH2D("hPhivsThetaELossX7Y8", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX7Y9 = new TH2D("hPhivsThetaELossX7Y9", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX7Y9 = new TH2D("hPhivsThetaELossX7Y9", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX7Y9 = new TH2D("hPhivsThetaELossX7Y9", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX8Y0 = new TH2D("hPhivsThetaELossX8Y0", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX8Y0 = new TH2D("hPhivsThetaELossX8Y0", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX8Y0 = new TH2D("hPhivsThetaELossX8Y0", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX8Y1 = new TH2D("hPhivsThetaELossX8Y1", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX8Y1 = new TH2D("hPhivsThetaELossX8Y1", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX8Y1 = new TH2D("hPhivsThetaELossX8Y1", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX8Y2 = new TH2D("hPhivsThetaELossX8Y2", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX8Y2 = new TH2D("hPhivsThetaELossX8Y2", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX8Y2 = new TH2D("hPhivsThetaELossX8Y2", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX8Y3 = new TH2D("hPhivsThetaELossX8Y3", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX8Y3 = new TH2D("hPhivsThetaELossX8Y3", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX8Y3 = new TH2D("hPhivsThetaELossX8Y3", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX8Y4 = new TH2D("hPhivsThetaELossX8Y4", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX8Y4 = new TH2D("hPhivsThetaELossX8Y4", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX8Y4 = new TH2D("hPhivsThetaELossX8Y4", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX8Y5 = new TH2D("hPhivsThetaELossX8Y5", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX8Y5 = new TH2D("hPhivsThetaELossX8Y5", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX8Y5 = new TH2D("hPhivsThetaELossX8Y5", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX8Y6 = new TH2D("hPhivsThetaELossX8Y6", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX8Y6 = new TH2D("hPhivsThetaELossX8Y6", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX8Y6 = new TH2D("hPhivsThetaELossX8Y6", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX8Y7 = new TH2D("hPhivsThetaELossX8Y7", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX8Y7 = new TH2D("hPhivsThetaELossX8Y7", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX8Y7 = new TH2D("hPhivsThetaELossX8Y7", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX8Y8 = new TH2D("hPhivsThetaELossX8Y8", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX8Y8 = new TH2D("hPhivsThetaELossX8Y8", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX8Y8 = new TH2D("hPhivsThetaELossX8Y8", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX8Y9 = new TH2D("hPhivsThetaELossX8Y9", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX8Y9 = new TH2D("hPhivsThetaELossX8Y9", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX8Y9 = new TH2D("hPhivsThetaELossX8Y9", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX9Y0 = new TH2D("hPhivsThetaELossX9Y0", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX9Y0 = new TH2D("hPhivsThetaELossX9Y0", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX9Y0 = new TH2D("hPhivsThetaELossX9Y0", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX9Y1 = new TH2D("hPhivsThetaELossX9Y1", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX9Y1 = new TH2D("hPhivsThetaELossX9Y1", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX9Y1 = new TH2D("hPhivsThetaELossX9Y1", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX9Y2 = new TH2D("hPhivsThetaELossX9Y2", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX9Y2 = new TH2D("hPhivsThetaELossX9Y2", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX9Y2 = new TH2D("hPhivsThetaELossX9Y2", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX9Y3 = new TH2D("hPhivsThetaELossX9Y3", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX9Y3 = new TH2D("hPhivsThetaELossX9Y3", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX9Y3 = new TH2D("hPhivsThetaELossX9Y3", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX9Y4 = new TH2D("hPhivsThetaELossX9Y4", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX9Y4 = new TH2D("hPhivsThetaELossX9Y4", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX9Y4 = new TH2D("hPhivsThetaELossX9Y4", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX9Y5 = new TH2D("hPhivsThetaELossX9Y5", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX9Y5 = new TH2D("hPhivsThetaELossX9Y5", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX9Y5 = new TH2D("hPhivsThetaELossX9Y5", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX9Y6 = new TH2D("hPhivsThetaELossX9Y6", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX9Y6 = new TH2D("hPhivsThetaELossX9Y6", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX9Y6 = new TH2D("hPhivsThetaELossX9Y6", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX9Y7 = new TH2D("hPhivsThetaELossX9Y7", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX9Y7 = new TH2D("hPhivsThetaELossX9Y7", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX9Y7 = new TH2D("hPhivsThetaELossX9Y7", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX9Y8 = new TH2D("hPhivsThetaELossX9Y8", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX9Y8 = new TH2D("hPhivsThetaELossX9Y8", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX9Y8 = new TH2D("hPhivsThetaELossX9Y8", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

TH2D *hPhivsThetaELossX9Y9 = new TH2D("hPhivsThetaELossX9Y9", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossFluxX9Y9 = new TH2D("hPhivsThetaELossX9Y9", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);
TH2D *hPhivsThetaELossDividedX9Y9 = new TH2D("hPhivsThetaELossX9Y9", "Phi vs Energy Loss", 72, 0, 360, 8, -10, 30);

//=================================|





// ===================================================================================================================
// ===================================================================================================================

//-----------------------------|
//--- Energy Deposition MPV ---|
//-----------------------------|
double MPVArgon(double x)
{

    double x0 = 0.2;
    double x1 = 3.0;
    double Cbar = 5.2146;
    double a = 0.19559;
    double k = 3.0;
    double K = 0.307075;
    int Z = 18;
    double A = 39.948;
    double m_e = 0.511;
    double M_proton = 938.272;
    double I = 188e-6;
    double width = 0.47;
    double rho = 1.396;
    double j = 0.2;
    double zeta = (K/2)*(Z/A)*width*rho;

    double MPV = (zeta*(M_proton*M_proton/x/x+1)*(log((2*m_e/I)*(x*x/M_proton/M_proton))+log(zeta/I*(M_proton*M_proton/x/x+1))+0.2-       (1/(M_proton*M_proton/x/x+1))-((x<M_proton*exp(0.2*log(10)))*0+(M_proton*exp(0.2*log(10))<=x && x<M_proton*exp(3.0*log(10)))*(2*         log(x/M_proton)-Cbar+a*pow(x1-log(x/M_proton)/log(10),3.))+(x>=M_proton*exp(3.0*log(10)))*(2*log(x/M_proton)-Cbar)))/(width*rho)) *      rho;
     return MPV;

} //<--- Close MPV on Argon function
//-----------------------------|


void ProtonMCNew_0_1000::Loop()
{

// ##########################################################
// ### Putting in some counters for event reduction table ###
// ##########################################################
int nTotalEvents = 0, TrueStoppingParticle = 0, nRecoEvents = 0, nEntries = 10000;


float particle_mass = 938.28 ;

// ########################################################################
// ### Fiducial Boundry Cuts (used to determine if a track is stopping) ###
// ########################################################################
double XLowerFid = 0;
double XUpperFid = 47;

double YLowerFid = -20;
double YUpperFid = 20;

double ZLowerFid = 0;
double ZUpperFid = 90;


// ###################################
// ### Load the calibration tables ###
// ###################################
TFile *f1 = new TFile("./ROOTFILES/DataDrivenProtonMC_EnergyCalibrationTable.root");



if (fChain == 0) return;
Long64_t nentries = fChain->GetEntriesFast();
Long64_t nbytes = 0, nb = 0;
   
// #######################################################
// ###                 Looping over events             ###
// ####################################################### 
for (Long64_t jentry=0; jentry<nentries; jentry++) 
   {
   Long64_t ientry = LoadTree(jentry);
   if (ientry < 0) break;
   nb = fChain->GetEntry(jentry);   nbytes += nb;
   
   
   // #############################
   // ### Counting Total Events ###
   // #############################
   nTotalEvents++;
   
   
   // === Outputting every nEvents to the screen ===
   if(nTotalEvents % 10000 == 0){std::cout<<"Event = "<<nTotalEvents<<std::endl;}

   //=======================================================================================================================
   //					      GEANT 4 Information
   //=======================================================================================================================      
   
   
   bool EventsWhereParticleStops = false;
   
   int nG4Primary = 0;
   int nG4TrajPoints = 0;
   
   float g4Primary_X0[100] = {0.}, g4Primary_Y0[100] = {0.}, g4Primary_Z0[100] = {0.};
   float g4Primary_Xf[100] = {0.}, g4Primary_Yf[100] = {0.}, g4Primary_Zf[100] = {0.};
   float g4Primary_Px[100] = {0.}, g4Primary_Py[100] = {0.}, g4Primary_Pz[100] = {0.};
   float g4PrimaryEnd_Px[100] = {0.}, g4PrimaryEnd_Py[100] = {0.}, g4PrimaryEnd_Pz[100] = {0.};
   
   // #############################################
   // ###       Defining variables for the      ###
   // ### momentum at the front face of the TPC ###
   // #############################################
   
   float FrontFace_Px = 0, FrontFace_Py = 0, FrontFace_Pz = 0;
   
   // #################################
   // ### Variables for Energy Loss ###
   // #################################
   float EnergyLossOutsideTPC = 0;
   float EnergyLossInsideTPC = 0;
   float ERemainingMCTrue = 9999;
   
   float ERemainingMCMap = 9999;
   
   float ERemainingMCDumbFlat = 9999;
   
   float RecoEnergyLossInsideTPC = 0;
   
   float EnergyRemainingRecoTPCOnly = 9999;
   
   float InitialKineticEnergy = 0;
   
   float EnergyLossFromMap = 0;

   float ELossMapTrue = 0;
   
   // #######################################
   // ### Loop over all the G4  particles ###
   // #######################################
   for (int iG4 = 0; iG4 < geant_list_size; iG4++)
      {
      
      
      // #################################################################
      // ### Set to true if this event is a stopping proton in the TPC ###
      // #################################################################
      
      if(pdg[iG4] == 2212 && process_primary[iG4] == 1 && 
         EndPointz[iG4] > 0 && EndPointz[iG4] < 90 && EndPointx[iG4] > 0 && 
         EndPointx[iG4] < 47 && EndPointy[iG4] > -20 && 
	 EndPointy[iG4] < 20 && NumberDaughters[iG4] == 0) {EventsWhereParticleStops = true; }

      else {continue;}
      
      
      // ### Recording information for use later ###
      g4Primary_X0[nG4Primary] = StartPointx[iG4];
      g4Primary_Y0[nG4Primary] = StartPointy[iG4];
      g4Primary_Z0[nG4Primary] = StartPointz[iG4];
      
      g4Primary_Xf[nG4Primary] = EndPointx[iG4];
      g4Primary_Yf[nG4Primary] = EndPointy[iG4];
      g4Primary_Zf[nG4Primary] = EndPointz[iG4];
      
      g4Primary_Px[nG4Primary] = Px[iG4] * 1000; //<---Converting to MeV
      g4Primary_Py[nG4Primary] = Py[iG4] * 1000; //<---Converting to MeV
      g4Primary_Pz[nG4Primary] = Pz[iG4] * 1000; //<---Converting to MeV
      

      
      // ==========================
      // === Filling histograms ===
      // ==========================
      hMCPrimaryPxUnWeighted->Fill(g4Primary_Px[nG4Primary]);
      hMCPrimaryPyUnWeighted->Fill(g4Primary_Py[nG4Primary]);
      hMCPrimaryPzUnWeighted->Fill(g4Primary_Pz[nG4Primary]);
      
      hMCPrimaryStartX->Fill(StartPointx[iG4]);
      hMCPrimaryStartY->Fill(StartPointy[iG4]);
      hMCPrimaryStartZ->Fill(StartPointz[iG4]);
      
      hMCPrimaryEndX->Fill(EndPointx[iG4]);
      hMCPrimaryEndY->Fill(EndPointy[iG4]);
      hMCPrimaryEndZ->Fill(EndPointz[iG4]);
      
      hMCPrimaryEndXvsZ->Fill(EndPointz[iG4], EndPointx[iG4]);
      hMCPrimaryEndYvsZ->Fill(EndPointz[iG4], EndPointy[iG4]);
      
      
      
      // #############################################################
      // ### Calculating the momentum from the MC Primary Particle ###
      // #############################################################
      float momentumScale = sqrt( (g4Primary_Px[nG4Primary]*g4Primary_Px[nG4Primary]) + 
	                        (g4Primary_Py[nG4Primary]*g4Primary_Py[nG4Primary]) + 
				(g4Primary_Pz[nG4Primary]*g4Primary_Pz[nG4Primary]) );
				
      InitialKineticEnergy = sqrt( (momentumScale*momentumScale) + (particle_mass*particle_mass) ) - particle_mass;
      
      hMCPrimaryPUnWeighted->Fill(momentumScale);

      hMCTrueInitialKE->Fill(InitialKineticEnergy);
      
      
      // ### Defining first point ###
      float FirstPoint_Z = 999;
      float FirstPoint_Y = 999;
      float FirstPoint_X = 999;
      
      EnergyLossOutsideTPC = 0;
      
      // ##################################################
      // ### Looping over all primary trajectory points ###
      // ##################################################
      for(int iPriTrj = 1; iPriTrj < NTrTrajPts[iG4]; iPriTrj++)
         {
	 
	 // ### Only looking at points which are upstream of the TPC ###
	 if(MidPosZ[iG4][iPriTrj] < 0)
	    {
	    
	    float Momentum_Point1 = (sqrt((MidPx[iG4][iPriTrj-1]*MidPx[iG4][iPriTrj-1]) + 
	                               (MidPy[iG4][iPriTrj-1]*MidPy[iG4][iPriTrj-1]) +
				       (MidPz[iG4][iPriTrj-1]*MidPz[iG4][iPriTrj-1])))*1000;
				       
	    float Momentum_Point2 = (sqrt((MidPx[iG4][iPriTrj]*MidPx[iG4][iPriTrj]) + 
	                               (MidPy[iG4][iPriTrj]*MidPy[iG4][iPriTrj]) +
				       (MidPz[iG4][iPriTrj]*MidPz[iG4][iPriTrj])))*1000;
				       
	    float Energy_UpstreamPoint1 = sqrt( (Momentum_Point1*Momentum_Point1) + (particle_mass*particle_mass)) - particle_mass;
	       
	    float Energy_UpstreamPoint2 = sqrt( (Momentum_Point2*Momentum_Point2) + (particle_mass*particle_mass)) - particle_mass;
	       
	    EnergyLossOutsideTPC +=  Energy_UpstreamPoint1 - Energy_UpstreamPoint2;
	    }//<---End Looking at energy loss upstream of TPC
	    
	 // ##########################################################   
         // ### Only looking at points which are inside of the TPC ###
	 // ##########################################################
	 if(MidPosZ[iG4][iPriTrj] >= 0 && MidPosZ[iG4][iPriTrj] < 90 &&
	    MidPosX[iG4][iPriTrj] > 0 && MidPosX[iG4][iPriTrj] < 47 &&
	    MidPosY[iG4][iPriTrj] > -20 && MidPosY[iG4][iPriTrj] < 20 )
	    {
	    
	    float Momentum_Point1 = (sqrt((MidPx[iG4][iPriTrj-1]*MidPx[iG4][iPriTrj-1]) + 
	                               (MidPy[iG4][iPriTrj-1]*MidPy[iG4][iPriTrj-1]) +
				       (MidPz[iG4][iPriTrj-1]*MidPz[iG4][iPriTrj-1])))*1000;
				       
	    float Momentum_Point2 = (sqrt((MidPx[iG4][iPriTrj]*MidPx[iG4][iPriTrj]) + 
	                               (MidPy[iG4][iPriTrj]*MidPy[iG4][iPriTrj]) +
				       (MidPz[iG4][iPriTrj]*MidPz[iG4][iPriTrj])))*1000;
	       
	    // ### Storing the upstream point ###
	    if(MidPosZ[iG4][iPriTrj] < FirstPoint_Z)
	       {
	       FirstPoint_Z = MidPosZ[iG4][iPriTrj];
	       FirstPoint_Y = MidPosY[iG4][iPriTrj];
	       FirstPoint_X = MidPosX[iG4][iPriTrj];
	       //std::cout<<"FirstPoint_Z = "<<FirstPoint_Z<<std::endl;
	       //std::cout<<"MidPx[iG4][iPriTrj] = "<<MidPx[iG4][iPriTrj]<<std::endl;
	       FrontFace_Px = MidPx[iG4][iPriTrj] * 1000;
	       FrontFace_Py = MidPy[iG4][iPriTrj] * 1000;
	       FrontFace_Pz = MidPz[iG4][iPriTrj] * 1000;
	       
	       }//<---End finding upstream point
	    		       
	    float Energy_Point1 = sqrt( (Momentum_Point1*Momentum_Point1) + (particle_mass*particle_mass))  - particle_mass;
	       
	    //std::cout<<"Energy_Point1 = "<<Energy_Point1<<std::endl;
	    float Energy_Point2 = sqrt( (Momentum_Point2*Momentum_Point2) + (particle_mass*particle_mass)) - particle_mass;
	    //std::cout<<"Energy_Point2 = "<<Energy_Point2<<std::endl;
	       
	    //std::cout<<std::endl;
	    EnergyLossInsideTPC +=  Energy_Point1 - Energy_Point2;
	   
	    }//<---End Looking at energy loss upstream of TPC
	    
	    
	    
	    
	 }//<---iPriTrj loop
      // --- Filling initial TPC informationo ----
      hMCPrimaryTPCStartX->Fill(FirstPoint_X);
      hMCPrimaryTPCStartY->Fill(FirstPoint_Y); 
      hMCPrimaryTPCStartZ->Fill(FirstPoint_Z);	
      
       
      // --- Filling histograms for ELoss ---
      hMCTrueELossUpstream->Fill(EnergyLossOutsideTPC);
      hMCTrueELossInTPC->Fill(EnergyLossInsideTPC);
      
      hELossXvsY->Fill(FirstPoint_X, FirstPoint_Y, EnergyLossOutsideTPC);
      hELossXvsYFlux->Fill(FirstPoint_X, FirstPoint_Y);
      
      
      hMCPrimaryPzvsELossUpstream->Fill(momentumScale, EnergyLossOutsideTPC);
      
      
      // ### Studying weird behavior ###
      if(EnergyLossOutsideTPC > 85 || EnergyLossOutsideTPC < 105)
         {
	 // ##################################################
         // ### Looping over all primary trajectory points ###
         // ##################################################
         for(int iPriTrj = 1; iPriTrj < NTrTrajPts[iG4]; iPriTrj++)
            {
	 
	    // ### Only looking at points which are upstream of the TPC ###
	    if(MidPosZ[iG4][iPriTrj] < 0)
	       {
	       float Momentum_Point1 = (sqrt((MidPx[iG4][iPriTrj-1]*MidPx[iG4][iPriTrj-1]) + 
	                               (MidPy[iG4][iPriTrj-1]*MidPy[iG4][iPriTrj-1]) +
				       (MidPz[iG4][iPriTrj-1]*MidPz[iG4][iPriTrj-1])))*1000;
				       
	       float Momentum_Point2 = (sqrt((MidPx[iG4][iPriTrj]*MidPx[iG4][iPriTrj]) + 
	                               (MidPy[iG4][iPriTrj]*MidPy[iG4][iPriTrj]) +
				       (MidPz[iG4][iPriTrj]*MidPz[iG4][iPriTrj])))*1000;
				       
	       float Energy_UpstreamPoint1 = sqrt((Momentum_Point1*Momentum_Point1) + (particle_mass*particle_mass)) - particle_mass;
	       
	       float Energy_UpstreamPoint2 = sqrt((Momentum_Point2*Momentum_Point2) + (particle_mass*particle_mass)) - particle_mass;
	       
	       
	       float EnergyLossAtThisPoint = Energy_UpstreamPoint1 - Energy_UpstreamPoint2;
	       
	       hMCPrimaryXvsZWeirdPeak1->Fill(MidPosZ[iG4][iPriTrj], MidPosX[iG4][iPriTrj], EnergyLossAtThisPoint);
	       hMCPrimaryYvsZWeirdPeak1->Fill(MidPosZ[iG4][iPriTrj], MidPosY[iG4][iPriTrj], EnergyLossAtThisPoint);
	       
	       hMCPrimaryXvsZWeirdPeak1Flux->Fill(MidPosZ[iG4][iPriTrj], MidPosX[iG4][iPriTrj]);
	       hMCPrimaryYvsZWeirdPeak1Flux->Fill(MidPosZ[iG4][iPriTrj], MidPosY[iG4][iPriTrj]);
	       
	       }//End upstream requirement
	 
	 
	    }//<---End iPriTrj loop
	 }//<---End Weird peak
      if(EnergyLossOutsideTPC < 85 )
         {
	 // ##################################################
         // ### Looping over all primary trajectory points ###
         // ##################################################
         for(int iPriTrj = 1; iPriTrj < NTrTrajPts[iG4]; iPriTrj++)
            {
	 
	    // ### Only looking at points which are upstream of the TPC ###
	    if(MidPosZ[iG4][iPriTrj] < 0)
	       {
	       
	       float Momentum_Point1 = (sqrt((MidPx[iG4][iPriTrj-1]*MidPx[iG4][iPriTrj-1]) + 
	                               (MidPy[iG4][iPriTrj-1]*MidPy[iG4][iPriTrj-1]) +
				       (MidPz[iG4][iPriTrj-1]*MidPz[iG4][iPriTrj-1])))*1000;
				       
	       float Momentum_Point2 = (sqrt((MidPx[iG4][iPriTrj]*MidPx[iG4][iPriTrj]) + 
	                               (MidPy[iG4][iPriTrj]*MidPy[iG4][iPriTrj]) +
				       (MidPz[iG4][iPriTrj]*MidPz[iG4][iPriTrj])))*1000;
				       
	       float Energy_UpstreamPoint1 = sqrt( (Momentum_Point1*Momentum_Point1) + (particle_mass*particle_mass)) - particle_mass;
	       
	       float Energy_UpstreamPoint2 = sqrt( (Momentum_Point2*Momentum_Point2) + (particle_mass*particle_mass)) - particle_mass;
	       
	       
	       float EnergyLossAtThisPoint = Energy_UpstreamPoint1 - Energy_UpstreamPoint2;
	       
	       hMCPrimaryXvsZNotWeirdPeak->Fill(MidPosZ[iG4][iPriTrj], MidPosX[iG4][iPriTrj], EnergyLossAtThisPoint);
	       hMCPrimaryYvsZNotWeirdPeak->Fill(MidPosZ[iG4][iPriTrj], MidPosY[iG4][iPriTrj], EnergyLossAtThisPoint);
	       
	       hMCPrimaryXvsZNotWeirdPeakFlux->Fill(MidPosZ[iG4][iPriTrj], MidPosX[iG4][iPriTrj]);
	       hMCPrimaryYvsZNotWeirdPeakFlux->Fill(MidPosZ[iG4][iPriTrj], MidPosY[iG4][iPriTrj]);
	       
	       }//End upstream requirement
	 
	 
	    }//<---End iPriTrj loop
	 
	 
	 }//<---End Normal park of the peak 
      
      // ----------------------------------------------------------------------- 
      // ------------        Calculating the theta and phi at the       --------
      // ------------           at the front face of the TPC            --------
      // -----------------------------------------------------------------------
      
      // ################################################
      // ### Calculating the angles for the Geant4 MC ###
      // ################################################
      TVector3 z_hat_MC(0,0,1);
      TVector3 p_hat_0_MC;
      
      p_hat_0_MC.SetX(FrontFace_Px);
      p_hat_0_MC.SetY(FrontFace_Py);
      p_hat_0_MC.SetZ(FrontFace_Pz); 
      
      // ### Getting everything in the same convention ###
      float mcPhi = 0;
      float mcTheta = 0;
      
      // === Calculating Theta for MC ===
      
      mcTheta = acos(z_hat_MC.Dot(p_hat_0_MC)/p_hat_0_MC.Mag());
      
      // === Calculating Phi for MC ===
      
      //---------------------------------------------------------------------------------------------------------------------
      
      if( p_hat_0_MC.Y() > 0 && p_hat_0_MC.X() > 0 ){ mcPhi = atan(p_hat_0_MC.Y()/p_hat_0_MC.X()); }
      else if( p_hat_0_MC.Y() > 0 && p_hat_0_MC.X() < 0 ){ mcPhi = atan(p_hat_0_MC.Y()/p_hat_0_MC.X())+3.141592654; }
      else if( p_hat_0_MC.Y() < 0 && p_hat_0_MC.X() < 0 ){ mcPhi = atan(p_hat_0_MC.Y()/p_hat_0_MC.X())+3.141592654; }
      else if( p_hat_0_MC.Y() < 0 && p_hat_0_MC.X() > 0 ){ mcPhi = atan(p_hat_0_MC.Y()/p_hat_0_MC.X())+6.28318; }
      else if( p_hat_0_MC.Y() == 0 && p_hat_0_MC.X() == 0 ){ mcPhi = 0; }//defined by convention
      else if( p_hat_0_MC.Y() == 0 )
        {if( p_hat_0_MC.X() > 0 ){ mcPhi = 0; }
        else{ mcPhi = 3.141592654; }
	}
      else if( p_hat_0_MC.X() == 0 )
        {
	if( p_hat_0_MC.Y() > 0 ){ mcPhi = 3.141592654/2; }
	else{ mcPhi = 3.141592654*3/2; }
	}
      
      
      // --- Filling the angle plots at the front face of the TPC ---
      hMCPhiAtFrontFace->Fill(mcPhi *(180/3.14159));
      hMCThetaAtFrontFace->Fill(mcTheta *(180/3.14159));
      
      hPhivsThetaELoss->Fill(mcPhi*(180/3.14159) ,mcTheta*(180/3.14159), EnergyLossOutsideTPC);
      hPhivsThetaELossFlux->Fill(mcPhi*(180/3.14159) ,mcTheta*(180/3.14159));
      
      // ###################################################
      // ### Getting the energy loss for 5cm < Y < 15 cm ###
      // ###################################################
      if(FirstPoint_Y > 5 && FirstPoint_Y < 15)
         {
         hPhivsThetaELossTop->Fill(mcPhi*(180/3.14159) ,mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxTop->Fill(mcPhi*(180/3.14159) ,mcTheta*(180/3.14159));
	 }
      
      // ###################################################
      // ### Getting the energy loss for 5cm < Y < -5 cm ###
      // ###################################################
      if(FirstPoint_Y > -5 && FirstPoint_Y < 5)
         {
         hPhivsThetaELossMid->Fill(mcPhi*(180/3.14159) ,mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxMid->Fill(mcPhi*(180/3.14159) ,mcTheta*(180/3.14159));
	 }
      
      // #####################################################
      // ### Getting the energy loss for -5cm < Y < -15 cm ###
      // #####################################################
      if(FirstPoint_Y > -15 && FirstPoint_Y < -5)
         {
         hPhivsThetaELossBottom->Fill(mcPhi*(180/3.14159) ,mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxBottom->Fill(mcPhi*(180/3.14159) ,mcTheta*(180/3.14159));
	 }





       // ####################################################
       // ### Getting the energy loss for Right Theta Phi  ###
       // ####################################################
       if (mcPhi*(180/3.14159) > 240 && mcPhi*(180/3.14159) < 360)
          {
          hPhivsThetaELossR->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
	  hPhivsThetaELossFluxR->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	  hELossXvsYR->Fill(FirstPoint_X, FirstPoint_Y, EnergyLossOutsideTPC);
	  hELossXvsYFluxR->Fill(FirstPoint_X, FirstPoint_Y);
	  }

       // ####################################################
       // ### Getting the energy loss for Middle Theta Phi ###
       // ####################################################
       if (mcPhi*(180/3.14159) > 160 && mcPhi*(180/3.14159) < 240)
          {
          hPhivsThetaELossM->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
	  hPhivsThetaELossFluxM->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	  hELossXvsYM->Fill(FirstPoint_X, FirstPoint_Y, EnergyLossOutsideTPC);
	  hELossXvsYFluxM->Fill(FirstPoint_X, FirstPoint_Y);
	  }


       // ####################################################
       // ###  Getting the energy loss for Left Theta Phi  ###
       // ####################################################
       if (mcPhi*(180/3.14159) > 0 && mcPhi*(180/3.14159) < 160)
          {
          hPhivsThetaELossL->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
	  hPhivsThetaELossFluxL->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	  hELossXvsYL->Fill(FirstPoint_X, FirstPoint_Y, EnergyLossOutsideTPC);
	  hELossXvsYFluxL->Fill(FirstPoint_X, FirstPoint_Y);
	  }





      // ###########################################################
      // ###                Making New Map Method                ###
      // ###########################################################

      if (FirstPoint_X > 10 && FirstPoint_X < 13 && FirstPoint_Y > -15 && FirstPoint_Y < -12)
	 {
         hPhivsThetaELossX0Y0->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX0Y0->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 10 && FirstPoint_X < 13 && FirstPoint_Y > -12 && FirstPoint_Y < -9)
	 {
         hPhivsThetaELossX0Y1->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX0Y1->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 10 && FirstPoint_X < 13 && FirstPoint_Y > -9 && FirstPoint_Y < -6)
	 {
         hPhivsThetaELossX0Y2->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX0Y2->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 10 && FirstPoint_X < 13 && FirstPoint_Y > -6 && FirstPoint_Y < -3)
	 {
         hPhivsThetaELossX0Y3->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX0Y3->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 10 && FirstPoint_X < 13 && FirstPoint_Y > -3 && FirstPoint_Y < 0)
	 {
         hPhivsThetaELossX0Y4->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX0Y4->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 10 && FirstPoint_X < 13 && FirstPoint_Y > 0 && FirstPoint_Y < 3)
	 {
         hPhivsThetaELossX0Y5->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX0Y5->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 10 && FirstPoint_X < 13 && FirstPoint_Y > 3 && FirstPoint_Y < 6)
	 {
         hPhivsThetaELossX0Y6->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX0Y6->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 10 && FirstPoint_X < 13 && FirstPoint_Y > 6 && FirstPoint_Y < 9)
	 {
         hPhivsThetaELossX0Y7->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX0Y7->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 10 && FirstPoint_X < 13 && FirstPoint_Y > 9 && FirstPoint_Y < 12)
	 {
         hPhivsThetaELossX0Y8->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX0Y8->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 10 && FirstPoint_X < 13 && FirstPoint_Y > 12 && FirstPoint_Y < 15)
	 {
         hPhivsThetaELossX0Y9->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX0Y9->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 13 && FirstPoint_X < 16 && FirstPoint_Y > -15 && FirstPoint_Y < -12)
	 {
         hPhivsThetaELossX1Y0->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX1Y0->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 13 && FirstPoint_X < 16 && FirstPoint_Y > -12 && FirstPoint_Y < -9)
	 {
         hPhivsThetaELossX1Y1->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX1Y1->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 13 && FirstPoint_X < 16 && FirstPoint_Y > -9 && FirstPoint_Y < -6)
	 {
         hPhivsThetaELossX1Y2->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX1Y2->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 13 && FirstPoint_X < 16 && FirstPoint_Y > -6 && FirstPoint_Y < -3)
	 {
         hPhivsThetaELossX1Y3->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX1Y3->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 13 && FirstPoint_X < 16 && FirstPoint_Y > -3 && FirstPoint_Y < 0)
	 {
         hPhivsThetaELossX1Y4->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX1Y4->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 13 && FirstPoint_X < 16 && FirstPoint_Y > 0 && FirstPoint_Y < 3)
	 {
         hPhivsThetaELossX1Y5->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX1Y5->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 13 && FirstPoint_X < 16 && FirstPoint_Y > 3 && FirstPoint_Y < 6)
	 {
         hPhivsThetaELossX1Y6->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX1Y6->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 13 && FirstPoint_X < 16 && FirstPoint_Y > 6 && FirstPoint_Y < 9)
	 {
         hPhivsThetaELossX1Y7->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX1Y7->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 13 && FirstPoint_X < 16 && FirstPoint_Y > 9 && FirstPoint_Y < 12)
	 {
         hPhivsThetaELossX1Y8->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX1Y8->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 13 && FirstPoint_X < 16 && FirstPoint_Y > 12 && FirstPoint_Y < 15)
	 {
         hPhivsThetaELossX1Y9->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX1Y9->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 16 && FirstPoint_X < 19 && FirstPoint_Y > -15 && FirstPoint_Y < -12)
	 {
         hPhivsThetaELossX2Y0->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX2Y0->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 16 && FirstPoint_X < 19 && FirstPoint_Y > -12 && FirstPoint_Y < -9)
	 {
         hPhivsThetaELossX2Y1->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX2Y1->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 16 && FirstPoint_X < 19 && FirstPoint_Y > -9 && FirstPoint_Y < -6)
	 {
         hPhivsThetaELossX2Y2->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX2Y2->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 16 && FirstPoint_X < 19 && FirstPoint_Y > -6 && FirstPoint_Y < -3)
	 {
         hPhivsThetaELossX2Y3->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX2Y3->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 16 && FirstPoint_X < 19 && FirstPoint_Y > -3 && FirstPoint_Y < 0)
	 {
         hPhivsThetaELossX2Y4->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX2Y4->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 16 && FirstPoint_X < 19 && FirstPoint_Y > 0 && FirstPoint_Y < 3)
	 {
         hPhivsThetaELossX2Y5->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX2Y5->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 16 && FirstPoint_X < 19 && FirstPoint_Y > 3 && FirstPoint_Y < 6)
	 {
         hPhivsThetaELossX2Y6->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX2Y6->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 16 && FirstPoint_X < 19 && FirstPoint_Y > 6 && FirstPoint_Y < 9)
	 {
         hPhivsThetaELossX2Y7->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX2Y7->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 16 && FirstPoint_X < 19 && FirstPoint_Y > 9 && FirstPoint_Y < 12)
	 {
         hPhivsThetaELossX2Y8->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX2Y8->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 16 && FirstPoint_X < 19 && FirstPoint_Y > 12 && FirstPoint_Y < 15)
	 {
         hPhivsThetaELossX2Y9->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX2Y9->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 19 && FirstPoint_X < 22 && FirstPoint_Y > -15 && FirstPoint_Y < -12)
	 {
         hPhivsThetaELossX3Y0->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX3Y0->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 19 && FirstPoint_X < 22 && FirstPoint_Y > -12 && FirstPoint_Y < -9)
	 {
         hPhivsThetaELossX3Y1->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX3Y1->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 19 && FirstPoint_X < 22 && FirstPoint_Y > -9 && FirstPoint_Y < -6)
	 {
         hPhivsThetaELossX3Y2->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX3Y2->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 19 && FirstPoint_X < 22 && FirstPoint_Y > -6 && FirstPoint_Y < -3)
	 {
         hPhivsThetaELossX3Y3->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX3Y3->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 19 && FirstPoint_X < 22 && FirstPoint_Y > -3 && FirstPoint_Y < 0)
	 {
         hPhivsThetaELossX3Y4->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX3Y4->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 19 && FirstPoint_X < 22 && FirstPoint_Y > 0 && FirstPoint_Y < 3)
	 {
         hPhivsThetaELossX3Y5->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX3Y5->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 19 && FirstPoint_X < 22 && FirstPoint_Y > 3 && FirstPoint_Y < 6)
	 {
         hPhivsThetaELossX3Y6->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX3Y6->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 19 && FirstPoint_X < 22 && FirstPoint_Y > 6 && FirstPoint_Y < 9)
	 {
         hPhivsThetaELossX3Y7->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX3Y7->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 19 && FirstPoint_X < 22 && FirstPoint_Y > 9 && FirstPoint_Y < 12)
	 {
         hPhivsThetaELossX3Y8->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX3Y8->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 19 && FirstPoint_X < 22 && FirstPoint_Y > 12 && FirstPoint_Y < 15)
	 {
         hPhivsThetaELossX3Y9->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX3Y9->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 22 && FirstPoint_X < 25 && FirstPoint_Y > -15 && FirstPoint_Y < -12)
	 {
         hPhivsThetaELossX4Y0->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX4Y0->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 22 && FirstPoint_X < 25 && FirstPoint_Y > -12 && FirstPoint_Y < -9)
	 {
         hPhivsThetaELossX4Y1->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX4Y1->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 22 && FirstPoint_X < 25 && FirstPoint_Y > -9 && FirstPoint_Y < -6)
	 {
         hPhivsThetaELossX4Y2->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX4Y2->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 22 && FirstPoint_X < 25 && FirstPoint_Y > -6 && FirstPoint_Y < -3)
	 {
         hPhivsThetaELossX4Y3->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX4Y3->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 22 && FirstPoint_X < 25 && FirstPoint_Y > -3 && FirstPoint_Y < 0)
	 {
         hPhivsThetaELossX4Y4->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX4Y4->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 22 && FirstPoint_X < 25 && FirstPoint_Y > 0 && FirstPoint_Y < 3)
	 {
         hPhivsThetaELossX4Y5->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX4Y5->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 22 && FirstPoint_X < 25 && FirstPoint_Y > 3 && FirstPoint_Y < 6)
	 {
         hPhivsThetaELossX4Y6->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX4Y6->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 22 && FirstPoint_X < 25 && FirstPoint_Y > 6 && FirstPoint_Y < 9)
	 {
         hPhivsThetaELossX4Y7->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX4Y7->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 22 && FirstPoint_X < 25 && FirstPoint_Y > 9 && FirstPoint_Y < 12)
	 {
         hPhivsThetaELossX4Y8->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX4Y8->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 22 && FirstPoint_X < 25 && FirstPoint_Y > 12 && FirstPoint_Y < 15)
	 {
         hPhivsThetaELossX4Y9->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX4Y9->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 25 && FirstPoint_X < 28 && FirstPoint_Y > -15 && FirstPoint_Y < -12)
	 {
         hPhivsThetaELossX5Y0->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX5Y0->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 25 && FirstPoint_X < 28 && FirstPoint_Y > -12 && FirstPoint_Y < -9)
	 {
         hPhivsThetaELossX5Y1->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX5Y1->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 25 && FirstPoint_X < 28 && FirstPoint_Y > -9 && FirstPoint_Y < -6)
	 {
         hPhivsThetaELossX5Y2->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX5Y2->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 25 && FirstPoint_X < 28 && FirstPoint_Y > -6 && FirstPoint_Y < -3)
	 {
         hPhivsThetaELossX5Y3->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX5Y3->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 25 && FirstPoint_X < 28 && FirstPoint_Y > -3 && FirstPoint_Y < 0)
	 {
         hPhivsThetaELossX5Y4->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX5Y4->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 25 && FirstPoint_X < 28 && FirstPoint_Y > 0 && FirstPoint_Y < 3)
	 {
         hPhivsThetaELossX5Y5->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX5Y5->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 25 && FirstPoint_X < 28 && FirstPoint_Y > 3 && FirstPoint_Y < 6)
	 {
         hPhivsThetaELossX5Y6->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX5Y6->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 25 && FirstPoint_X < 28 && FirstPoint_Y > 6 && FirstPoint_Y < 9)
	 {
         hPhivsThetaELossX5Y7->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX5Y7->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 25 && FirstPoint_X < 28 && FirstPoint_Y > 9 && FirstPoint_Y < 12)
	 {
         hPhivsThetaELossX5Y8->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX5Y8->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 25 && FirstPoint_X < 28 && FirstPoint_Y > 12 && FirstPoint_Y < 15)
	 {
         hPhivsThetaELossX5Y9->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX5Y9->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 28 && FirstPoint_X < 31 && FirstPoint_Y > -15 && FirstPoint_Y < -12)
	 {
         hPhivsThetaELossX6Y0->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX6Y0->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 28 && FirstPoint_X < 31 && FirstPoint_Y > -12 && FirstPoint_Y < -9)
	 {
         hPhivsThetaELossX6Y1->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX6Y1->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 28 && FirstPoint_X < 31 && FirstPoint_Y > -9 && FirstPoint_Y < -6)
	 {
         hPhivsThetaELossX6Y2->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX6Y2->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 28 && FirstPoint_X < 31 && FirstPoint_Y > -6 && FirstPoint_Y < -3)
	 {
         hPhivsThetaELossX6Y3->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX6Y3->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 28 && FirstPoint_X < 31 && FirstPoint_Y > -3 && FirstPoint_Y < 0)
	 {
         hPhivsThetaELossX6Y4->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX6Y4->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 28 && FirstPoint_X < 31 && FirstPoint_Y > 0 && FirstPoint_Y < 3)
	 {
         hPhivsThetaELossX6Y5->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX6Y5->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 28 && FirstPoint_X < 31 && FirstPoint_Y > 3 && FirstPoint_Y < 6)
	 {
         hPhivsThetaELossX6Y6->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX6Y6->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 28 && FirstPoint_X < 31 && FirstPoint_Y > 6 && FirstPoint_Y < 9)
	 {
         hPhivsThetaELossX6Y7->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX6Y7->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 28 && FirstPoint_X < 31 && FirstPoint_Y > 9 && FirstPoint_Y < 12)
	 {
         hPhivsThetaELossX6Y8->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX6Y8->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 28 && FirstPoint_X < 31 && FirstPoint_Y > 12 && FirstPoint_Y < 15)
	 {
         hPhivsThetaELossX6Y9->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX6Y9->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 31 && FirstPoint_X < 34 && FirstPoint_Y > -15 && FirstPoint_Y < -12)
	 {
         hPhivsThetaELossX7Y0->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX7Y0->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 31 && FirstPoint_X < 34 && FirstPoint_Y > -12 && FirstPoint_Y < -9)
	 {
         hPhivsThetaELossX7Y1->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX7Y1->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 31 && FirstPoint_X < 34 && FirstPoint_Y > -9 && FirstPoint_Y < -6)
	 {
         hPhivsThetaELossX7Y2->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX7Y2->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 31 && FirstPoint_X < 34 && FirstPoint_Y > -6 && FirstPoint_Y < -3)
	 {
         hPhivsThetaELossX7Y3->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX7Y3->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 31 && FirstPoint_X < 34 && FirstPoint_Y > -3 && FirstPoint_Y < 0)
	 {
         hPhivsThetaELossX7Y4->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX7Y4->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 31 && FirstPoint_X < 34 && FirstPoint_Y > 0 && FirstPoint_Y < 3)
	 {
         hPhivsThetaELossX7Y5->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX7Y5->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 31 && FirstPoint_X < 34 && FirstPoint_Y > 3 && FirstPoint_Y < 6)
	 {
         hPhivsThetaELossX7Y6->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX7Y6->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 31 && FirstPoint_X < 34 && FirstPoint_Y > 6 && FirstPoint_Y < 9)
	 {
         hPhivsThetaELossX7Y7->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX7Y7->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 31 && FirstPoint_X < 34 && FirstPoint_Y > 9 && FirstPoint_Y < 12)
	 {
         hPhivsThetaELossX7Y8->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX7Y8->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 31 && FirstPoint_X < 34 && FirstPoint_Y > 12 && FirstPoint_Y < 15)
	 {
         hPhivsThetaELossX7Y9->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX7Y9->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 34 && FirstPoint_X < 37 && FirstPoint_Y > -15 && FirstPoint_Y < -12)
	 {
         hPhivsThetaELossX8Y0->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX8Y0->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 34 && FirstPoint_X < 37 && FirstPoint_Y > -12 && FirstPoint_Y < -9)
	 {
         hPhivsThetaELossX8Y1->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX8Y1->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 34 && FirstPoint_X < 37 && FirstPoint_Y > -9 && FirstPoint_Y < -6)
	 {
         hPhivsThetaELossX8Y2->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX8Y2->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 34 && FirstPoint_X < 37 && FirstPoint_Y > -6 && FirstPoint_Y < -3)
	 {
         hPhivsThetaELossX8Y3->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX8Y3->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 34 && FirstPoint_X < 37 && FirstPoint_Y > -3 && FirstPoint_Y < 0)
	 {
         hPhivsThetaELossX8Y4->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX8Y4->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 34 && FirstPoint_X < 37 && FirstPoint_Y > 0 && FirstPoint_Y < 3)
	 {
         hPhivsThetaELossX8Y5->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX8Y5->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 34 && FirstPoint_X < 37 && FirstPoint_Y > 3 && FirstPoint_Y < 6)
	 {
         hPhivsThetaELossX8Y6->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX8Y6->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 34 && FirstPoint_X < 37 && FirstPoint_Y > 6 && FirstPoint_Y < 9)
	 {
         hPhivsThetaELossX8Y7->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX8Y7->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 34 && FirstPoint_X < 37 && FirstPoint_Y > 9 && FirstPoint_Y < 12)
	 {
         hPhivsThetaELossX8Y8->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX8Y8->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 34 && FirstPoint_X < 37 && FirstPoint_Y > 12 && FirstPoint_Y < 15)
	 {
         hPhivsThetaELossX8Y9->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX8Y9->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 37 && FirstPoint_X < 40 && FirstPoint_Y > -15 && FirstPoint_Y < -12)
	 {
         hPhivsThetaELossX9Y0->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX9Y0->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 37 && FirstPoint_X < 40 && FirstPoint_Y > -12 && FirstPoint_Y < -9)
	 {
         hPhivsThetaELossX9Y1->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX9Y1->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 37 && FirstPoint_X < 40 && FirstPoint_Y > -9 && FirstPoint_Y < -6)
	 {
         hPhivsThetaELossX9Y2->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX9Y2->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 37 && FirstPoint_X < 40 && FirstPoint_Y > -6 && FirstPoint_Y < -3)
	 {
         hPhivsThetaELossX9Y3->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX9Y3->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 37 && FirstPoint_X < 40 && FirstPoint_Y > -3 && FirstPoint_Y < 0)
	 {
         hPhivsThetaELossX9Y4->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX9Y4->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 37 && FirstPoint_X < 40 && FirstPoint_Y > 0 && FirstPoint_Y < 3)
	 {
         hPhivsThetaELossX9Y5->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX9Y5->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 37 && FirstPoint_X < 40 && FirstPoint_Y > 3 && FirstPoint_Y < 6)
	 {
         hPhivsThetaELossX9Y6->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX9Y6->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 37 && FirstPoint_X < 40 && FirstPoint_Y > 6 && FirstPoint_Y < 9)
	 {
         hPhivsThetaELossX9Y7->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX9Y7->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 37 && FirstPoint_X < 40 && FirstPoint_Y > 9 && FirstPoint_Y < 12)
	 {
         hPhivsThetaELossX9Y8->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX9Y8->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      if (FirstPoint_X > 37 && FirstPoint_X < 40 && FirstPoint_Y > 12 && FirstPoint_Y < 15)
	 {
         hPhivsThetaELossX9Y9->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159), EnergyLossOutsideTPC);
         hPhivsThetaELossFluxX9Y9->Fill(mcPhi*(180/3.14159), mcTheta*(180/3.14159));
	 }

      // ###########################################################











      // ###################################################################
      // ### Calculating the remaining energy of the particle from truth ###
      // ###################################################################
      ERemainingMCTrue = InitialKineticEnergy - EnergyLossOutsideTPC - EnergyLossInsideTPC;
      
      hERemainMCTrue->Fill(ERemainingMCTrue);
      
      
      
      
      
      // --------------------------------------------------------------------------------------------------
      // --------------------------------------------------------------------------------------------------
      // 					MAP THE ENERGY LOSS
      // --------------------------------------------------------------------------------------------------
      // --------------------------------------------------------------------------------------------------
      
      EnergyLossFromMap = 0;
      float PhiInDegrees   = mcPhi *(180/3.14159);
      float ThetaInDegrees = mcTheta *(180/3.14159);
      
      
      // ################################################
      // ### Deterimine which histogram I should open ###
      // ################################################
      if(FirstPoint_Y > 5 && FirstPoint_Y < 15)
         {
	 TH1F *hMCELossMap = (TH1F*)f1->Get("hPhivsThetaELossDividedTop");
	 
	 // ### Loop over the phi bins ###
	 for(int nXbins = 1; nXbins < hMCELossMap->GetNbinsX(); nXbins++)
            {
	    // ### Match the phi angle ###
	    if(PhiInDegrees > (nXbins - 1)*5 && PhiInDegrees < nXbins * 5)
	       {
	       // ### Loop over the theta bins ###
	       for(int nYbins = 1; nYbins < hMCELossMap->GetNbinsY(); nYbins++)
	          {
	          // ### Match the theta angle ###
		  if(ThetaInDegrees > ((nYbins - 1)*5) - 10 && ThetaInDegrees < (nYbins*5) - 10)
		     {
	             EnergyLossFromMap = hMCELossMap->GetBinContent(nXbins, nYbins);
		     
		     //std::cout<<"PhiInDegrees = "<<PhiInDegrees<<", ThetaInDegrees = "<<ThetaInDegrees<<std::endl;
		     //std::cout<<"EnergyLossFromMap = "<<EnergyLossFromMap<<std::endl;
	    
	             }//<---End only looking if theta is matched
	          }//<---End nYbins loop
	       }//<---End only looking if the Phi is matched
	    }//<---End nXbins loop
	 
	 }//<---End Y in the top
      
      // ################################################
      // ### Deterimine which histogram I should open ###
      // ################################################
      if(FirstPoint_Y > -5 && FirstPoint_Y < 5)
         {
	 TH1F *hMCELossMap = (TH1F*)f1->Get("hPhivsThetaELossDividedMid");
	 
	 // ### Loop over the phi bins ###
	 for(int nXbins = 1; nXbins < hMCELossMap->GetNbinsX(); nXbins++)
            {
	    // ### Match the phi angle ###
	    if(PhiInDegrees > (nXbins - 1)*5 && PhiInDegrees < nXbins * 5)
	       {
	       // ### Loop over the theta bins ###
	       for(int nYbins = 1; nYbins < hMCELossMap->GetNbinsY(); nYbins++)
	          {
	          // ### Match the theta angle ###
		  if(ThetaInDegrees > ((nYbins - 1)*5) - 10 && ThetaInDegrees < (nYbins*5) - 10)
		     {
	             EnergyLossFromMap = hMCELossMap->GetBinContent(nXbins, nYbins);
		     
		     //std::cout<<"PhiInDegrees = "<<PhiInDegrees<<", ThetaInDegrees = "<<ThetaInDegrees<<std::endl;
		     //std::cout<<"EnergyLossFromMap = "<<EnergyLossFromMap<<std::endl;
	    
	             }//<---End only looking if theta is matched
	          }//<---End nYbins loop
	       }//<---End only looking if the Phi is matched
	    }//<---End nXbins loop
	 
	 }//<---End Y in the top
      
      // ################################################
      // ### Deterimine which histogram I should open ###
      // ################################################
      if(FirstPoint_Y > -15 && FirstPoint_Y < -5)
         {
	 TH1F *hMCELossMap = (TH1F*)f1->Get("hPhivsThetaELossDividedBottom");
	 
	 // ### Loop over the phi bins ###
	 for(int nXbins = 1; nXbins < hMCELossMap->GetNbinsX(); nXbins++)
            {
	    // ### Match the phi angle ###
	    if(PhiInDegrees > (nXbins - 1)*5 && PhiInDegrees < nXbins * 5)
	       {
	       // ### Loop over the theta bins ###
	       for(int nYbins = 1; nYbins < hMCELossMap->GetNbinsY(); nYbins++)
	          {
	          // ### Match the theta angle ###
		  if(ThetaInDegrees > ((nYbins - 1)*5) - 10 && ThetaInDegrees < (nYbins*5) - 10)
		     {
	             EnergyLossFromMap = hMCELossMap->GetBinContent(nXbins, nYbins);
		     
		     //std::cout<<"PhiInDegrees = "<<PhiInDegrees<<", ThetaInDegrees = "<<ThetaInDegrees<<std::endl;
		     //std::cout<<"EnergyLossFromMap = "<<EnergyLossFromMap<<std::endl;
	    
	             }//<---End only looking if theta is matched
	          }//<---End nYbins loop
	       }//<---End only looking if the Phi is matched
	    }//<---End nXbins loop
	 
	 }//<---End Y in the top    
      
      if(EnergyLossFromMap == 0){EnergyLossFromMap = 66.6;}
      
      // ###################################################################
      // ### Calculating the remaining energy of the particle from truth ###
      // ###################################################################
      ERemainingMCMap = InitialKineticEnergy - EnergyLossFromMap - EnergyLossInsideTPC;
      
      ERemainingMCDumbFlat = InitialKineticEnergy - 66.6 - EnergyLossInsideTPC;
      
      
      float DeltaEnergyLoss = EnergyLossOutsideTPC - EnergyLossFromMap;
      
      hDeltaEnergyLossTruevsMap->Fill(DeltaEnergyLoss);
      
      // === Filling Histograms ===
      hERemainMCTrue->Fill(ERemainingMCTrue);
      hMCELossUpstreamLookUp->Fill(EnergyLossFromMap);

      ELossMapTrue = EnergyLossFromMap;
      
      hERemainMCMap->Fill(ERemainingMCMap);
      
      hMCELossUpstreamFlat->Fill(66.6);
      hERemainMCFlat->Fill(ERemainingMCDumbFlat);
      
      nG4Primary++;
      

      }//<---End iG4 loop
      
   // ##########################################################
   // ### Bump the counter if this is a true stopping proton ###
   // ##########################################################
   if(EventsWhereParticleStops){TrueStoppingParticle++;}
   else{continue;}
   
   
   
   //=======================================================================================================================
   //					      Reconstructed information
   //======================================================================================================================= 
   
   bool ReconstructedEvent = true;
   
   float MCRecodEdX[1000]  = {0.}; 
   int nMCRecoSpts = 0; 
   
   double MCRecoSptsX[1000];
   double MCRecoSptsY[1000];
   double MCRecoSptsZ[1000];
   
   double MCRecoResRange[1000]={0.};
   double MCRecoPitch[1000]={0.};
   
   double primary_track_length = 0;
   // ##########################################
   // ### Loop over all reconstructed tracks ###
   // ##########################################
   for(int nTPCtrk = 0; nTPCtrk < ntracks_reco; nTPCtrk++)
      {
      // ###############################################################
      // ### Looping over the calorimetry spacepoints for this track ###
      // ###############################################################
      primary_track_length = trklength[nTPCtrk];
      for(int nspts = 0; nspts < ntrkhits[nTPCtrk]; nspts++)
         {
	 MCRecodEdX[nMCRecoSpts]     = trkdedx[nTPCtrk][1][nspts];
	 // ### Putting in a fix in the case that the dE/dX is negative in this step ### 
	 // ###  then take the point before and the point after and average them
	 if(MCRecodEdX[nMCRecoSpts] < 0 && nspts < ntrkhits[nTPCtrk] && nspts > 0)
	    {MCRecodEdX[nMCRecoSpts] = ( (trkdedx[nTPCtrk][1][nspts - 1] + trkdedx[nTPCtrk][1][nspts + 1]) / 2);}
	 
	 // ### If this didn't fix it, then just skip the point ###
	 if(MCRecodEdX[nMCRecoSpts] < 0){continue;}
	 
	 
	 MCRecoResRange[nMCRecoSpts] = trkrr[nTPCtrk][1][nspts];
         MCRecoPitch[nMCRecoSpts] = trkpitchhit[nTPCtrk][1][nspts];
	 
	 MCRecoSptsX[nMCRecoSpts] = trkxyz[nTPCtrk][1][nspts][0];
	 MCRecoSptsY[nMCRecoSpts] = trkxyz[nTPCtrk][1][nspts][1];
	 MCRecoSptsZ[nMCRecoSpts] = trkxyz[nTPCtrk][1][nspts][2];
	 
	 
	 // ### Histogramming the dE/dX ###
	 hRecoMCdEdX->Fill(MCRecodEdX[nMCRecoSpts]);
	 
	 // ### Histogramming the residual range ###
	 hRecoMCResidualRange->Fill(MCRecoResRange[nMCRecoSpts]);
	 
	 // ### Histogramming the Pitch ###
	 hRecoMCTrkPitch->Fill(MCRecoPitch[nMCRecoSpts]);
	 
	 // ### Filling 2d dE/dX vs RR ###
	 hRecoMCdEdXvsRR->Fill(MCRecoResRange[nMCRecoSpts], MCRecodEdX[nMCRecoSpts]);
	 
	 // ================================================================
	 // === Calculating the Reconstructed Energy loss inside the TPC ===
	 // ================================================================
	 RecoEnergyLossInsideTPC+= MCRecodEdX[nMCRecoSpts] * MCRecoPitch[nMCRecoSpts];
	 
	 nMCRecoSpts++;
	 }//<---End nspts loop
      
      
      // ####################################################################
      // ### As long as a track in the event has a point reco'd...take it ###
      // ####################################################################
      
      }//<---End nTPCtrk loop

   
   float FirstSpacePointZ = 999;
   float FirstSpacePointY = 999;
   float FirstSpacePointX = 999;
	 
   float TempTrj_X = 999;
   float TempTrj_Y = 999;
   float TempTrj_Z = 999;
   
   float RecoTPCTheta = 999;
   float RecoTPCPhi   = 999;
   
   
   // ####################################
   // ### Loop over all the TPC Tracks ###
   // ####################################
   for(int nTPCtrk = 0; nTPCtrk < ntracks_reco; nTPCtrk++)
      {
      // === Set a dummy variables for the most upstream point ===
      FirstSpacePointZ = 999;
      FirstSpacePointY = 999;
      FirstSpacePointX = 999;
	 
      TempTrj_X = 999;
      TempTrj_Y = 999;
      TempTrj_Z = 999;
      // ###############################################################
      // ### Looping over the trajectory points for the prelim-track ###
      // ###############################################################
      for(int ntrjpts = 0; ntrjpts < nTrajPoint[nTPCtrk]; ntrjpts++)
         {
	    
	 // ### Recording this tracks upstream most X, Y, Z location, ###
	 // ###       which is inside the fiducial boundary           ###
	 if(trjPt_Z[nTPCtrk][ntrjpts] < FirstSpacePointZ && trjPt_Y[nTPCtrk][ntrjpts] > YLowerFid && 
	    trjPt_Y[nTPCtrk][ntrjpts] < YUpperFid && trjPt_X[nTPCtrk][ntrjpts] > XLowerFid && 
	    trjPt_X[nTPCtrk][ntrjpts] < XUpperFid && trjPt_Z[nTPCtrk][ntrjpts] < 14)
	    {
	       
	    // ######################################
	    // ### Record the most upstream point ###
	    // ######################################
	    FirstSpacePointZ = trjPt_Z[nTPCtrk][ntrjpts];
	    FirstSpacePointY = trjPt_Y[nTPCtrk][ntrjpts];
	    FirstSpacePointX = trjPt_X[nTPCtrk][ntrjpts];
	       
	    TempTrj_X = pHat0_X[nTPCtrk][ntrjpts];
	    TempTrj_Y = pHat0_Y[nTPCtrk][ntrjpts];
	    TempTrj_Z = pHat0_Z[nTPCtrk][ntrjpts];
	       
	       
	    }//<---End finding the most upstream point
         }//<---End ntrjpts loop
	 
      // ###################################################
      // ### Vectors for angles between TPC and WC Track ###
      // ###################################################
      TVector3 z_hat(0,0,1);
      TVector3 p_hat_0;
      
      // ### Setting the vector for the matched track ###
      // ###      most upstream trajectory point      ###
      p_hat_0.SetX(TempTrj_X);
      p_hat_0.SetY(TempTrj_Y);
      p_hat_0.SetZ(TempTrj_Z); //<--Note: since at this point we only have one unique match
       		               //         only having one entry should be fine
	 			  
      // ===============================================================================================================
      // 				Calculating Theta and Phi for this TPC Track
      // ===============================================================================================================
      // ### Calculating the Theta for the TPC Track ###
      float tpcTheta = acos(z_hat.Dot(p_hat_0)/p_hat_0.Mag());  
      
      hRecoMCTPCTheta->Fill(tpcTheta* (180.0/3.141592654));
      
      RecoTPCTheta = tpcTheta* (180.0/3.141592654);
   
      // ### Using same convention as WCTrack to calculate phi ###
      float phi = 0;
      //Calculating phi (degeneracy elimination for the atan function)
      //----------------------------------------------------------------------------------------------
      if( p_hat_0.Y() > 0 && p_hat_0.X() > 0 ){ phi = atan(p_hat_0.Y()/p_hat_0.X()); }
      else if( p_hat_0.Y() > 0 && p_hat_0.X() < 0 ){ phi = atan(p_hat_0.Y()/p_hat_0.X())+3.141592654; }
      else if( p_hat_0.Y() < 0 && p_hat_0.X() < 0 ){ phi = atan(p_hat_0.Y()/p_hat_0.X())+3.141592654; }
      else if( p_hat_0.Y() < 0 && p_hat_0.X() > 0 ){ phi = atan(p_hat_0.Y()/p_hat_0.X())+6.28318; }
      else if( p_hat_0.Y() == 0 && p_hat_0.X() == 0 ){ phi = 0; }//defined by convention
      else if( p_hat_0.Y() == 0 )
         {
         if( p_hat_0.X() > 0 ){ phi = 0; }

         else{ phi = 3.141592654; }

         }
      else if( p_hat_0.X() == 0 )
         {
         if( p_hat_0.Y() > 0 ){ phi = 3.141592654/2; }
         else{ phi = 3.141592654*3/2; }

         }
      //----------------------------------------------------------------------------------------------
   
      // ### Using TPC Phi ###
      float tpcPhi = phi; 
      hRecoMCTPCPhi->Fill(tpcPhi* (180.0/3.141592654));
      
      RecoTPCPhi = tpcPhi* (180.0/3.141592654);
      
      }//<---end nTPCTrk
      // ===============================================================================================================            
      // ===============================================================================================================
   
   
   // ### Skipping events which aren't reconstructed ###
   if(nMCRecoSpts < 1){ReconstructedEvent = false; continue;}
   
   
   
   // ################################################
   // ### Deterimine which histogram I should open ###
   // ################################################
   if(FirstSpacePointY > 5 && FirstSpacePointY < 15)
      {
      TH1F *hMCELossMap = (TH1F*)f1->Get("hPhivsThetaELossDividedTop");
      
      // ### Loop over the phi bins ###
      for(int nXbins = 1; nXbins < hMCELossMap->GetNbinsX(); nXbins++)
         {
	 // ### Match the phi angle ###
	 if(RecoTPCPhi > (nXbins - 1)*5 && RecoTPCPhi < nXbins * 5)
	    {
	    // ### Loop over the theta bins ###
	    for(int nYbins = 1; nYbins < hMCELossMap->GetNbinsY(); nYbins++)
	       {
	       // ### Match the theta angle ###
	       if(RecoTPCTheta > ((nYbins - 1)*5) - 10 && RecoTPCTheta < (nYbins*5) - 10)
	          {
		  EnergyLossFromMap = hMCELossMap->GetBinContent(nXbins, nYbins);
		  
		  }//<---End only looking if theta is matched
	       }//<---End nYbins loop
	    }//<---End only looking if the Phi is matched
	 }//<---End nXbins loop
	 
      }//<---End Y in the top
      
   // ################################################
   // ### Deterimine which histogram I should open ###
   // ################################################
   if(FirstSpacePointY > -5 && FirstSpacePointY < 5)
      {
      TH1F *hMCELossMap = (TH1F*)f1->Get("hPhivsThetaELossDividedMid");
      
      // ### Loop over the phi bins ###
      for(int nXbins = 1; nXbins < hMCELossMap->GetNbinsX(); nXbins++)
         {
	 // ### Match the phi angle ###
	 if(RecoTPCPhi > (nXbins - 1)*5 && RecoTPCPhi < nXbins * 5)
	    {
	    // ### Loop over the theta bins ###
	    for(int nYbins = 1; nYbins < hMCELossMap->GetNbinsY(); nYbins++)
	       {
	       // ### Match the theta angle ###
	       if(RecoTPCTheta > ((nYbins - 1)*5) - 10 && RecoTPCTheta < (nYbins*5) - 10)
	          {
	          EnergyLossFromMap = hMCELossMap->GetBinContent(nXbins, nYbins);
		
	          }//<---End only looking if theta is matched
	       }//<---End nYbins loop
	    }//<---End only looking if the Phi is matched
	 }//<---End nXbins loop
      }//<---End Y in the top
      
   // ################################################
   // ### Deterimine which histogram I should open ###
   // ################################################
   if(FirstSpacePointY > -15 && FirstSpacePointY < -5)        
      {
      TH1F *hMCELossMap = (TH1F*)f1->Get("hPhivsThetaELossDividedBottom");
      
      // ### Loop over the phi bins ###
      for(int nXbins = 1; nXbins < hMCELossMap->GetNbinsX(); nXbins++)
         {
	 // ### Match the phi angle ###
	 if(RecoTPCPhi > (nXbins - 1)*5 && RecoTPCPhi < nXbins * 5)
	    {
	   // ### Loop over the theta bins ###
	    for(int nYbins = 1; nYbins < hMCELossMap->GetNbinsY(); nYbins++)
               {
               // ### Match the theta angle ###
	       if(RecoTPCTheta > ((nYbins - 1)*5) - 10 && RecoTPCTheta < (nYbins*5) - 10)
	          {
		  EnergyLossFromMap = hMCELossMap->GetBinContent(nXbins, nYbins);

	          }//<---End only looking if theta is matched
	       }//<---End nYbins loop
	    }//<---End only looking if the Phi is matched
	 }//<---End nXbins loop
	 
      }//<---End Y in the top    
      
   if(EnergyLossFromMap == 0){EnergyLossFromMap = 66.6;}
   
   hMCELossUpstreamTPCRecoMap->Fill(EnergyLossFromMap);
   
   
   
   
   
   
   
   // ### Filling Histograms ###
   hMCELossRecoInTPC->Fill(RecoEnergyLossInsideTPC);
   
   float DeltaEnergyLossInTPC = EnergyLossInsideTPC - RecoEnergyLossInsideTPC;
   float DeltaELossUpstreamTruevsReco = 999;

   float ETrueTotal = EnergyLossInsideTPC + EnergyLossOutsideTPC;
   float ERecoTotal = RecoEnergyLossInsideTPC + EnergyLossFromMap;

   float DeltaTotal = 999;
   DeltaTotal = ETrueTotal - ERecoTotal;

   if (DeltaTotal != 999) {hDeltaTotalTruevsReco->Fill(DeltaTotal);}

   DeltaELossUpstreamTruevsReco = ELossMapTrue - EnergyLossFromMap;

   if (DeltaELossUpstreamTruevsReco != 999) {hDeltaEnergyLossUpstreamTPCTruevsReco->Fill(DeltaELossUpstreamTruevsReco);}

   if (DeltaEnergyLossInTPC >= 15 && DeltaEnergyLossInTPC <= 34) 
      {
      hLXRecoInTPC->Fill(FirstSpacePointX);
      hLYRecoInTPC->Fill(FirstSpacePointY);
      hLZRecoInTPC->Fill(FirstSpacePointZ);

      hLInitKE->Fill(InitialKineticEnergy);

      hLRecoELossInTPC->Fill(RecoEnergyLossInsideTPC);
      hLTrueELossInTPC->Fill(EnergyLossInsideTPC);
      hLDeltaInTPC->Fill(DeltaEnergyLossInTPC);
      }

   if (DeltaEnergyLossInTPC >= 34 && DeltaEnergyLossInTPC <= 65) 
      {
      hRXRecoInTPC->Fill(FirstSpacePointX);
      hRYRecoInTPC->Fill(FirstSpacePointY);
      hRZRecoInTPC->Fill(FirstSpacePointZ);

      hRInitKE->Fill(InitialKineticEnergy);

      hRRecoELossInTPC->Fill(RecoEnergyLossInsideTPC);
      hRTrueELossInTPC->Fill(EnergyLossInsideTPC);
      hRDeltaInTPC->Fill(DeltaEnergyLossInTPC);
      }
   
   hDeltaEnergyLossInTPCTruevsReco->Fill(DeltaEnergyLossInTPC);

   hDeltaEInTPCvsTrkLength->Fill(primary_track_length,DeltaEnergyLossInTPC);
   hDeltaEInTPCvsKEinit->Fill(InitialKineticEnergy,DeltaEnergyLossInTPC);

   hRecoMCTPCStartX->Fill(FirstSpacePointX);
   hRecoMCTPCStartY->Fill(FirstSpacePointY);
   hRecoMCTPCStartZ->Fill(FirstSpacePointZ);
   
   // ########################################################################
   // ### Calculating the energy remaining using only reco TPC information ###
   // ########################################################################
   EnergyRemainingRecoTPCOnly = InitialKineticEnergy - EnergyLossOutsideTPC - RecoEnergyLossInsideTPC;
   
   hERemainTPCRecoOnly->Fill(EnergyRemainingRecoTPCOnly);
   
   if(ReconstructedEvent){nRecoEvents++;}
      
   }//<---End jentry loop
   
f1->Close();

std::cout<<"========================================================================================"<<std::endl;
std::cout<<"Total Number of Events 			    	   "<<nTotalEvents<<std::endl;
std::cout<<"Particles which reach the TPC and stop w/o interaction "<<TrueStoppingParticle<<std::endl;
std::cout<<"Events with reconstruction information                 "<<nRecoEvents<<std::endl;
std::cout<<"========================================================================================"<<std::endl;


// ###########################################
// ### Create a file for all my histograms ###
// ###########################################
TFile myfile("./ROOTFILES/ProtonMCNew_0_1000.root","RECREATE");


// ##########################
// ### Dividing the plots ###
// ##########################
hELossXvsYDivide->Divide(hELossXvsY, hELossXvsYFlux);
hPhivsThetaELossDivided->Divide(hPhivsThetaELoss, hPhivsThetaELossFlux);
hPhivsThetaELossDividedTop->Divide(hPhivsThetaELossTop, hPhivsThetaELossFluxTop);
hPhivsThetaELossDividedMid->Divide(hPhivsThetaELossMid, hPhivsThetaELossFluxMid);
hPhivsThetaELossDividedBottom->Divide(hPhivsThetaELossBottom, hPhivsThetaELossFluxBottom);

hMCPrimaryXvsZWeirdPeak1Divide->Divide(hMCPrimaryXvsZWeirdPeak1, hMCPrimaryXvsZWeirdPeak1Flux);
hMCPrimaryYvsZWeirdPeak1Divide->Divide(hMCPrimaryYvsZWeirdPeak1, hMCPrimaryYvsZWeirdPeak1Flux);

hMCPrimaryXvsZNotWeirdPeakDivide->Divide(hMCPrimaryXvsZNotWeirdPeak, hMCPrimaryXvsZNotWeirdPeakFlux);
hMCPrimaryYvsZNotWeirdPeakDivide->Divide(hMCPrimaryYvsZNotWeirdPeak, hMCPrimaryYvsZNotWeirdPeakFlux);

hPhivsThetaELossDividedR->Divide(hPhivsThetaELossR, hPhivsThetaELossFluxR);
hELossXvsYDivideR->Divide(hELossXvsYR, hELossXvsYFluxR);

hPhivsThetaELossDividedM->Divide(hPhivsThetaELossM, hPhivsThetaELossFluxM);
hELossXvsYDivideM->Divide(hELossXvsYM, hELossXvsYFluxM);

hPhivsThetaELossDividedL->Divide(hPhivsThetaELossL, hPhivsThetaELossFluxL);
hELossXvsYDivideL->Divide(hELossXvsYL, hELossXvsYFluxL);


// ==================================|
// === Divided New Map Histograms ===|
// ==================================|

hPhivsThetaELossDividedX0Y0->Divide(hPhivsThetaELossX0Y0, hPhivsThetaELossFluxX0Y0);
hPhivsThetaELossDividedX0Y1->Divide(hPhivsThetaELossX0Y1, hPhivsThetaELossFluxX0Y1);
hPhivsThetaELossDividedX0Y2->Divide(hPhivsThetaELossX0Y2, hPhivsThetaELossFluxX0Y2);
hPhivsThetaELossDividedX0Y3->Divide(hPhivsThetaELossX0Y3, hPhivsThetaELossFluxX0Y3);
hPhivsThetaELossDividedX0Y4->Divide(hPhivsThetaELossX0Y4, hPhivsThetaELossFluxX0Y4);
hPhivsThetaELossDividedX0Y5->Divide(hPhivsThetaELossX0Y5, hPhivsThetaELossFluxX0Y5);
hPhivsThetaELossDividedX0Y6->Divide(hPhivsThetaELossX0Y6, hPhivsThetaELossFluxX0Y6);
hPhivsThetaELossDividedX0Y7->Divide(hPhivsThetaELossX0Y7, hPhivsThetaELossFluxX0Y7);
hPhivsThetaELossDividedX0Y8->Divide(hPhivsThetaELossX0Y8, hPhivsThetaELossFluxX0Y8);
hPhivsThetaELossDividedX0Y9->Divide(hPhivsThetaELossX0Y9, hPhivsThetaELossFluxX0Y9);

hPhivsThetaELossDividedX1Y0->Divide(hPhivsThetaELossX1Y0, hPhivsThetaELossFluxX1Y0);
hPhivsThetaELossDividedX1Y1->Divide(hPhivsThetaELossX1Y1, hPhivsThetaELossFluxX1Y1);
hPhivsThetaELossDividedX1Y2->Divide(hPhivsThetaELossX1Y2, hPhivsThetaELossFluxX1Y2);
hPhivsThetaELossDividedX1Y3->Divide(hPhivsThetaELossX1Y3, hPhivsThetaELossFluxX1Y3);
hPhivsThetaELossDividedX1Y4->Divide(hPhivsThetaELossX1Y4, hPhivsThetaELossFluxX1Y4);
hPhivsThetaELossDividedX1Y5->Divide(hPhivsThetaELossX1Y5, hPhivsThetaELossFluxX1Y5);
hPhivsThetaELossDividedX1Y6->Divide(hPhivsThetaELossX1Y6, hPhivsThetaELossFluxX1Y6);
hPhivsThetaELossDividedX1Y7->Divide(hPhivsThetaELossX1Y7, hPhivsThetaELossFluxX1Y7);
hPhivsThetaELossDividedX1Y8->Divide(hPhivsThetaELossX1Y8, hPhivsThetaELossFluxX1Y8);
hPhivsThetaELossDividedX1Y9->Divide(hPhivsThetaELossX1Y9, hPhivsThetaELossFluxX1Y9);

hPhivsThetaELossDividedX2Y0->Divide(hPhivsThetaELossX2Y0, hPhivsThetaELossFluxX2Y0);
hPhivsThetaELossDividedX2Y1->Divide(hPhivsThetaELossX2Y1, hPhivsThetaELossFluxX2Y1);
hPhivsThetaELossDividedX2Y2->Divide(hPhivsThetaELossX2Y2, hPhivsThetaELossFluxX2Y2);
hPhivsThetaELossDividedX2Y3->Divide(hPhivsThetaELossX2Y3, hPhivsThetaELossFluxX2Y3);
hPhivsThetaELossDividedX2Y4->Divide(hPhivsThetaELossX2Y4, hPhivsThetaELossFluxX2Y4);
hPhivsThetaELossDividedX2Y5->Divide(hPhivsThetaELossX2Y5, hPhivsThetaELossFluxX2Y5);
hPhivsThetaELossDividedX2Y6->Divide(hPhivsThetaELossX2Y6, hPhivsThetaELossFluxX2Y6);
hPhivsThetaELossDividedX2Y7->Divide(hPhivsThetaELossX2Y7, hPhivsThetaELossFluxX2Y7);
hPhivsThetaELossDividedX2Y8->Divide(hPhivsThetaELossX2Y8, hPhivsThetaELossFluxX2Y8);
hPhivsThetaELossDividedX2Y9->Divide(hPhivsThetaELossX2Y9, hPhivsThetaELossFluxX2Y9);

hPhivsThetaELossDividedX3Y0->Divide(hPhivsThetaELossX3Y0, hPhivsThetaELossFluxX3Y0);
hPhivsThetaELossDividedX3Y1->Divide(hPhivsThetaELossX3Y1, hPhivsThetaELossFluxX3Y1);
hPhivsThetaELossDividedX3Y2->Divide(hPhivsThetaELossX3Y2, hPhivsThetaELossFluxX3Y2);
hPhivsThetaELossDividedX3Y3->Divide(hPhivsThetaELossX3Y3, hPhivsThetaELossFluxX3Y3);
hPhivsThetaELossDividedX3Y4->Divide(hPhivsThetaELossX3Y4, hPhivsThetaELossFluxX3Y4);
hPhivsThetaELossDividedX3Y5->Divide(hPhivsThetaELossX3Y5, hPhivsThetaELossFluxX3Y5);
hPhivsThetaELossDividedX3Y6->Divide(hPhivsThetaELossX3Y6, hPhivsThetaELossFluxX3Y6);
hPhivsThetaELossDividedX3Y7->Divide(hPhivsThetaELossX3Y7, hPhivsThetaELossFluxX3Y7);
hPhivsThetaELossDividedX3Y8->Divide(hPhivsThetaELossX3Y8, hPhivsThetaELossFluxX3Y8);
hPhivsThetaELossDividedX3Y9->Divide(hPhivsThetaELossX3Y9, hPhivsThetaELossFluxX3Y9);

hPhivsThetaELossDividedX4Y0->Divide(hPhivsThetaELossX4Y0, hPhivsThetaELossFluxX4Y0);
hPhivsThetaELossDividedX4Y1->Divide(hPhivsThetaELossX4Y1, hPhivsThetaELossFluxX4Y1);
hPhivsThetaELossDividedX4Y2->Divide(hPhivsThetaELossX4Y2, hPhivsThetaELossFluxX4Y2);
hPhivsThetaELossDividedX4Y3->Divide(hPhivsThetaELossX4Y3, hPhivsThetaELossFluxX4Y3);
hPhivsThetaELossDividedX4Y4->Divide(hPhivsThetaELossX4Y4, hPhivsThetaELossFluxX4Y4);
hPhivsThetaELossDividedX4Y5->Divide(hPhivsThetaELossX4Y5, hPhivsThetaELossFluxX4Y5);
hPhivsThetaELossDividedX4Y6->Divide(hPhivsThetaELossX4Y6, hPhivsThetaELossFluxX4Y6);
hPhivsThetaELossDividedX4Y7->Divide(hPhivsThetaELossX4Y7, hPhivsThetaELossFluxX4Y7);
hPhivsThetaELossDividedX4Y8->Divide(hPhivsThetaELossX4Y8, hPhivsThetaELossFluxX4Y8);
hPhivsThetaELossDividedX4Y9->Divide(hPhivsThetaELossX4Y9, hPhivsThetaELossFluxX4Y9);

hPhivsThetaELossDividedX5Y0->Divide(hPhivsThetaELossX5Y0, hPhivsThetaELossFluxX5Y0);
hPhivsThetaELossDividedX5Y1->Divide(hPhivsThetaELossX5Y1, hPhivsThetaELossFluxX5Y1);
hPhivsThetaELossDividedX5Y2->Divide(hPhivsThetaELossX5Y2, hPhivsThetaELossFluxX5Y2);
hPhivsThetaELossDividedX5Y3->Divide(hPhivsThetaELossX5Y3, hPhivsThetaELossFluxX5Y3);
hPhivsThetaELossDividedX5Y4->Divide(hPhivsThetaELossX5Y4, hPhivsThetaELossFluxX5Y4);
hPhivsThetaELossDividedX5Y5->Divide(hPhivsThetaELossX5Y5, hPhivsThetaELossFluxX5Y5);
hPhivsThetaELossDividedX5Y6->Divide(hPhivsThetaELossX5Y6, hPhivsThetaELossFluxX5Y6);
hPhivsThetaELossDividedX5Y7->Divide(hPhivsThetaELossX5Y7, hPhivsThetaELossFluxX5Y7);
hPhivsThetaELossDividedX5Y8->Divide(hPhivsThetaELossX5Y8, hPhivsThetaELossFluxX5Y8);
hPhivsThetaELossDividedX5Y9->Divide(hPhivsThetaELossX5Y9, hPhivsThetaELossFluxX5Y9);

hPhivsThetaELossDividedX6Y0->Divide(hPhivsThetaELossX6Y0, hPhivsThetaELossFluxX6Y0);
hPhivsThetaELossDividedX6Y1->Divide(hPhivsThetaELossX6Y1, hPhivsThetaELossFluxX6Y1);
hPhivsThetaELossDividedX6Y2->Divide(hPhivsThetaELossX6Y2, hPhivsThetaELossFluxX6Y2);
hPhivsThetaELossDividedX6Y3->Divide(hPhivsThetaELossX6Y3, hPhivsThetaELossFluxX6Y3);
hPhivsThetaELossDividedX6Y4->Divide(hPhivsThetaELossX6Y4, hPhivsThetaELossFluxX6Y4);
hPhivsThetaELossDividedX6Y5->Divide(hPhivsThetaELossX6Y5, hPhivsThetaELossFluxX6Y5);
hPhivsThetaELossDividedX6Y6->Divide(hPhivsThetaELossX6Y6, hPhivsThetaELossFluxX6Y6);
hPhivsThetaELossDividedX6Y7->Divide(hPhivsThetaELossX6Y7, hPhivsThetaELossFluxX6Y7);
hPhivsThetaELossDividedX6Y8->Divide(hPhivsThetaELossX6Y8, hPhivsThetaELossFluxX6Y8);
hPhivsThetaELossDividedX6Y9->Divide(hPhivsThetaELossX6Y9, hPhivsThetaELossFluxX6Y9);

hPhivsThetaELossDividedX7Y0->Divide(hPhivsThetaELossX7Y0, hPhivsThetaELossFluxX7Y0);
hPhivsThetaELossDividedX7Y1->Divide(hPhivsThetaELossX7Y1, hPhivsThetaELossFluxX7Y1);
hPhivsThetaELossDividedX7Y2->Divide(hPhivsThetaELossX7Y2, hPhivsThetaELossFluxX7Y2);
hPhivsThetaELossDividedX7Y3->Divide(hPhivsThetaELossX7Y3, hPhivsThetaELossFluxX7Y3);
hPhivsThetaELossDividedX7Y4->Divide(hPhivsThetaELossX7Y4, hPhivsThetaELossFluxX7Y4);
hPhivsThetaELossDividedX7Y5->Divide(hPhivsThetaELossX7Y5, hPhivsThetaELossFluxX7Y5);
hPhivsThetaELossDividedX7Y6->Divide(hPhivsThetaELossX7Y6, hPhivsThetaELossFluxX7Y6);
hPhivsThetaELossDividedX7Y7->Divide(hPhivsThetaELossX7Y7, hPhivsThetaELossFluxX7Y7);
hPhivsThetaELossDividedX7Y8->Divide(hPhivsThetaELossX7Y8, hPhivsThetaELossFluxX7Y8);
hPhivsThetaELossDividedX7Y9->Divide(hPhivsThetaELossX7Y9, hPhivsThetaELossFluxX7Y9);

hPhivsThetaELossDividedX8Y0->Divide(hPhivsThetaELossX8Y0, hPhivsThetaELossFluxX8Y0);
hPhivsThetaELossDividedX8Y1->Divide(hPhivsThetaELossX8Y1, hPhivsThetaELossFluxX8Y1);
hPhivsThetaELossDividedX8Y2->Divide(hPhivsThetaELossX8Y2, hPhivsThetaELossFluxX8Y2);
hPhivsThetaELossDividedX8Y3->Divide(hPhivsThetaELossX8Y3, hPhivsThetaELossFluxX8Y3);
hPhivsThetaELossDividedX8Y4->Divide(hPhivsThetaELossX8Y4, hPhivsThetaELossFluxX8Y4);
hPhivsThetaELossDividedX8Y5->Divide(hPhivsThetaELossX8Y5, hPhivsThetaELossFluxX8Y5);
hPhivsThetaELossDividedX8Y6->Divide(hPhivsThetaELossX8Y6, hPhivsThetaELossFluxX8Y6);
hPhivsThetaELossDividedX8Y7->Divide(hPhivsThetaELossX8Y7, hPhivsThetaELossFluxX8Y7);
hPhivsThetaELossDividedX8Y8->Divide(hPhivsThetaELossX8Y8, hPhivsThetaELossFluxX8Y8);
hPhivsThetaELossDividedX8Y9->Divide(hPhivsThetaELossX8Y9, hPhivsThetaELossFluxX8Y9);

hPhivsThetaELossDividedX9Y0->Divide(hPhivsThetaELossX9Y0, hPhivsThetaELossFluxX9Y0);
hPhivsThetaELossDividedX9Y1->Divide(hPhivsThetaELossX9Y1, hPhivsThetaELossFluxX9Y1);
hPhivsThetaELossDividedX9Y2->Divide(hPhivsThetaELossX9Y2, hPhivsThetaELossFluxX9Y2);
hPhivsThetaELossDividedX9Y3->Divide(hPhivsThetaELossX9Y3, hPhivsThetaELossFluxX9Y3);
hPhivsThetaELossDividedX9Y4->Divide(hPhivsThetaELossX9Y4, hPhivsThetaELossFluxX9Y4);
hPhivsThetaELossDividedX9Y5->Divide(hPhivsThetaELossX9Y5, hPhivsThetaELossFluxX9Y5);
hPhivsThetaELossDividedX9Y6->Divide(hPhivsThetaELossX9Y6, hPhivsThetaELossFluxX9Y6);
hPhivsThetaELossDividedX9Y7->Divide(hPhivsThetaELossX9Y7, hPhivsThetaELossFluxX9Y7);
hPhivsThetaELossDividedX9Y8->Divide(hPhivsThetaELossX9Y8, hPhivsThetaELossFluxX9Y8);
hPhivsThetaELossDividedX9Y9->Divide(hPhivsThetaELossX9Y9, hPhivsThetaELossFluxX9Y9);

// ==================================|





///////////////////////////////////////////////////////////////////////////////////////
hMCPrimaryPxUnWeighted->Write();
hMCPrimaryPyUnWeighted->Write();
hMCPrimaryPzUnWeighted->Write();
      
hMCPrimaryStartX->Write();
hMCPrimaryStartY->Write();
hMCPrimaryStartZ->Write();
      
hMCPrimaryEndX->Write();
hMCPrimaryEndY->Write();
hMCPrimaryEndZ->Write(); 

hMCPrimaryEndXvsZ->Write();  
hMCPrimaryEndYvsZ->Write();

hMCTrueInitialKE->Write();  
hMCTrueELossUpstream->Write(); 
hMCTrueELossInTPC->Write();

hERemainMCTrue->Write();

hELossXvsY->Write();
hELossXvsYFlux->Write();
hELossXvsYDivide->Write();

hMCPhiAtFrontFace->Write();
hMCThetaAtFrontFace->Write();

hPhivsThetaELoss->Write();
hPhivsThetaELossFlux->Write();
hPhivsThetaELossDivided->Write();

hPhivsThetaELossTop->Write();
hPhivsThetaELossFluxTop->Write();
hPhivsThetaELossDividedTop->Write();

hPhivsThetaELossMid->Write();
hPhivsThetaELossFluxMid->Write();
hPhivsThetaELossDividedMid->Write();

hPhivsThetaELossBottom->Write();
hPhivsThetaELossFluxBottom->Write();
hPhivsThetaELossDividedBottom->Write();

hMCPrimaryTPCStartX->Write();
hMCPrimaryTPCStartY->Write();
hMCPrimaryTPCStartZ->Write();

hMCELossUpstreamLookUp->Write();
hERemainMCMap->Write();

hMCELossUpstreamFlat->Write();
hERemainMCFlat->Write();

hRecoMCdEdX->Write();
hRecoMCResidualRange->Write();
hRecoMCTrkPitch->Write();
hRecoMCdEdXvsRR->Write();
hMCELossRecoInTPC->Write();
hRecoMCTPCPhi->Write();
hRecoMCTPCTheta->Write();
hRecoMCTPCStartX->Write();
hRecoMCTPCStartY->Write();
hRecoMCTPCStartZ->Write();

hERemainTPCRecoOnly->Write();

hMCELossUpstreamTPCRecoMap->Write();

hDeltaEnergyLossTruevsMap->Write();

hDeltaEnergyLossInTPCTruevsReco->Write();

hDeltaEnergyLossUpstreamTPCTruevsReco->Write();

hMCPrimaryXvsZWeirdPeak1->Write();
hMCPrimaryYvsZWeirdPeak1->Write();
hMCPrimaryXvsZWeirdPeak1Flux->Write();
hMCPrimaryYvsZWeirdPeak1Flux->Write();
hMCPrimaryXvsZWeirdPeak1Divide->Write();
hMCPrimaryYvsZWeirdPeak1Divide->Write();


hMCPrimaryXvsZNotWeirdPeak->Write();
hMCPrimaryYvsZNotWeirdPeak->Write();
hMCPrimaryXvsZNotWeirdPeakFlux->Write();
hMCPrimaryYvsZNotWeirdPeakFlux->Write();
hMCPrimaryXvsZNotWeirdPeakDivide->Write();
hMCPrimaryYvsZNotWeirdPeakDivide->Write();
hMCPrimaryPzvsELossUpstream->Write();

hDeltaEInTPCvsTrkLength->Write();
hDeltaEInTPCvsKEinit->Write();

hLXRecoInTPC->Write();
hLYRecoInTPC->Write();
hLZRecoInTPC->Write();

hRXRecoInTPC->Write();
hRYRecoInTPC->Write();
hRZRecoInTPC->Write();

hLInitKE->Write();

hRInitKE->Write();

hLTrueELossInTPC->Write();
hLRecoELossInTPC->Write();
hLDeltaInTPC->Write();

hRTrueELossInTPC->Write();
hRRecoELossInTPC->Write();
hRDeltaInTPC->Write();


hDeltaTotalTruevsReco->Write();

hMCPrimaryPUnWeighted->Write();



hPhivsThetaELossL->Write();
hPhivsThetaELossFluxL->Write();
hPhivsThetaELossDividedL->Write();
hELossXvsYL->Write();
hELossXvsYFluxL->Write();
hELossXvsYDivideL->Write();

hPhivsThetaELossM->Write();
hPhivsThetaELossFluxM->Write();
hPhivsThetaELossDividedM->Write();
hELossXvsYM->Write();
hELossXvsYFluxM->Write();
hELossXvsYDivideM->Write();

hPhivsThetaELossR->Write();
hPhivsThetaELossFluxR->Write();
hPhivsThetaELossDividedR->Write();
hELossXvsYR->Write();
hELossXvsYFluxR->Write();
hELossXvsYDivideR->Write();

// =======================|
// === New Map Writing ===|
// =======================|

hPhivsThetaELossDividedX0Y0->Write();
hPhivsThetaELossDividedX0Y1->Write();
hPhivsThetaELossDividedX0Y2->Write();
hPhivsThetaELossDividedX0Y3->Write();
hPhivsThetaELossDividedX0Y4->Write();
hPhivsThetaELossDividedX0Y5->Write();
hPhivsThetaELossDividedX0Y6->Write();
hPhivsThetaELossDividedX0Y7->Write();
hPhivsThetaELossDividedX0Y8->Write();
hPhivsThetaELossDividedX0Y9->Write();

hPhivsThetaELossDividedX1Y0->Write();
hPhivsThetaELossDividedX1Y1->Write();
hPhivsThetaELossDividedX1Y2->Write();
hPhivsThetaELossDividedX1Y3->Write();
hPhivsThetaELossDividedX1Y4->Write();
hPhivsThetaELossDividedX1Y5->Write();
hPhivsThetaELossDividedX1Y6->Write();
hPhivsThetaELossDividedX1Y7->Write();
hPhivsThetaELossDividedX1Y8->Write();
hPhivsThetaELossDividedX1Y9->Write();

hPhivsThetaELossDividedX2Y0->Write();
hPhivsThetaELossDividedX2Y1->Write();
hPhivsThetaELossDividedX2Y2->Write();
hPhivsThetaELossDividedX2Y3->Write();
hPhivsThetaELossDividedX2Y4->Write();
hPhivsThetaELossDividedX2Y5->Write();
hPhivsThetaELossDividedX2Y6->Write();
hPhivsThetaELossDividedX2Y7->Write();
hPhivsThetaELossDividedX2Y8->Write();
hPhivsThetaELossDividedX2Y9->Write();

hPhivsThetaELossDividedX3Y0->Write();
hPhivsThetaELossDividedX3Y1->Write();
hPhivsThetaELossDividedX3Y2->Write();
hPhivsThetaELossDividedX3Y3->Write();
hPhivsThetaELossDividedX3Y4->Write();
hPhivsThetaELossDividedX3Y5->Write();
hPhivsThetaELossDividedX3Y6->Write();
hPhivsThetaELossDividedX3Y7->Write();
hPhivsThetaELossDividedX3Y8->Write();
hPhivsThetaELossDividedX3Y9->Write();

hPhivsThetaELossDividedX4Y0->Write();
hPhivsThetaELossDividedX4Y1->Write();
hPhivsThetaELossDividedX4Y2->Write();
hPhivsThetaELossDividedX4Y3->Write();
hPhivsThetaELossDividedX4Y4->Write();
hPhivsThetaELossDividedX4Y5->Write();
hPhivsThetaELossDividedX4Y6->Write();
hPhivsThetaELossDividedX4Y7->Write();
hPhivsThetaELossDividedX4Y8->Write();
hPhivsThetaELossDividedX4Y9->Write();

hPhivsThetaELossDividedX5Y0->Write();
hPhivsThetaELossDividedX5Y1->Write();
hPhivsThetaELossDividedX5Y2->Write();
hPhivsThetaELossDividedX5Y3->Write();
hPhivsThetaELossDividedX5Y4->Write();
hPhivsThetaELossDividedX5Y5->Write();
hPhivsThetaELossDividedX5Y6->Write();
hPhivsThetaELossDividedX5Y7->Write();
hPhivsThetaELossDividedX5Y8->Write();
hPhivsThetaELossDividedX5Y9->Write();

hPhivsThetaELossDividedX6Y0->Write();
hPhivsThetaELossDividedX6Y1->Write();
hPhivsThetaELossDividedX6Y2->Write();
hPhivsThetaELossDividedX6Y3->Write();
hPhivsThetaELossDividedX6Y4->Write();
hPhivsThetaELossDividedX6Y5->Write();
hPhivsThetaELossDividedX6Y6->Write();
hPhivsThetaELossDividedX6Y7->Write();
hPhivsThetaELossDividedX6Y8->Write();
hPhivsThetaELossDividedX6Y9->Write();

hPhivsThetaELossDividedX7Y0->Write();
hPhivsThetaELossDividedX7Y1->Write();
hPhivsThetaELossDividedX7Y2->Write();
hPhivsThetaELossDividedX7Y3->Write();
hPhivsThetaELossDividedX7Y4->Write();
hPhivsThetaELossDividedX7Y5->Write();
hPhivsThetaELossDividedX7Y6->Write();
hPhivsThetaELossDividedX7Y7->Write();
hPhivsThetaELossDividedX7Y8->Write();
hPhivsThetaELossDividedX7Y9->Write();

hPhivsThetaELossDividedX8Y0->Write();
hPhivsThetaELossDividedX8Y1->Write();
hPhivsThetaELossDividedX8Y2->Write();
hPhivsThetaELossDividedX8Y3->Write();
hPhivsThetaELossDividedX8Y4->Write();
hPhivsThetaELossDividedX8Y5->Write();
hPhivsThetaELossDividedX8Y6->Write();
hPhivsThetaELossDividedX8Y7->Write();
hPhivsThetaELossDividedX8Y8->Write();
hPhivsThetaELossDividedX8Y9->Write();

hPhivsThetaELossDividedX9Y0->Write();
hPhivsThetaELossDividedX9Y1->Write();
hPhivsThetaELossDividedX9Y2->Write();
hPhivsThetaELossDividedX9Y3->Write();
hPhivsThetaELossDividedX9Y4->Write();
hPhivsThetaELossDividedX9Y5->Write();
hPhivsThetaELossDividedX9Y6->Write();
hPhivsThetaELossDividedX9Y7->Write();
hPhivsThetaELossDividedX9Y8->Write();
hPhivsThetaELossDividedX9Y9->Write();

// =======================|

}//<----End Loop()
