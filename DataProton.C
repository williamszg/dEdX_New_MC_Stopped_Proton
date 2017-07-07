#define DataProton_cxx
#include "DataProton.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>
#include <TVector3.h>

//##############################|
//### The Histograms Go Here ###|
//##############################|



//##############################|



//****************************************************|
//****************************************************|
//*****************                  *****************|
//**************     MAIN VOID LOOP     **************|
//*****************                  *****************|
//****************************************************|
//****************************************************|

void DataProton::Loop()
{

if (fChain == 0) return;
Long64_t nentries = fChain->GetEntriesFast();
Long64_t nbytes = 0, nb = 0;

//########################################################################|
//#################         Flexible Cuts Go Here         ################|
//########################################################################|

//--- Particle Mass ---|
float particle_mass = 938.28;//<---(MeV/c^2) This is the Proton Mass


//--- Preliminary TOF Cuts ---|
double LowerTOFGoodReco = 0;
double UpperTOFGoodReco = 90;


//--- Setting the Wire Chamber Momentum Range and ---|
//---      the TOF Range for Good Particle ID     ---|
double LowerWCTrkMomentum = 450.0;//<---(MeV)
double HighWCTrkMomentum = 1100.0;//<---(MeV)

double LowerTOF = 28.0;//<---(ns)
double HighTOF = 55.0;//<---(ns)


//--- Number of Centimeters in Z We Require a Track ---|
//--- to Have a Space Point Within (Default = 2 cm) ---|
double FirstSpacePointZPos = 2.0;//<---(cm)


//--- Delta X Between Wire Chamber Track and TPC Track ---|
double DeltaXLowerBound = -4.0;//<---(cm)
double DeltaXUpperBound = 6.0;//<---(cm)


//--- Delta Y Between Wire Chamber Track and TPC Track ---|
double DeltaYLowerBound = -5.0;//<---(cm)
double DeltaYUpperBound = 5.0;//<---(cm)


//--- Fiducial Boundary Cuts (Used to Determine if a Track is "Stopping") ---|
double XLowerFid = 0;//<---(cm)
double XUpperFid = 47;//<---(cm)

double YLowerFid = -20;//<---(cm)
double YUpperFid = 20;//<---(cm)

double ZLowerFid = 0;//<---(cm)
double ZUpperFid = 90;//<---(cm)


//--- Definition of the Upstream Part of the TPC Where We Restrict ---|
//---          the Number of Tracks Which Can Be Present           ---|
int UpperPartOfTPC = 14.0;//<---(cm)


//--- Number of Tracks Allowed in the Upstream Part ---|
int nLowZTracksAllowed = 8;//<---(number)


//--- Making Shower Cut and the Number of Short Tracks Allowed ---|
double ShortTrkLength = 5.0;//<---(cm)
int nShortTracksAllowed = 2;//<---(number)


//--- "Kink" Angle Cut in Degrees (Alpha) ---|
double alphaCut = 10;//<---(degrees)


//--- Smaller Number of Events for Testing Purposes ---|
int nEntries = 50000;//<---(number of events)


//--- Number of Events to Slew Before Outputting to Screen ---|
int nEvents = 500;//<---(number of events)


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&|
//&&& Create the Cross-Section From the Incident and Interaction Plots &&&|
//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&|

//--- The Assumed Energy Loss Between the Cryostat and the TPC ---|
float entryTPCEnergyLoss = 0.;//<---(MeV)

//--- The Assumed Mass of the Incident Particle (Here We Assume A Proton) ---|
float mass = 938.28;//<---(MeV/c^2)

//--- Density of Liquid Argon ---|
float rho = 1396;//<---(kg/mLiter)

//--- Molar Mass of Argon ---|
float molar_mass = 39.95;//<---(g/mol)

//--- Avogadro's Number ---|
float avogadro = 6.022e+23;//<---(number/mol)

//--- Gram to Kilogram Conversion ---|
float g_per_kg = 1000;//<---(g/kg)

//--- Number Density ---|
float number_rho = (rho*g_per_kg*avogadro)/molar_mass;//<---(number/mLiter)

//--- Slab Width for Cross-Section ---|
float slab_width = 0.0045;//<---(m)

//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&|

//########################################################################|
//########################################################################|


//=====================================================================|
//============       ROOT FILE FOR SAVING HISTOGRAMS       ============|
//=====================================================================|
TFile myfile("./ROOTFILES/RunIDataProton.root", "RECREATE");
//=====================================================================|


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&|
//&&& Putting in Counters for Event Reduction Table &&&|
//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&|

//--- Total Number of Events ---|
int nTotalEvents = 0;

//--- Events With Wire Chamber Track ---|
int nEvtsWCTrack = 0;

//--- Events With Matched Wire Chamber Track ---|
int nEvtsWCTrackMatch = 0;

//--- Events With Track Z Position ---|
int nEvtsTrackZPos = 0;

//--- Events in TPC ---|
int nEvtsTPC = 0;

//--- Events With TOF ---|
int nEvtsTOF = 0;

//--- Events With PID ---|
int nEvtsPID = 0;

//--- Events With Low Z Track Events ---|
int nLosZTrkEvents = 0;

//--- Events That Did Not Shower ---|
int nNonShowerEvents = 0;

//--- Events With TOF Hits ---|
int nTOFHits = 0;

//--- Events With Stopping Proton ---|
int nEvtsStopProton = 0;

//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&|


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&|
//&&& Providing An Index for the Matched WC/TPC Track &&&|
//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&|
int MatchWCTrackIndex[10] = {0};
//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&|




//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%|
//%%%%%%%%%%%%    LOOPING OVER ALL OF THE EVENTS    %%%%%%%%%%%%|
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%|
for (Long64_t jentry=0; jentry<nentries;jentry++) 
   {

   //+++++++++++++++++++++++++|
   //+++ Loading the Event +++|
   //+++++++++++++++++++++++++|
   Long64_t ientry = LoadTree(jentry);
   if (ientry < 0) break;
   nb = fChain->GetEntry(jentry);   nbytes += nb;
   //+++++++++++++++++++++++++|



   //==========================================================|
   //=== Counting Total Events and Outputting Every nEvents ===|
   //==========================================================|
   nTotalEvents++;
   if (nTotalEvents % nEvents == 0) {std::cout<<"Event = "<<nTotalEvents<<std::endl;}
   //==========================================================|



   //###########################################################|
   //######            Wire Chamber Track Cuts            ######|
   //###########################################################|
   //--- Skip Events With No WC Track ---|
   if (nwctrks < 1) {continue;}

   //=========================================|
   //=== Loop Over the Wire Chamber Tracks ===|
   //=========================================|
   for (int numWCTrk = 0; numWCTrk < nwctrks; numWCTrk++)
      {

      hdataRawWCTRKMomentum->Fill(wctrk_momentum[numWCTrk]);

      }//<---Close Wire Chamber Tracks Loop
   //=========================================|

   //--- Counting Events With a WC Track ---|
   nEvtsWCTrack++;
   //###########################################################|



   //###########################################################|
   //######            TOF Event Selection (ns)           ######|
   //###########################################################|
   bool tofGood = true;

   //--- Skip Events With No TOF Objects ---|
   if (ntof < 1) {continue;}

   //=========================================|
   //===     Loop Over the TOF Objects     ===|
   //=========================================|
   for (int mmtof = 0; mmtof < ntof; mmtof++)
      {

      //~~~ Requiring There Exists a Good TOF Recorded ~~~|
      if (tofObject[mmtof] < LowerTOFGoodReco || tofObject[mmtof] > UpperTOFGoodReco)
         {

         tofGood = false;

         }//<---Close Good TOF Recorded If Statement

      hdataTOFNoCuts->Fill(tofObject[mmtof]);

      }//<---Close TOF Objects Loop
   //=========================================|
   
   if (ntof > 0) {nTOFHits++;}

   if (!tofGood) {continue;}
   nEvtsTOF++;
   //###########################################################|



   //###########################################################|
   //#### Putting in a Good TPC Cut (looking for nhits > 0) ####|
   //###########################################################|
   //--- Skip the Event if no Hits Are Reconstructed in the TPC ---|
   if (nhits < 1) {continue;}
   nEvtsTPC++;
   //###########################################################|



   //###########################################################|
   //######               Particle ID Filter              ######|
   //###########################################################|
   bool GoodPID = false;

   //==============================================|
   //=== Loop Over the WCTracks and TOF Objects ===|
   //==============================================|
   for (int numWCTrk = 0; numWCTrk < nwctrks; numWCTrk++)
      {

      //~~~ Checking the Number of TOF Objects ~~~|
      int TOFObject = numWCTrk;
      hdataWCTrackMomentumVSTOF->Fill(wctrk_momentum[numWCTrk], tofObject[TOFObject]);

      //~~~ If We Have More WCTracks Than TOF, Put in Protection ~~~|
      if (TOFObject > ntof) {TOFObject = ntof - 1;}

      //~~~ Only Keeping Events That Fall Into the WCTrk Momentum and TOF Range ~~~|
      if (wctrk_momentum[numWCTrk] > LowerWCTrkMomentum 
          && wctrk_momentum[numWCTrk] < HighWCTrkMomentum
          && tofObject[TOFObject] > LowerTOF 
          && tofObject[TOFObject] < HighTOF) {GoodPID = true;}

      }//<---Close WC Tracks and TOF Objects Loop
   //==============================================|

   if (!GoodPID) {continue;}
   nEvtsPID++;
   //###########################################################|



   //###########################################################|
   //######           Low Z Spacepoint Track Cut          ######|
   //###########################################################|

   //###########################################################|



   //###########################################################|
   //### Cutting on the Number of Tracks in the Upstream TPC ###|
   //###########################################################|

   //###########################################################|



   //###########################################################|
   //######           Vetoing Shower Like Events          ######|
   //###########################################################|

   //###########################################################|



   //###########################################################|
   //######  Uniquely Matching One WC Track to TPC Track  ######|
   //###########################################################|

   //###########################################################|



   //###########################################################|
   //######  Calculating Theta and Phi for this TPC Track ######|
   //###########################################################|

   //###########################################################|

   }//<---Close Event For Loop
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%|

}//<---Close Void Loop

//****************************************************|
//****************************************************|
//****************************************************|
