{

//########################################################|
//### Read in ROOT Files for Run I & Run II & DDProton ###|
//########################################################|

//--- Read in Run I ROOT File ---|
TFile *f1 = new TFile("./ROOTFILES/RunIPosPolData_StoppingProtons.root");

//--- Read in Run II ROOT File ---|
TFile *f2 = new TFile("./ROOTFILES/RunIIPosPolData_StoppingProtons.root");

//--- Read in DDProton ROOT File ---|
TFile *f3 = new TFile("./ROOTFILES/DataDrivenProtonMC_EnergyCalibrationPlots.root");

//########################################################|




//##############################################|
//### Defining the Histograms From the Files ###|
//##############################################|

//--- Run I Histogram ---|
TH1D *h1RawWCMomentum = (TH1D*)f1->Get("hdataRawWCTRKMomentum");
//--- Run II Histogram ---|
TH1D *h2RawWCMomentum = (TH1D*)f2->Get("hdataRawWCTRKMomentum");

//--- Run I Histogram ---|
TH1D *h1TOFNoCuts = (TH1D*)f1->Get("hdataTOFNoCuts");
//--- Run II Histogram ---|
TH1D *h2TOFNoCuts = (TH1D*)f2->Get("hdataTOFNoCuts");

//--- Run I Histogram ---|
TH2D *h1WCMomentumVsTOF = (TH2D*)f1->Get("hdataWCTrackMomentumVSTOF");
//--- Run II Histogram ---|
TH2D *h2WCMomentumVsTOF = (TH2D*)f2->Get("hdataWCTrackMomentumVSTOF");

//--- Run I Histogram ---|
TH1D *h1UpstreamZ = (TH1D*)f1->Get("hdataUpstreamZPos");
//--- Run II Histogram ---|
TH1D *h2UpstreamZ = (TH1D*)f2->Get("hdataUpstreamZPos");

//--- Run I Histogram ---|
TH1D *h1NumberOfUSTrks = (TH1D*)f1->Get("hdataNumberOfUSTrks");
//--- Run II Histogram ---|
TH1D *h2NumberOfUSTrks = (TH1D*)f2->Get("hdataNumberOfUSTrks");

//--- Run I Histogram ---|
TH1D *h1InitialX = (TH1D*)f1->Get("hdataTrkInitialX");
//--- Run II Histogram ---|
TH1D *h2InitialX = (TH1D*)f2->Get("hdataTrkInitialX");
//--- DDProton Histogram ---|
//TH1D *hDInitialX = (TH1D*)f3->Get("hMCPrimaryTPCStartX");
//--- DDProton Histogram ---|
TH1D *hDInitialX = (TH1D*)f3->Get("hRecoMCTPCStartX");

//--- Run I Histogram ---|
TH1D *h1InitialY = (TH1D*)f1->Get("hdataTrkInitialY");
//--- Run II Histogram ---|
TH1D *h2InitialY = (TH1D*)f2->Get("hdataTrkInitialY");
//--- DDProton Histogram ---|
//TH1D *hDInitialY = (TH1D*)f3->Get("hMCPrimaryTPCStartY");
//--- DDProton Histogram ---|
TH1D *hDInitialY = (TH1D*)f3->Get("hRecoMCTPCStartY");

//--- Run I Histogram ---|
TH1D *h1InitialZ = (TH1D*)f1->Get("hdataTrkInitialZ");
//--- Run II Histogram ---|
TH1D *h2InitialZ = (TH1D*)f2->Get("hdataTrkInitialZ");

//--- Run I Histogram ---|
TH1D *h1WCTRKMomentum = (TH1D*)f1->Get("hdataWCTRKMomentum");
//--- Run II Histogram ---|
TH1D *h2WCTRKMomentum = (TH1D*)f2->Get("hdataWCTRKMomentum");

//--- Run I Histogram ---|
TH1D *h1TPCTheta = (TH1D*)f1->Get("hdataTPCTheta");
//--- Run II Histogram ---|
TH1D *h2TPCTheta = (TH1D*)f2->Get("hdataTPCTheta");
//--- DDProton Histogram ---|
//TH1D *hDTPCTheta = (TH1D*)f3->Get("hMCThetaAtFrontFace");
//--- DDProton Histogram ---|
TH1D *hDTPCTheta = (TH1D*)f3->Get("hRecoMCTPCTheta");

//--- Run I Histogram ---|
TH1D *h1TPCPhi = (TH1D*)f1->Get("hdataTPCPhi");
//--- Run II Histogram ---|
TH1D *h2TPCPhi = (TH1D*)f2->Get("hdataTPCPhi");
//--- DDProton Histogram ---|
//TH1D *hDTPCPhi = (TH1D*)f3->Get("hMCPhiAtFrontFace");
//--- DDProton Histogram ---|
TH1D *hDTPCPhi = (TH1D*)f3->Get("hRecoMCTPCPhi");

//--- Run I Histogram ---|
TH1D *h1WCTheta = (TH1D*)f1->Get("hdataWCTheta");
//--- Run II Histogram ---|
TH1D *h2WCTheta = (TH1D*)f2->Get("hdataWCTheta");

//--- Run I Histogram ---|
TH1D *h1WCPhi = (TH1D*)f1->Get("hdataWCPhi");
//--- Run II Histogram ---|
TH1D *h2WCPhi = (TH1D*)f2->Get("hdataWCPhi");

//--- Run I Histogram ---|
TH1D *h1DeltaWCX = (TH1D*)f1->Get("hdataDeltaWCTrkX");
//--- Run II Histogram ---|
TH1D *h2DeltaWCX = (TH1D*)f2->Get("hdataDeltaWCTrkX");

//--- Run I Histogram ---|
TH1D *h1DeltaWCY = (TH1D*)f1->Get("hdataDeltaWCTrkY");
//--- Run II Histogram ---|
TH1D *h2DeltaWCY = (TH1D*)f2->Get("hdataDeltaWCTrkY");

//--- Run I Histogram ---|
TH1D *h1Alpha = (TH1D*)f1->Get("hdataAlpha");
//--- Run II Histogram ---|
TH1D *h2Alpha = (TH1D*)f2->Get("hdataAlpha");

//--- Run I Histogram ---|
TH1D *h1ELossUpstream = (TH1D*)f1->Get("hStoppedProtonEnergyLossUpstream");
//--- Run II Histogram ---|
TH1D *h2ELossUpstream = (TH1D*)f2->Get("hStoppedProtonEnergyLossUpstream");

//--- Run I Histogram ---|
TH1D *h1ELossInTPC = (TH1D*)f1->Get("hStoppedProtonEnergyLossInTPC");
//--- Run II Histogram ---|
TH1D *h2ELossInTPC = (TH1D*)f2->Get("hStoppedProtonEnergyLossInTPC");

//--- Run I Histogram ---|
TH1D *h1KERemain = (TH1D*)f1->Get("hStoppedProtonRemainingKE");
//--- Run II Histogram ---|
TH1D *h2KERemain = (TH1D*)f2->Get("hStoppedProtonRemainingKE");

//--- Run I Histogram ---|
TH2D *h1ELossXvsY = (TH2D*)f1->Get("hELossXvsY");
//--- Run II Histogram ---|
TH2D *h2ELossXvsY = (TH2D*)f2->Get("hELossXvsY");

//--- Run I Histogram ---|
TH2D *h1ELossXvsYFlux = (TH2D*)f1->Get("hELossXvsYFlux");
//--- Run II Histogram ---|
TH2D *h2ELossXvsYFlux  = (TH2D*)f2->Get("hELossXvsYFlux");

//--- Run I Histogram ---|
TH2D *h1ELossXvsYDivide  = (TH2D*)f1->Get("hELossXvsYDivide");
//--- Run II Histogram ---|
TH2D *h2ELossXvsYDivide  = (TH2D*)f2->Get("hELossXvsYDivide");

//--- Run I Histogram ---|
TH2D *h1PhivsThetaELoss = (TH2D*)f1->Get("hPhivsThetaELoss");
//--- Run II Histogram ---|
TH2D *h2PhivsThetaELoss = (TH2D*)f2->Get("hPhivsThetaELoss");

//--- Run I Histogram ---|
TH2D *h1PhivsThetaELossFlux = (TH2D*)f1->Get("hPhivsThetaELossFlux");
//--- Run II Histogram ---|
TH2D *h2PhivsThetaELossFlux = (TH2D*)f2->Get("hPhivsThetaELossFlux");

//--- Run I Histogram ---|
TH2D *h1PhivsThetaELossDivide = (TH2D*)f1->Get("hPhivsThetaELossDivided");
//--- Run II Histogram ---|
TH2D *h2PhivsThetaELossDivide = (TH2D*)f2->Get("hPhivsThetaELossDivided");

//--- Run I Histogram ---|
TH1D *h1CaloRecodEdX = (TH1D*)f1->Get("hCaloRecodEdX");
//--- Run II Histogram ---|
TH1D *h2CaloRecodEdX = (TH1D*)f2->Get("hCaloRecodEdX");
//--- DDProton Histogram ---|
TH1D *hDCaloRecodEdX = (TH1D*)f3->Get("hRecoMCdEdX");

//--- Run I Histogram ---|
TH2D *h1CaloRecodEdXvsRR = (TH2D*)f1->Get("hCaloRecodEdXvsRR");
//--- Run II Histogram ---|
TH2D *h2CaloRecodEdXvsRR = (TH2D*)f2->Get("hCaloRecodEdXvsRR");

//--- Run I Histogram ---|
TH1D *h1CaloRecoTrackLength = (TH1D*)f1->Get("hCaloRecoTrackLength");
//--- Run II Histogram ---|
TH1D *h2CaloRecoTrackLength = (TH1D*)f2->Get("hCaloRecoTrackLength");

//--- Run I Histogram ---|
TH1D *h1InitialKEWC4 = (TH1D*)f1->Get("hInitialKEWC4");
//--- Run II Histogram ---|
TH1D *h2InitialKEWC4 = (TH1D*)f2->Get("hInitialKEWC4");
//--- DDProton Histogram ---|
TH1D *hDInitialKEWC4 = (TH1D*)f3->Get("hMCTrueInitialKE");

//--- Run I Histogram ---|
TH1D *h1DeltaEnergyCaloVsLength = (TH1D*)f1->Get("hDeltaEnergyCaloVsLength");
//--- Run II Histogram ---|
TH1D *h2DeltaEnergyCaloVsLength = (TH1D*)f2->Get("hDeltaEnergyCaloVsLength");

//--- Run I Histogram ---|
TH1D *h1EnergyCalo = (TH1D*)f1->Get("hEnergyCalo");
//--- Run II Histogram ---|
TH1D *h2EnergyCalo = (TH1D*)f2->Get("hEnergyCalo");

//--- Run I Histogram ---|
TH1D *h1EnergyLength = (TH1D*)f1->Get("hEnergyLength");
//--- Run II Histogram ---|
TH1D *h2EnergyLength = (TH1D*)f2->Get("hEnergyLength");

//--- Run I Histogram ---|
TH1D *h1KETPC = (TH1D*)f1->Get("hKETPC");
//--- Run II Histogram ---|
TH1D *h2KETPC = (TH1D*)f2->Get("hKETPC");
//--- DDProton Histogram ---|
TH1D *hDKETPC = (TH1D*)f3->Get("hMCELossRecoInTPC");

//--- Run I Histogram ---|
TH1D *h1DeltaKETPCVsLength = (TH1D*)f1->Get("hDeltaKETPCVsLength");
//--- Run II Histogram ---|
TH1D *h2DeltaKETPCVsLength = (TH1D*)f2->Get("hDeltaKETPCVsLength");

//--- Run I Histogram ---|
TH1D *h1DeltaKETPCVsCalo = (TH1D*)f1->Get("hDeltaKETPCVsCalo");
//--- Run II Histogram ---|
TH1D *h2DeltaKETPCVsCalo = (TH1D*)f2->Get("hDeltaKETPCVsCalo");

//--- Run I Histogram ---|
TH1D *h1EnergyLossMap = (TH1D*)f1->Get("hEnergyLossMap");
//--- Run II Histogram ---|
TH1D *h2EnergyLossMap = (TH1D*)f2->Get("hEnergyLossMap");

//--- Run I Histogram ---|
TH1D *h1DeltaKETPCVsFlat = (TH1D*)f1->Get("hDeltaKETPCVsFlat");
//--- Run II Histogram ---|
TH1D *h2DeltaKETPCVsFlat = (TH1D*)f2->Get("hDeltaKETPCVsFlat");

//--- Run I Histogram ---|
TH1D *h1DeltaKEFlatVsCalo = (TH1D*)f1->Get("hDeltaKEFlatVsCalo");
//--- Run II Histogram ---|
TH1D *h2DeltaKEFlatVsCalo = (TH1D*)f2->Get("hDeltaKEFlatVsCalo");

//--- Run I Histogram ---|
TH1D *h1DeltaKEFlatVsLength = (TH1D*)f1->Get("hDeltaKEFlatVsLength");
//--- Run II Histogram ---|
TH1D *h2DeltaKEFlatVsLength = (TH1D*)f2->Get("hDeltaKEFlatVsLength");

//##############################################|




//#########################|
//### Summing the Plots ###|
//#########################|

h1RawWCMomentum->Sumw2();
h2RawWCMomentum->Sumw2();

h1TOFNoCuts->Sumw2();
h2TOFNoCuts->Sumw2();

h1UpstreamZ->Sumw2();
h2UpstreamZ->Sumw2();

h1NumberOfUSTrks->Sumw2();
h2NumberOfUSTrks->Sumw2();

h1InitialX->Sumw2();
h2InitialX->Sumw2();
//hDInitialX->Rebin();
hDInitialX->Sumw2();

h1InitialY->Sumw2();
h2InitialY->Sumw2();
//hDInitialY->Rebin();
hDInitialY->Sumw2();

h1InitialZ->Sumw2();
h2InitialZ->Sumw2();

h1WCTRKMomentum->Sumw2();
h2WCTRKMomentum->Sumw2();

h1TPCTheta->Sumw2();
h2TPCTheta->Sumw2();
hDTPCTheta->Sumw2();

h1TPCPhi->Sumw2();
h2TPCPhi->Sumw2();
hDTPCPhi->Sumw2();

h1WCTheta->Sumw2();
h2WCTheta->Sumw2();

h1WCPhi->Sumw2();
h2WCPhi->Sumw2();

h1DeltaWCX->Sumw2();
h2DeltaWCX->Sumw2();

h1DeltaWCY->Sumw2();
h2DeltaWCY->Sumw2();

h1Alpha->Sumw2();
h2Alpha->Sumw2();

h1ELossUpstream->Sumw2();
h2ELossUpstream->Sumw2();

h1ELossInTPC->Sumw2();
h2ELossInTPC->Sumw2();

h1KERemain->Sumw2();
h2KERemain->Sumw2();

h1CaloRecodEdX->Sumw2();
h2CaloRecodEdX->Sumw2();
hDCaloRecodEdX->Rebin();
hDCaloRecodEdX->Sumw2();

h1CaloRecoTrackLength->Sumw2();
h2CaloRecoTrackLength->Sumw2();

h1InitialKEWC4->Sumw2();
h2InitialKEWC4->Sumw2();
hDInitialKEWC4->Sumw2();

h1DeltaEnergyCaloVsLength->Sumw2();
h2DeltaEnergyCaloVsLength->Sumw2();

h1EnergyCalo->Sumw2();
h2EnergyCalo->Sumw2();

h1EnergyLength->Sumw2();
h2EnergyLength->Sumw2();

h1KETPC->Sumw2();
h2KETPC->Sumw2();
hDKETPC->Rebin(5/3);
hDKETPC->Sumw2();

h1DeltaKETPCVsLength->Sumw2();
h2DeltaKETPCVsLength->Sumw2();

h1DeltaKETPCVsCalo->Sumw2();
h2DeltaKETPCVsCalo->Sumw2();

h1EnergyLossMap->Sumw2();
h2EnergyLossMap->Sumw2();

h1DeltaKETPCVsFlat->Sumw2();
h2DeltaKETPCVsFlat->Sumw2();

h1DeltaKEFlatVsCalo->Sumw2();
h2DeltaKEFlatVsCalo->Sumw2();

h1DeltaKEFlatVsLength->Sumw2();
h2DeltaKEFlatVsLength->Sumw2();

//#########################|




//#################################|
//### Formatting the Histograms ###|
//#################################|

//--- Run I Histogram ---|
h1RawWCMomentum->SetLineColor(kRed);
h1RawWCMomentum->GetXaxis()->SetTitle("");
h1RawWCMomentum->GetXaxis()->CenterTitle();
h1RawWCMomentum->GetYaxis()->SetTitle("Events");
h1RawWCMomentum->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2RawWCMomentum->SetLineColor(kBlue);
h2RawWCMomentum->GetXaxis()->SetTitle("");
h2RawWCMomentum->GetXaxis()->CenterTitle();
h2RawWCMomentum->GetYaxis()->SetTitle("Events");
h2RawWCMomentum->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1TOFNoCuts->SetLineColor(kRed);
h1TOFNoCuts->GetXaxis()->SetTitle("");
h1TOFNoCuts->GetXaxis()->CenterTitle();
h1TOFNoCuts->GetYaxis()->SetTitle("Events");
h1TOFNoCuts->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2TOFNoCuts->SetLineColor(kBlue);
h2TOFNoCuts->GetXaxis()->SetTitle("");
h2TOFNoCuts->GetXaxis()->CenterTitle();
h2TOFNoCuts->GetYaxis()->SetTitle("Events");
h2TOFNoCuts->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1WCMomentumVsTOF->SetLineColor(kRed);
h1WCMomentumVsTOF->GetXaxis()->SetTitle("");
h1WCMomentumVsTOF->GetXaxis()->CenterTitle();
h1WCMomentumVsTOF->GetYaxis()->SetTitle("Events");
h1WCMomentumVsTOF->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2WCMomentumVsTOF->SetLineColor(kBlue);
h2WCMomentumVsTOF->GetXaxis()->SetTitle("");
h2WCMomentumVsTOF->GetXaxis()->CenterTitle();
h2WCMomentumVsTOF->GetYaxis()->SetTitle("Events");
h2WCMomentumVsTOF->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1UpstreamZ->SetLineColor(kRed);
h1UpstreamZ->GetXaxis()->SetTitle("");
h1UpstreamZ->GetXaxis()->CenterTitle();
h1UpstreamZ->GetYaxis()->SetTitle("Events");
h1UpstreamZ->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2UpstreamZ->SetLineColor(kBlue);
h2UpstreamZ->GetXaxis()->SetTitle("");
h2UpstreamZ->GetXaxis()->CenterTitle();
h2UpstreamZ->GetYaxis()->SetTitle("Events");
h2UpstreamZ->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1NumberOfUSTrks->SetLineColor(kRed);
h1NumberOfUSTrks->GetXaxis()->SetTitle("");
h1NumberOfUSTrks->GetXaxis()->CenterTitle();
h1NumberOfUSTrks->GetYaxis()->SetTitle("Events");
h1NumberOfUSTrks->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2NumberOfUSTrks->SetLineColor(kBlue);
h2NumberOfUSTrks->GetXaxis()->SetTitle("");
h2NumberOfUSTrks->GetXaxis()->CenterTitle();
h2NumberOfUSTrks->GetYaxis()->SetTitle("Events");
h2NumberOfUSTrks->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1InitialX->SetLineColor(kRed);
h1InitialX->GetXaxis()->SetTitle("");
h1InitialX->GetXaxis()->CenterTitle();
h1InitialX->GetYaxis()->SetTitle("Events");
h1InitialX->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2InitialX->SetLineColor(kBlue);
h2InitialX->GetXaxis()->SetTitle("");
h2InitialX->GetXaxis()->CenterTitle();
h2InitialX->GetYaxis()->SetTitle("Events");
h2InitialX->GetYaxis()->CenterTitle();
//--- DDProton Histogram ---|
hDInitialX->SetLineColor(kBlack);
hDInitialX->GetXaxis()->SetTitle("");
hDInitialX->GetXaxis()->CenterTitle();
hDInitialX->GetYaxis()->SetTitle("Events");
hDInitialX->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1InitialY->SetLineColor(kRed);
h1InitialY->GetXaxis()->SetTitle("");
h1InitialY->GetXaxis()->CenterTitle();
h1InitialY->GetYaxis()->SetTitle("Events");
h1InitialY->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2InitialY->SetLineColor(kBlue);
h2InitialY->GetXaxis()->SetTitle("");
h2InitialY->GetXaxis()->CenterTitle();
h2InitialY->GetYaxis()->SetTitle("Events");
h2InitialY->GetYaxis()->CenterTitle();
//--- DDProton Histogram ---|
hDInitialY->SetLineColor(kBlack);
hDInitialY->GetXaxis()->SetTitle("");
hDInitialY->GetXaxis()->CenterTitle();
hDInitialY->GetYaxis()->SetTitle("Events");
hDInitialY->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1InitialZ->SetLineColor(kRed);
h1InitialZ->GetXaxis()->SetTitle("");
h1InitialZ->GetXaxis()->CenterTitle();
h1InitialZ->GetYaxis()->SetTitle("Events");
h1InitialZ->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2InitialZ->SetLineColor(kBlue);
h2InitialZ->GetXaxis()->SetTitle("");
h2InitialZ->GetXaxis()->CenterTitle();
h2InitialZ->GetYaxis()->SetTitle("Events");
h2InitialZ->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1WCTRKMomentum->SetLineColor(kRed);
h1WCTRKMomentum->GetXaxis()->SetTitle("");
h1WCTRKMomentum->GetXaxis()->CenterTitle();
h1WCTRKMomentum->GetYaxis()->SetTitle("Events");
h1WCTRKMomentum->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2WCTRKMomentum->SetLineColor(kBlue);
h2WCTRKMomentum->GetXaxis()->SetTitle("");
h2WCTRKMomentum->GetXaxis()->CenterTitle();
h2WCTRKMomentum->GetYaxis()->SetTitle("Events");
h2WCTRKMomentum->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1TPCTheta->SetLineColor(kRed);
h1TPCTheta->GetXaxis()->SetTitle("");
h1TPCTheta->GetXaxis()->CenterTitle();
h1TPCTheta->GetYaxis()->SetTitle("Events");
h1TPCTheta->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2TPCTheta->SetLineColor(kBlue);
h2TPCTheta->GetXaxis()->SetTitle("");
h2TPCTheta->GetXaxis()->CenterTitle();
h2TPCTheta->GetYaxis()->SetTitle("Events");
h2TPCTheta->GetYaxis()->CenterTitle();
//--- DDProton Histogram ---|
hDTPCTheta->SetLineColor(kBlack);
hDTPCTheta->GetXaxis()->SetTitle("");
hDTPCTheta->GetXaxis()->CenterTitle();
hDTPCTheta->GetYaxis()->SetTitle("Events");
hDTPCTheta->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1TPCPhi->SetLineColor(kRed);
h1TPCPhi->GetXaxis()->SetTitle("");
h1TPCPhi->GetXaxis()->CenterTitle();
h1TPCPhi->GetYaxis()->SetTitle("Events");
h1TPCPhi->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2TPCPhi->SetLineColor(kBlue);
h2TPCPhi->GetXaxis()->SetTitle("");
h2TPCPhi->GetXaxis()->CenterTitle();
h2TPCPhi->GetYaxis()->SetTitle("Events");
h2TPCPhi->GetYaxis()->CenterTitle();
//--- DDProton Histogram ---|
hDTPCPhi->SetLineColor(kBlack);
hDTPCPhi->GetXaxis()->SetTitle("");
hDTPCPhi->GetXaxis()->CenterTitle();
hDTPCPhi->GetYaxis()->SetTitle("Events");
hDTPCPhi->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1WCTheta->SetLineColor(kRed);
h1WCTheta->GetXaxis()->SetTitle("");
h1WCTheta->GetXaxis()->CenterTitle();
h1WCTheta->GetYaxis()->SetTitle("Events");
h1WCTheta->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2WCTheta->SetLineColor(kBlue);
h2WCTheta->GetXaxis()->SetTitle("");
h2WCTheta->GetXaxis()->CenterTitle();
h2WCTheta->GetYaxis()->SetTitle("Events");
h2WCTheta->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1WCPhi->SetLineColor(kRed);
h1WCPhi->GetXaxis()->SetTitle("");
h1WCPhi->GetXaxis()->CenterTitle();
h1WCPhi->GetYaxis()->SetTitle("Events");
h1WCPhi->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2WCPhi->SetLineColor(kBlue);
h2WCPhi->GetXaxis()->SetTitle("");
h2WCPhi->GetXaxis()->CenterTitle();
h2WCPhi->GetYaxis()->SetTitle("Events");
h2WCPhi->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1DeltaWCX->SetLineColor(kRed);
h1DeltaWCX->GetXaxis()->SetTitle("");
h1DeltaWCX->GetXaxis()->CenterTitle();
h1DeltaWCX->GetYaxis()->SetTitle("Events");
h1DeltaWCX->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2DeltaWCX->SetLineColor(kBlue);
h2DeltaWCX->GetXaxis()->SetTitle("");
h2DeltaWCX->GetXaxis()->CenterTitle();
h2DeltaWCX->GetYaxis()->SetTitle("Events");
h2DeltaWCX->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1DeltaWCY->SetLineColor(kRed);
h1DeltaWCY->GetXaxis()->SetTitle("");
h1DeltaWCY->GetXaxis()->CenterTitle();
h1DeltaWCY->GetYaxis()->SetTitle("Events");
h1DeltaWCY->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2DeltaWCY->SetLineColor(kBlue);
h2DeltaWCY->GetXaxis()->SetTitle("");
h2DeltaWCY->GetXaxis()->CenterTitle();
h2DeltaWCY->GetYaxis()->SetTitle("Events");
h2DeltaWCY->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1Alpha->SetLineColor(kRed);
h1Alpha->GetXaxis()->SetTitle("");
h1Alpha->GetXaxis()->CenterTitle();
h1Alpha->GetYaxis()->SetTitle("Events");
h1Alpha->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2Alpha->SetLineColor(kBlue);
h2Alpha->GetXaxis()->SetTitle("");
h2Alpha->GetXaxis()->CenterTitle();
h2Alpha->GetYaxis()->SetTitle("Events");
h2Alpha->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1ELossUpstream->SetLineColor(kRed);
h1ELossUpstream->GetXaxis()->SetTitle("");
h1ELossUpstream->GetXaxis()->CenterTitle();
h1ELossUpstream->GetYaxis()->SetTitle("Events");
h1ELossUpstream->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2ELossUpstream->SetLineColor(kBlue);
h2ELossUpstream->GetXaxis()->SetTitle("");
h2ELossUpstream->GetXaxis()->CenterTitle();
h2ELossUpstream->GetYaxis()->SetTitle("Events");
h2ELossUpstream->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1ELossInTPC->SetLineColor(kRed);
h1ELossInTPC->GetXaxis()->SetTitle("");
h1ELossInTPC->GetXaxis()->CenterTitle();
h1ELossInTPC->GetYaxis()->SetTitle("Events");
h1ELossInTPC->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2ELossInTPC->SetLineColor(kBlue);
h2ELossInTPC->GetXaxis()->SetTitle("");
h2ELossInTPC->GetXaxis()->CenterTitle();
h2ELossInTPC->GetYaxis()->SetTitle("Events");
h2ELossInTPC->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1KERemain->SetLineColor(kRed);
h1KERemain->GetXaxis()->SetTitle("");
h1KERemain->GetXaxis()->CenterTitle();
h1KERemain->GetYaxis()->SetTitle("Events");
h1KERemain->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2KERemain->SetLineColor(kBlue);
h2KERemain->GetXaxis()->SetTitle("");
h2KERemain->GetXaxis()->CenterTitle();
h2KERemain->GetYaxis()->SetTitle("Events");
h2KERemain->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1ELossXvsY->SetLineColor(kRed);
h1ELossXvsY->GetXaxis()->SetTitle("");
h1ELossXvsY->GetXaxis()->CenterTitle();
h1ELossXvsY->GetYaxis()->SetTitle("Events");
h1ELossXvsY->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2ELossXvsY->SetLineColor(kBlue);
h2ELossXvsY->GetXaxis()->SetTitle("");
h2ELossXvsY->GetXaxis()->CenterTitle();
h2ELossXvsY->GetYaxis()->SetTitle("Events");
h2ELossXvsY->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1ELossXvsYFlux->SetLineColor(kRed);
h1ELossXvsYFlux->GetXaxis()->SetTitle("");
h1ELossXvsYFlux->GetXaxis()->CenterTitle();
h1ELossXvsYFlux->GetYaxis()->SetTitle("Events");
h1ELossXvsYFlux->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2ELossXvsYFlux->SetLineColor(kBlue);
h2ELossXvsYFlux->GetXaxis()->SetTitle("");
h2ELossXvsYFlux->GetXaxis()->CenterTitle();
h2ELossXvsYFlux->GetYaxis()->SetTitle("Events");
h2ELossXvsYFlux->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1ELossXvsYDivide->SetLineColor(kRed);
h1ELossXvsYDivide->GetXaxis()->SetTitle("");
h1ELossXvsYDivide->GetXaxis()->CenterTitle();
h1ELossXvsYDivide->GetYaxis()->SetTitle("Events");
h1ELossXvsYDivide->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2ELossXvsYDivide->SetLineColor(kBlue);
h2ELossXvsYDivide->GetXaxis()->SetTitle("");
h2ELossXvsYDivide->GetXaxis()->CenterTitle();
h2ELossXvsYDivide->GetYaxis()->SetTitle("Events");
h2ELossXvsYDivide->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1PhivsThetaELoss->SetLineColor(kRed);
h1PhivsThetaELoss->GetXaxis()->SetTitle("");
h1PhivsThetaELoss->GetXaxis()->CenterTitle();
h1PhivsThetaELoss->GetYaxis()->SetTitle("Events");
h1PhivsThetaELoss->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2PhivsThetaELoss->SetLineColor(kBlue);
h2PhivsThetaELoss->GetXaxis()->SetTitle("");
h2PhivsThetaELoss->GetXaxis()->CenterTitle();
h2PhivsThetaELoss->GetYaxis()->SetTitle("Events");
h2PhivsThetaELoss->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1PhivsThetaELossFlux->SetLineColor(kRed);
h1PhivsThetaELossFlux->GetXaxis()->SetTitle("");
h1PhivsThetaELossFlux->GetXaxis()->CenterTitle();
h1PhivsThetaELossFlux->GetYaxis()->SetTitle("Events");
h1PhivsThetaELossFlux->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2PhivsThetaELossFlux->SetLineColor(kBlue);
h2PhivsThetaELossFlux->GetXaxis()->SetTitle("");
h2PhivsThetaELossFlux->GetXaxis()->CenterTitle();
h2PhivsThetaELossFlux->GetYaxis()->SetTitle("Events");
h2PhivsThetaELossFlux->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1PhivsThetaELossDivide->SetLineColor(kRed);
h1PhivsThetaELossDivide->GetXaxis()->SetTitle("");
h1PhivsThetaELossDivide->GetXaxis()->CenterTitle();
h1PhivsThetaELossDivide->GetYaxis()->SetTitle("Events");
h1PhivsThetaELossDivide->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2PhivsThetaELossDivide->SetLineColor(kBlue);
h2PhivsThetaELossDivide->GetXaxis()->SetTitle("");
h2PhivsThetaELossDivide->GetXaxis()->CenterTitle();
h2PhivsThetaELossDivide->GetYaxis()->SetTitle("Events");
h2PhivsThetaELossDivide->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1CaloRecodEdX->SetLineColor(kRed);
h1CaloRecodEdX->GetXaxis()->SetTitle("dE/dx (MeV/cm)");
h1CaloRecodEdX->GetXaxis()->CenterTitle();
h1CaloRecodEdX->GetYaxis()->SetTitle("Normalized Events");
h1CaloRecodEdX->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2CaloRecodEdX->SetLineColor(kBlue);
h2CaloRecodEdX->GetXaxis()->SetTitle("dE/dx (MeV/cm)");
h2CaloRecodEdX->GetXaxis()->CenterTitle();
h2CaloRecodEdX->GetYaxis()->SetTitle("Normalized Events");
h2CaloRecodEdX->GetYaxis()->CenterTitle();
//--- DDProton Histogram ---|
hDCaloRecodEdX->SetLineColor(kBlack);
hDCaloRecodEdX->GetXaxis()->SetTitle("dE/dx (MeV/cm)");
hDCaloRecodEdX->GetXaxis()->CenterTitle();
hDCaloRecodEdX->GetYaxis()->SetTitle("Normalized Events");
hDCaloRecodEdX->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1CaloRecodEdXvsRR->SetLineColor(kRed);
h1CaloRecodEdXvsRR->GetXaxis()->SetTitle("");
h1CaloRecodEdXvsRR->GetXaxis()->CenterTitle();
h1CaloRecodEdXvsRR->GetYaxis()->SetTitle("Events");
h1CaloRecodEdXvsRR->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2CaloRecodEdXvsRR->SetLineColor(kBlue);
h2CaloRecodEdXvsRR->GetXaxis()->SetTitle("");
h2CaloRecodEdXvsRR->GetXaxis()->CenterTitle();
h2CaloRecodEdXvsRR->GetYaxis()->SetTitle("Events");
h2CaloRecodEdXvsRR->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1CaloRecoTrackLength->SetLineColor(kRed);
h1CaloRecoTrackLength->GetXaxis()->SetTitle("");
h1CaloRecoTrackLength->GetXaxis()->CenterTitle();
h1CaloRecoTrackLength->GetYaxis()->SetTitle("Events");
h1CaloRecoTrackLength->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2CaloRecoTrackLength->SetLineColor(kBlue);
h2CaloRecoTrackLength->GetXaxis()->SetTitle("");
h2CaloRecoTrackLength->GetXaxis()->CenterTitle();
h2CaloRecoTrackLength->GetYaxis()->SetTitle("Events");
h2CaloRecoTrackLength->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1InitialKEWC4->SetLineColor(kRed);
h1InitialKEWC4->GetXaxis()->SetTitle("");
h1InitialKEWC4->GetXaxis()->CenterTitle();
h1InitialKEWC4->GetYaxis()->SetTitle("Events");
h1InitialKEWC4->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2InitialKEWC4->SetLineColor(kBlue);
h2InitialKEWC4->GetXaxis()->SetTitle("");
h2InitialKEWC4->GetXaxis()->CenterTitle();
h2InitialKEWC4->GetYaxis()->SetTitle("Events");
h2InitialKEWC4->GetYaxis()->CenterTitle();
//--- DDProton Histogram ---|
hDInitialKEWC4->SetLineColor(kBlack);
hDInitialKEWC4->GetXaxis()->SetTitle("");
hDInitialKEWC4->GetXaxis()->CenterTitle();
hDInitialKEWC4->GetYaxis()->SetTitle("Events");
hDInitialKEWC4->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1DeltaEnergyCaloVsLength->SetLineColor(kRed);
h1DeltaEnergyCaloVsLength->GetXaxis()->SetTitle("");
h1DeltaEnergyCaloVsLength->GetXaxis()->CenterTitle();
h1DeltaEnergyCaloVsLength->GetYaxis()->SetTitle("Events");
h1DeltaEnergyCaloVsLength->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2DeltaEnergyCaloVsLength->SetLineColor(kBlue);
h2DeltaEnergyCaloVsLength->GetXaxis()->SetTitle("");
h2DeltaEnergyCaloVsLength->GetXaxis()->CenterTitle();
h2DeltaEnergyCaloVsLength->GetYaxis()->SetTitle("Events");
h2DeltaEnergyCaloVsLength->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1EnergyCalo->SetLineColor(kRed);
h1EnergyCalo->GetXaxis()->SetTitle("");
h1EnergyCalo->GetXaxis()->CenterTitle();
h1EnergyCalo->GetYaxis()->SetTitle("Events");
h1EnergyCalo->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2EnergyCalo->SetLineColor(kBlue);
h2EnergyCalo->GetXaxis()->SetTitle("");
h2EnergyCalo->GetXaxis()->CenterTitle();
h2EnergyCalo->GetYaxis()->SetTitle("Events");
h2EnergyCalo->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1EnergyLength->SetLineColor(kRed);
h1EnergyLength->GetXaxis()->SetTitle("");
h1EnergyLength->GetXaxis()->CenterTitle();
h1EnergyLength->GetYaxis()->SetTitle("Events");
h1EnergyLength->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2EnergyLength->SetLineColor(kBlue);
h2EnergyLength->GetXaxis()->SetTitle("");
h2EnergyLength->GetXaxis()->CenterTitle();
h2EnergyLength->GetYaxis()->SetTitle("Events");
h2EnergyLength->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1KETPC->SetLineColor(kRed);
h1KETPC->GetXaxis()->SetTitle("");
h1KETPC->GetXaxis()->CenterTitle();
h1KETPC->GetYaxis()->SetTitle("Events");
h1KETPC->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2KETPC->SetLineColor(kBlue);
h2KETPC->GetXaxis()->SetTitle("");
h2KETPC->GetXaxis()->CenterTitle();
h2KETPC->GetYaxis()->SetTitle("Events");
h2KETPC->GetYaxis()->CenterTitle();
//--- DDProton Histogram ---|
hDKETPC->SetLineColor(kBlack);
hDKETPC->GetXaxis()->SetTitle("");
hDKETPC->GetXaxis()->CenterTitle();
hDKETPC->GetYaxis()->SetTitle("Events");
hDKETPC->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1DeltaKETPCVsLength->SetLineColor(kRed);
h1DeltaKETPCVsLength->GetXaxis()->SetTitle("");
h1DeltaKETPCVsLength->GetXaxis()->CenterTitle();
h1DeltaKETPCVsLength->GetYaxis()->SetTitle("Events");
h1DeltaKETPCVsLength->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2DeltaKETPCVsLength->SetLineColor(kBlue);
h2DeltaKETPCVsLength->GetXaxis()->SetTitle("");
h2DeltaKETPCVsLength->GetXaxis()->CenterTitle();
h2DeltaKETPCVsLength->GetYaxis()->SetTitle("Events");
h2DeltaKETPCVsLength->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1DeltaKETPCVsCalo->SetLineColor(kRed);
h1DeltaKETPCVsCalo->GetXaxis()->SetTitle("");
h1DeltaKETPCVsCalo->GetXaxis()->CenterTitle();
h1DeltaKETPCVsCalo->GetYaxis()->SetTitle("Events");
h1DeltaKETPCVsCalo->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2DeltaKETPCVsCalo->SetLineColor(kBlue);
h2DeltaKETPCVsCalo->GetXaxis()->SetTitle("");
h2DeltaKETPCVsCalo->GetXaxis()->CenterTitle();
h2DeltaKETPCVsCalo->GetYaxis()->SetTitle("Events");
h2DeltaKETPCVsCalo->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1EnergyLossMap->SetLineColor(kRed);
h1EnergyLossMap->GetXaxis()->SetTitle("");
h1EnergyLossMap->GetXaxis()->CenterTitle();
h1EnergyLossMap->GetYaxis()->SetTitle("Events");
h1EnergyLossMap->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2EnergyLossMap->SetLineColor(kBlue);
h2EnergyLossMap->GetXaxis()->SetTitle("");
h2EnergyLossMap->GetXaxis()->CenterTitle();
h2EnergyLossMap->GetYaxis()->SetTitle("Events");
h2EnergyLossMap->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1DeltaKETPCVsFlat->SetLineColor(kRed);
h1DeltaKETPCVsFlat->GetXaxis()->SetTitle("");
h1DeltaKETPCVsFlat->GetXaxis()->CenterTitle();
h1DeltaKETPCVsFlat->GetYaxis()->SetTitle("Events");
h1DeltaKETPCVsFlat->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2DeltaKETPCVsFlat->SetLineColor(kBlue);
h2DeltaKETPCVsFlat->GetXaxis()->SetTitle("");
h2DeltaKETPCVsFlat->GetXaxis()->CenterTitle();
h2DeltaKETPCVsFlat->GetYaxis()->SetTitle("Events");
h2DeltaKETPCVsFlat->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1DeltaKEFlatVsCalo->SetLineColor(kRed);
h1DeltaKEFlatVsCalo->GetXaxis()->SetTitle("");
h1DeltaKEFlatVsCalo->GetXaxis()->CenterTitle();
h1DeltaKEFlatVsCalo->GetYaxis()->SetTitle("Events");
h1DeltaKEFlatVsCalo->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2DeltaKEFlatVsCalo->SetLineColor(kBlue);
h2DeltaKEFlatVsCalo->GetXaxis()->SetTitle("");
h2DeltaKEFlatVsCalo->GetXaxis()->CenterTitle();
h2DeltaKEFlatVsCalo->GetYaxis()->SetTitle("Events");
h2DeltaKEFlatVsCalo->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1DeltaKEFlatVsLength->SetLineColor(kRed);
h1DeltaKEFlatVsLength->GetXaxis()->SetTitle("");
h1DeltaKEFlatVsLength->GetXaxis()->CenterTitle();
h1DeltaKEFlatVsLength->GetYaxis()->SetTitle("Events");
h1DeltaKEFlatVsLength->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2DeltaKEFlatVsLength->SetLineColor(kBlue);
h2DeltaKEFlatVsLength->GetXaxis()->SetTitle("");
h2DeltaKEFlatVsLength->GetXaxis()->CenterTitle();
h2DeltaKEFlatVsLength->GetYaxis()->SetTitle("Events");
h2DeltaKEFlatVsLength->GetYaxis()->CenterTitle();

//#################################|




//##############################|
//### Drawing the Histograms ###|
//##############################|

//--------------------------------------------------------|
TCanvas *c1 = new TCanvas("c1", "");
c1->SetTicks();
c1->SetFillColor(kWhite);

h1RawWCMomentum->Scale(1/h1RawWCMomentum->Integral());
h2RawWCMomentum->Scale(1/h2RawWCMomentum->Integral());

h1RawWCMomentum->Draw("E1");
h2RawWCMomentum->Draw("E1same");
//========================================================|
TLegend *leg1 = new TLegend(0.58,0.65,0.88,0.88);
leg1->SetTextSize(0.04);
leg1->SetTextAlign(12);
leg1->SetFillColor(kWhite);
leg1->SetLineColor(kWhite);
leg1->SetShadowColor(kWhite);
leg1->SetHeader("Proton Calorimetry Study");
leg1->AddEntry(h1RawWCMomentum, "Run I Data");
leg1->AddEntry(h2RawWCMomentum, "Run II Data");
leg1->Draw();
//--------------------------------------------------------|



//--------------------------------------------------------|
TCanvas *c2 = new TCanvas("c2", "");
c2->SetTicks();
c2->SetFillColor(kWhite);

h1TOFNoCuts->Scale(1/h1TOFNoCuts->Integral());
h2TOFNoCuts->Scale(1/h2TOFNoCuts->Integral());

h1TOFNoCuts->Draw("E1");
h2TOFNoCuts->Draw("E1same");
//========================================================|
TLegend *leg2 = new TLegend(0.58,0.65,0.88,0.88);
leg2->SetTextSize(0.04);
leg2->SetTextAlign(12);
leg2->SetFillColor(kWhite);
leg2->SetLineColor(kWhite);
leg2->SetShadowColor(kWhite);
leg2->SetHeader("Proton Calorimetry Study");
leg2->AddEntry(h1TOFNoCuts, "Run I Data");
leg2->AddEntry(h2TOFNoCuts, "Run II Data");
leg2->Draw();
//--------------------------------------------------------|



//--------------------------------------------------------|
TCanvas *c3 = new TCanvas("c3", "");
c3->SetTicks();
c3->SetFillColor(kWhite);

h1UpstreamZ->Scale(1/h1UpstreamZ->Integral());
h2UpstreamZ->Scale(1/h2UpstreamZ->Integral());

h1UpstreamZ->Draw("E1");
h2UpstreamZ->Draw("E1same");
//========================================================|
TLegend *leg3 = new TLegend(0.58,0.65,0.88,0.88);
leg3->SetTextSize(0.04);
leg3->SetTextAlign(12);
leg3->SetFillColor(kWhite);
leg3->SetLineColor(kWhite);
leg3->SetShadowColor(kWhite);
leg3->SetHeader("Proton Calorimetry Study");
leg3->AddEntry(h1UpstreamZ, "Run I Data");
leg3->AddEntry(h2UpstreamZ, "Run II Data");
leg3->Draw();
//--------------------------------------------------------|



//--------------------------------------------------------|
TCanvas *c4 = new TCanvas("c4", "");
c4->SetTicks();
c4->SetFillColor(kWhite);

h1NumberOfUSTrks->Scale(1/h1NumberOfUSTrks->Integral());
h2NumberOfUSTrks->Scale(1/h2NumberOfUSTrks->Integral());

h1NumberOfUSTrks->Draw("E1");
h2NumberOfUSTrks->Draw("E1same");
//========================================================|
TLegend *leg4 = new TLegend(0.58,0.65,0.88,0.88);
leg4->SetTextSize(0.04);
leg4->SetTextAlign(12);
leg4->SetFillColor(kWhite);
leg4->SetLineColor(kWhite);
leg4->SetShadowColor(kWhite);
leg4->SetHeader("Proton Calorimetry Study");
leg4->AddEntry(h1NumberOfUSTrks, "Run I Data");
leg4->AddEntry(h2NumberOfUSTrks, "Run II Data");
leg4->Draw();
//--------------------------------------------------------|



//--------------------------------------------------------|
TCanvas *c5 = new TCanvas("c5", "");
c5->SetTicks();
c5->SetFillColor(kWhite);

h1InitialX->Scale((h2InitialX->Integral())/(h1InitialX->Integral()));
hDInitialX->Scale((h2InitialX->Integral())/(hDInitialX->Integral()));

std::cout<<"Scale for R1 Initial X = "<<h1InitialX->Integral()<<std::endl;
std::cout<<"Scale for R2 Initial X = "<<h2InitialX->Integral()<<std::endl;
std::cout<<"Scale for MC Initial X = "<<hDInitialX->Integral()<<std::endl;

hDInitialX->SetLineWidth(2);

hDInitialX->Draw("histo");
h1InitialX->Draw("E1same");
h2InitialX->Draw("E1same");
//========================================================|
TLegend *leg5 = new TLegend(0.58,0.65,0.88,0.88);
leg5->SetTextSize(0.04);
leg5->SetTextAlign(12);
leg5->SetFillColor(kWhite);
leg5->SetLineColor(kWhite);
leg5->SetShadowColor(kWhite);
leg5->SetHeader("Proton Calorimetry Study");
leg5->AddEntry(h1InitialX, "Run I Data");
leg5->AddEntry(h2InitialX, "Run II Data");
leg5->AddEntry(hDInitialX, "DDProton MC");
leg5->Draw();
//--------------------------------------------------------|



//--------------------------------------------------------|
TCanvas *c6 = new TCanvas("c6", "");
c6->SetTicks();
c6->SetFillColor(kWhite);

//h1InitialY->Scale(1/h1InitialY->Integral());
//h2InitialY->Scale(1/h2InitialY->Integral());
//hDInitialY->Scale(1/hDInitialY->Integral());
h1InitialY->Scale((h2InitialY->Integral())/(h1InitialY->Integral()));
hDInitialY->Scale((h2InitialY->Integral())/(hDInitialY->Integral()));

std::cout<<"Scale for R1 Initial Y = "<<h1InitialY->Integral()<<std::endl;
std::cout<<"Scale for R2 Initial Y = "<<h2InitialY->Integral()<<std::endl;
std::cout<<"Scale for MC Initial Y = "<<hDInitialY->Integral()<<std::endl;

hDInitialY->SetLineWidth(2);

hDInitialY->Draw("histo");
h1InitialY->Draw("E1same");
h2InitialY->Draw("E1same");
//========================================================|
TLegend *leg6 = new TLegend(0.58,0.65,0.88,0.88);
leg6->SetTextSize(0.04);
leg6->SetTextAlign(12);
leg6->SetFillColor(kWhite);
leg6->SetLineColor(kWhite);
leg6->SetShadowColor(kWhite);
leg6->SetHeader("Proton Calorimetry Study");
leg6->AddEntry(h1InitialY, "Run I Data");
leg6->AddEntry(h2InitialY, "Run II Data");
leg6->AddEntry(hDInitialY, "DDProton MC");
leg6->Draw();
//--------------------------------------------------------|



//--------------------------------------------------------|
TCanvas *c7 = new TCanvas("c7", "");
c7->SetTicks();
c7->SetFillColor(kWhite);

//h1TPCTheta->Scale(1/h1TPCTheta->Integral());
//h2TPCTheta->Scale(1/h2TPCTheta->Integral());
//hDTPCTheta->Scale(1/hDTPCTheta->Integral());
h1TPCTheta->Scale((h2TPCTheta->Integral())/(h1TPCTheta->Integral()));
hDTPCTheta->Scale((h2TPCTheta->Integral())/(hDTPCTheta->Integral()));

std::cout<<"Scale for R1 Theta = "<<h1TPCTheta->Integral()<<std::endl;
std::cout<<"Scale for R2 Theta = "<<h2TPCTheta->Integral()<<std::endl;
std::cout<<"Scale for MC Theta = "<<hDTPCTheta->Integral()<<std::endl;

hDTPCTheta->SetLineWidth(2);

hDTPCTheta->Draw("histo");
h1TPCTheta->Draw("E1same");
h2TPCTheta->Draw("E1same");
//========================================================|
TLegend *leg7 = new TLegend(0.58,0.65,0.88,0.88);
leg7->SetTextSize(0.04);
leg7->SetTextAlign(12);
leg7->SetFillColor(kWhite);
leg7->SetLineColor(kWhite);
leg7->SetShadowColor(kWhite);
leg7->SetHeader("Proton Calorimetry Study");
leg7->AddEntry(h1TPCTheta, "Run I Data");
leg7->AddEntry(h2TPCTheta, "Run II Data");
leg7->AddEntry(hDTPCTheta, "DDProton MC");
leg7->Draw();
//--------------------------------------------------------|



//--------------------------------------------------------|
TCanvas *c8 = new TCanvas("c8", "");
c8->SetTicks();
c8->SetFillColor(kWhite);

//h1TPCPhi->Scale(1/h1TPCPhi->Integral());
//h2TPCPhi->Scale(1/h2TPCPhi->Integral());
//hDTPCPhi->Scale(1/hDTPCPhi->Integral());
h1TPCPhi->Scale((h2TPCPhi->Integral())/(h1TPCPhi->Integral()));
hDTPCPhi->Scale((h2TPCPhi->Integral())/(hDTPCPhi->Integral()));

std::cout<<"Scale for R1 Phi = "<<h1TPCPhi->Integral()<<std::endl;
std::cout<<"Scale for R2 Phi = "<<h2TPCPhi->Integral()<<std::endl;
std::cout<<"Scale for MC Phi = "<<hDTPCPhi->Integral()<<std::endl;

hDTPCPhi->SetLineWidth(2);

h1TPCPhi->Draw("E1");
h2TPCPhi->Draw("E1same");
hDTPCPhi->Draw("histosame");
//========================================================|
TLegend *leg8 = new TLegend(0.58,0.65,0.88,0.88);
leg8->SetTextSize(0.04);
leg8->SetTextAlign(12);
leg8->SetFillColor(kWhite);
leg8->SetLineColor(kWhite);
leg8->SetShadowColor(kWhite);
leg8->SetHeader("Proton Calorimetry Study");
leg8->AddEntry(h1TPCPhi, "Run I Data");
leg8->AddEntry(h2TPCPhi, "Run II Data");
leg8->AddEntry(hDTPCPhi, "DDProton MC");
leg8->Draw();
//--------------------------------------------------------|



//--------------------------------------------------------|
TCanvas *c9 = new TCanvas("c9", "");
c9->SetTicks();
c9->SetFillColor(kWhite);

//h1CaloRecodEdX->Scale(1/h1CaloRecodEdX->Integral());
//h2CaloRecodEdX->Scale(1/h2CaloRecodEdX->Integral());
//hDCaloRecodEdX->Scale(1/hDCaloRecodEdX->Integral());
h1CaloRecodEdX->Scale((h2CaloRecodEdX->Integral())/(h1CaloRecodEdX->Integral()));
hDCaloRecodEdX->Scale((h2CaloRecodEdX->Integral())/(hDCaloRecodEdX->Integral()));

std::cout<<"Scale for R1 dE/dx = "<<h1CaloRecodEdX->Integral()<<std::endl;
std::cout<<"Scale for R2 dE/dx = "<<h2CaloRecodEdX->Integral()<<std::endl;
std::cout<<"Scale for MC dE/dx = "<<hDCaloRecodEdX->Integral()<<std::endl;

hDCaloRecodEdX->SetLineWidth(2);

hDCaloRecodEdX->Draw("histo");
h1CaloRecodEdX->Draw("E1same");
h2CaloRecodEdX->Draw("E1same");
//========================================================|
TLegend *leg9 = new TLegend(0.58,0.65,0.88,0.88);
leg9->SetTextSize(0.04);
leg9->SetTextAlign(12);
leg9->SetFillColor(kWhite);
leg9->SetLineColor(kWhite);
leg9->SetShadowColor(kWhite);
leg9->SetHeader("Proton Calorimetry Study");
leg9->AddEntry(h1CaloRecodEdX, "Run I Data");
leg9->AddEntry(h2CaloRecodEdX, "Run II Data");
leg9->AddEntry(hDCaloRecodEdX, "DDProton MC");
leg9->Draw();
//--------------------------------------------------------|



//--------------------------------------------------------|
TCanvas *c10 = new TCanvas("c10", "");
c10->SetTicks();
c10->SetFillColor(kWhite);

h1DeltaEnergyCaloVsLength->Scale((h2DeltaEnergyCaloVsLength->Integral())/(h1DeltaEnergyCaloVsLength->Integral()));
//hD->Scale((h2->Integral())/(hD->Integral()));

//hD->SetLineWidth(2);

//hD->Draw("histo");
h1DeltaEnergyCaloVsLength->Draw("E1");
h2DeltaEnergyCaloVsLength->Draw("E1same");
//========================================================|
TLegend *leg10 = new TLegend(0.58,0.65,0.88,0.88);
leg10->SetTextSize(0.04);
leg10->SetTextAlign(12);
leg10->SetFillColor(kWhite);
leg10->SetLineColor(kWhite);
leg10->SetShadowColor(kWhite);
leg10->SetHeader("Proton Calorimetry Study");
leg10->AddEntry(h1DeltaEnergyCaloVsLength, "Run I Data");
leg10->AddEntry(h2DeltaEnergyCaloVsLength, "Run II Data");
//leg10->AddEntry(hD, "DDProton MC");
leg10->Draw();
//--------------------------------------------------------|



//--------------------------------------------------------|
TCanvas *c11 = new TCanvas("c11", "");
c11->SetTicks();
c11->SetFillColor(kWhite);

h1DeltaKETPCVsLength->Scale((h2DeltaKETPCVsLength->Integral())/(h1DeltaKETPCVsLength->Integral()));
//hD->Scale((h2->Integral())/(hD->Integral()));

//hD->SetLineWidth(2);

//hD->Draw("histo");
h1DeltaKETPCVsLength->Draw("E1");
h2DeltaKETPCVsLength->Draw("E1same");
//========================================================|
TLegend *leg11 = new TLegend(0.58,0.65,0.88,0.88);
leg11->SetTextSize(0.04);
leg11->SetTextAlign(12);
leg11->SetFillColor(kWhite);
leg11->SetLineColor(kWhite);
leg11->SetShadowColor(kWhite);
leg11->SetHeader("Proton Calorimetry Study");
leg11->AddEntry(h1DeltaKETPCVsLength, "Run I Data");
leg11->AddEntry(h2DeltaKETPCVsLength, "Run II Data");
//leg11->AddEntry(hD, "DDProton MC");
leg11->Draw();
//--------------------------------------------------------|



//--------------------------------------------------------|
TCanvas *c12 = new TCanvas("c12", "");
c12->SetTicks();
c12->SetFillColor(kWhite);

h1DeltaKETPCVsCalo->Scale((h2DeltaKETPCVsCalo->Integral())/(h1DeltaKETPCVsCalo->Integral()));
//hD->Scale((h2->Integral())/(hD->Integral()));

//hD->SetLineWidth(2);

//hD->Draw("histo");
h1DeltaKETPCVsCalo->Draw("E1");
h2DeltaKETPCVsCalo->Draw("E1same");
//========================================================|
TLegend *leg12 = new TLegend(0.58,0.65,0.88,0.88);
leg12->SetTextSize(0.04);
leg12->SetTextAlign(12);
leg12->SetFillColor(kWhite);
leg12->SetLineColor(kWhite);
leg12->SetShadowColor(kWhite);
leg12->SetHeader("Proton Calorimetry Study");
leg12->AddEntry(h1DeltaKETPCVsCalo, "Run I Data");
leg12->AddEntry(h2DeltaKETPCVsCalo, "Run II Data");
//leg12->AddEntry(hD, "DDProton MC");
leg12->Draw();
//--------------------------------------------------------|



//--------------------------------------------------------|
TCanvas *c13 = new TCanvas("c13", "");
c13->SetTicks();
c13->SetFillColor(kWhite);

h1DeltaKETPCVsFlat->Scale((h2DeltaKETPCVsFlat->Integral())/(h1DeltaKETPCVsFlat->Integral()));
//hD->Scale((h2->Integral())/(hD->Integral()));

//hD->SetLineWidth(2);

//hD->Draw("histo");
h1DeltaKETPCVsFlat->Draw("E1");
h2DeltaKETPCVsFlat->Draw("E1same");
//========================================================|
TLegend *leg13 = new TLegend(0.58,0.65,0.88,0.88);
leg13->SetTextSize(0.04);
leg13->SetTextAlign(12);
leg13->SetFillColor(kWhite);
leg13->SetLineColor(kWhite);
leg13->SetShadowColor(kWhite);
leg13->SetHeader("Proton Calorimetry Study");
leg13->AddEntry(h1DeltaKETPCVsFlat, "Run I Data");
leg13->AddEntry(h2DeltaKETPCVsFlat, "Run II Data");
//leg13->AddEntry(hD, "DDProton MC");
leg13->Draw();
//--------------------------------------------------------|



//--------------------------------------------------------|
TCanvas *c14 = new TCanvas("c14", "");
c14->SetTicks();
c14->SetFillColor(kWhite);

h1DeltaKEFlatVsCalo->Scale((h2DeltaKEFlatVsCalo->Integral())/(h1DeltaKEFlatVsCalo->Integral()));
//hD->Scale((h2->Integral())/(hD->Integral()));

//hD->SetLineWidth(2);

//hD->Draw("histo");
h1DeltaKEFlatVsCalo->Draw("E1");
h2DeltaKEFlatVsCalo->Draw("E1same");
//========================================================|
TLegend *leg14 = new TLegend(0.58,0.65,0.88,0.88);
leg14->SetTextSize(0.04);
leg14->SetTextAlign(12);
leg14->SetFillColor(kWhite);
leg14->SetLineColor(kWhite);
leg14->SetShadowColor(kWhite);
leg14->SetHeader("Proton Calorimetry Study");
leg14->AddEntry(h1DeltaKEFlatVsCalo, "Run I Data");
leg14->AddEntry(h2DeltaKEFlatVsCalo, "Run II Data");
//leg14->AddEntry(hD, "DDProton MC");
leg14->Draw();
//--------------------------------------------------------|



//--------------------------------------------------------|
TCanvas *c15 = new TCanvas("c15", "");
c15->SetTicks();
c15->SetFillColor(kWhite);

h1DeltaKEFlatVsLength->Scale((h2DeltaKEFlatVsLength->Integral())/(h1DeltaKEFlatVsLength->Integral()));
//hD->Scale((h2->Integral())/(hD->Integral()));

//hD->SetLineWidth(2);

//hD->Draw("histo");
h1DeltaKEFlatVsLength->Draw("E1");
h2DeltaKEFlatVsLength->Draw("E1same");
//========================================================|
TLegend *leg15 = new TLegend(0.58,0.65,0.88,0.88);
leg15->SetTextSize(0.04);
leg15->SetTextAlign(12);
leg15->SetFillColor(kWhite);
leg15->SetLineColor(kWhite);
leg15->SetShadowColor(kWhite);
leg15->SetHeader("Proton Calorimetry Study");
leg15->AddEntry(h1DeltaKEFlatVsLength, "Run I Data");
leg15->AddEntry(h2DeltaKEFlatVsLength, "Run II Data");
//leg15->AddEntry(hD, "DDProton MC");
leg15->Draw();
//--------------------------------------------------------|



//--------------------------------------------------------|
TCanvas *c16 = new TCanvas("c16", "");
c16->SetTicks();
c16->SetFillColor(kWhite);

h1InitialKEWC4->Scale((h2InitialKEWC4->Integral())/(h1InitialKEWC4->Integral()));
hDInitialKEWC4->Scale((h2InitialKEWC4->Integral())/(hDInitialKEWC4->Integral()));

hDInitialKEWC4->SetLineWidth(2);

hDInitialKEWC4->Draw("histo");
h1InitialKEWC4->Draw("E1same");
h2InitialKEWC4->Draw("E1same");
//========================================================|
TLegend *leg16 = new TLegend(0.58,0.65,0.88,0.88);
leg16->SetTextSize(0.04);
leg16->SetTextAlign(12);
leg16->SetFillColor(kWhite);
leg16->SetLineColor(kWhite);
leg16->SetShadowColor(kWhite);
leg16->SetHeader("Proton Calorimetry Study");
leg16->AddEntry(h1InitialKEWC4, "Run I Data");
leg16->AddEntry(h2InitialKEWC4, "Run II Data");
leg16->AddEntry(hDInitialKEWC4, "DDProton MC");
leg16->Draw();
//--------------------------------------------------------|



//--------------------------------------------------------|
TCanvas *c17 = new TCanvas("c17", "");
c17->SetTicks();
c17->SetFillColor(kWhite);

h1KETPC->Scale((h2KETPC->Integral())/(h1KETPC->Integral()));
hDKETPC->Scale((h2KETPC->Integral())/(hDKETPC->Integral()));

hDKETPC->SetLineWidth(2);

hDKETPC->Draw("histo");
h1KETPC->Draw("E1same");
h2KETPC->Draw("E1same");
//========================================================|
TLegend *leg17 = new TLegend(0.58,0.65,0.88,0.88);
leg17->SetTextSize(0.04);
leg17->SetTextAlign(12);
leg17->SetFillColor(kWhite);
leg17->SetLineColor(kWhite);
leg17->SetShadowColor(kWhite);
leg17->SetHeader("Proton Calorimetry Study");
leg17->AddEntry(h1KETPC, "Run I Data");
leg17->AddEntry(h2KETPC, "Run II Data");
leg17->AddEntry(hDKETPC, "DDProton MC");
leg17->Draw();
//--------------------------------------------------------|



/*
//--------------------------------------------------------|
TCanvas *c11 = new TCanvas("c11", "");
c11->SetTicks();
c11->SetFillColor(kWhite);

h1->Scale((h2->Integral())/(h1->Integral()));
//hD->Scale((h2->Integral())/(hD->Integral()));

//hD->SetLineWidth(2);

//hD->Draw("histo");
h1->Draw("E1");
h2->Draw("E1same");
//========================================================|
TLegend *leg11 = new TLegend(0.58,0.65,0.88,0.88);
leg11->SetTextSize(0.04);
leg11->SetTextAlign(12);
leg11->SetFillColor(kWhite);
leg11->SetLineColor(kWhite);
leg11->SetShadowColor(kWhite);
leg11->SetHeader("Proton Calorimetry Study");
leg11->AddEntry(h1, "Run I Data");
leg11->AddEntry(h2, "Run II Data");
//leg11->AddEntry(hD, "DDProton MC");
leg11->Draw();
//--------------------------------------------------------|
*/

//##############################|

}
