{

//#############################################|
//### Read in ROOT Files for Run I & Run II ###|
//#############################################|

//--- Read in Run I ROOT File ---|
TFile *f1 = new TFile("./RunIPosPolData_StoppingProtons.root");

//--- Read in Run II ROOT File ---|
TFile *f2 = new TFile("./RunIIPosPolData_StoppingProtons.root");

//#############################################|




//##############################################|
//### Defining the Histograms From the Files ###|
//##############################################|

//--- Run I Histogram ---|
TH1D *h1 = (TH1D*)f1->Get("hdataRawWCTRKMomentum");
//--- Run II Histogram ---|
TH1D *h2 = (TH1D*)f2->Get("hdataRawWCTRKMomentum");

//--- Run I Histogram ---|
TH1D *h1 = (TH1D*)f1->Get("hdataTOFNoCuts");
//--- Run II Histogram ---|
TH1D *h2 = (TH1D*)f2->Get("hdataTOFNoCuts");

//--- Run I Histogram ---|
TH2D *h1 = (TH2D*)f1->Get("hdataWCTrackMomentumVSTOF");
//--- Run II Histogram ---|
TH2D *h2 = (TH2D*)f2->Get("hdataWCTrackMomentumVSTOF");

//--- Run I Histogram ---|
TH1D *h1 = (TH1D*)f1->Get("hdataUpstreamZPos");
//--- Run II Histogram ---|
TH1D *h2 = (TH1D*)f2->Get("hdataUpstreamZPos");

//--- Run I Histogram ---|
TH1D *h1 = (TH1D*)f1->Get("hdataNumberOfUSTrks");
//--- Run II Histogram ---|
TH1D *h2 = (TH1D*)f2->Get("hdataNumberOfUSTrks");

//--- Run I Histogram ---|
TH1D *h1 = (TH1D*)f1->Get("hdataTrkInitialX");
//--- Run II Histogram ---|
TH1D *h2 = (TH1D*)f2->Get("hdataTrkInitialX");

//--- Run I Histogram ---|
TH1D *h1 = (TH1D*)f1->Get("hdataTrkInitialY");
//--- Run II Histogram ---|
TH1D *h2 = (TH1D*)f2->Get("hdataTrkInitialY");

//--- Run I Histogram ---|
TH1D *h1 = (TH1D*)f1->Get("hdataTrkInitialZ");
//--- Run II Histogram ---|
TH1D *h2 = (TH1D*)f2->Get("hdataTrkInitialZ");

//--- Run I Histogram ---|
TH1D *h1 = (TH1D*)f1->Get("hdataWCTRKMomentum");
//--- Run II Histogram ---|
TH1D *h2 = (TH1D*)f2->Get("hdataWCTRKMomentum");

//--- Run I Histogram ---|
TH1D *h1 = (TH1D*)f1->Get("hdataTPCTheta");
//--- Run II Histogram ---|
TH1D *h2 = (TH1D*)f2->Get("hdataTPCTheta");

//--- Run I Histogram ---|
TH1D *h1 = (TH1D*)f1->Get("hdataTPCPhi");
//--- Run II Histogram ---|
TH1D *h2 = (TH1D*)f2->Get("hdataTPCPhi");

//--- Run I Histogram ---|
TH1D *h1 = (TH1D*)f1->Get("hdataWCTheta");
//--- Run II Histogram ---|
TH1D *h2 = (TH1D*)f2->Get("hdataWCTheta");

//--- Run I Histogram ---|
TH1D *h1 = (TH1D*)f1->Get("hdataWCPhi");
//--- Run II Histogram ---|
TH1D *h2 = (TH1D*)f2->Get("hdataWCPhi");

//--- Run I Histogram ---|
TH1D *h1 = (TH1D*)f1->Get("hdataDeltaWCTrkX");
//--- Run II Histogram ---|
TH1D *h2 = (TH1D*)f2->Get("hdataDeltaWCTrkX");

//--- Run I Histogram ---|
TH1D *h1 = (TH1D*)f1->Get("hdataDeltaWCTrkY");
//--- Run II Histogram ---|
TH1D *h2 = (TH1D*)f2->Get("hdataDeltaWCTrkY");

//--- Run I Histogram ---|
TH1D *h1 = (TH1D*)f1->Get("hdataAlpha");
//--- Run II Histogram ---|
TH1D *h2 = (TH1D*)f2->Get("hdataAlpha");

//--- Run I Histogram ---|
TH1D *h1 = (TH1D*)f1->Get("hStoppedProtonEnergyLossUpstream");
//--- Run II Histogram ---|
TH1D *h2 = (TH1D*)f2->Get("hStoppedProtonEnergyLossUpstream");

//--- Run I Histogram ---|
TH1D *h1 = (TH1D*)f1->Get("hStoppedProtonEnergyLossInTPC");
//--- Run II Histogram ---|
TH1D *h2 = (TH1D*)f2->Get("hStoppedProtonEnergyLossInTPC");

//--- Run I Histogram ---|
TH1D *h1 = (TH1D*)f1->Get("hStoppedProtonRemainingKE");
//--- Run II Histogram ---|
TH1D *h2 = (TH1D*)f2->Get("hStoppedProtonRemainingKE");

//--- Run I Histogram ---|
TH2D *h1 = (TH2D*)f1->Get("hELossXvsY");
//--- Run II Histogram ---|
TH2D *h2 = (TH2D*)f2->Get("hELossXvsY");

//--- Run I Histogram ---|
TH2D *h1 = (TH2D*)f1->Get("hELossXvsYFlux");
//--- Run II Histogram ---|
TH2D *h2 = (TH2D*)f2->Get("hELossXvsYFlux");

//--- Run I Histogram ---|
TH2D *h1 = (TH2D*)f1->Get("hELossXvsYDivide");
//--- Run II Histogram ---|
TH2D *h2 = (TH2D*)f2->Get("hELossXvsYDivide");

//--- Run I Histogram ---|
TH2D *h1 = (TH2D*)f1->Get("hPhivsThetaELoss");
//--- Run II Histogram ---|
TH2D *h2 = (TH2D*)f2->Get("hPhivsThetaELoss");

//--- Run I Histogram ---|
TH2D *h1 = (TH2D*)f1->Get("hPhivsThetaELossFlux");
//--- Run II Histogram ---|
TH2D *h2 = (TH2D*)f2->Get("hPhivsThetaELossFlux");

//--- Run I Histogram ---|
TH2D *h1 = (TH2D*)f1->Get("hPhivsThetaELossDivided");
//--- Run II Histogram ---|
TH2D *h2 = (TH2D*)f2->Get("hPhivsThetaELossDivided");

//--- Run I Histogram ---|
TH1D *h1 = (TH1D*)f1->Get("hCaloRecodEdX");
//--- Run II Histogram ---|
TH1D *h2 = (TH1D*)f2->Get("hCaloRecodEdX");

//--- Run I Histogram ---|
TH2D *h1 = (TH2D*)f1->Get("hCaloRecodEdXvsRR");
//--- Run II Histogram ---|
TH2D *h2 = (TH2D*)f2->Get("hCaloRecodEdXvsRR");

//--- Run I Histogram ---|
TH1D *h1 = (TH1D*)f1->Get("hCaloRecoTrackLength");
//--- Run II Histogram ---|
TH1D *h2 = (TH1D*)f2->Get("hCaloRecoTrackLength");

//--- Run I Histogram ---|
TH1D *h1 = (TH1D*)f1->Get("hInitialKEWC4");
//--- Run II Histogram ---|
TH1D *h2 = (TH1D*)f2->Get("hInitialKEWC4");

//--- Run I Histogram ---|
TH1D *h1 = (TH1D*)f1->Get("hDeltaEnergyCaloVsLength");
//--- Run II Histogram ---|
TH1D *h2 = (TH1D*)f2->Get("hDeltaEnergyCaloVsLength");

//--- Run I Histogram ---|
TH1D *h1 = (TH1D*)f1->Get("hEnergyCalo");
//--- Run II Histogram ---|
TH1D *h2 = (TH1D*)f2->Get("hEnergyCalo");

//--- Run I Histogram ---|
TH1D *h1 = (TH1D*)f1->Get("hEnergyLength");
//--- Run II Histogram ---|
TH1D *h2 = (TH1D*)f2->Get("hEnergyLength");

//--- Run I Histogram ---|
TH1D *h1 = (TH1D*)f1->Get("hKETPC");
//--- Run II Histogram ---|
TH1D *h2 = (TH1D*)f2->Get("hKETPC");

//--- Run I Histogram ---|
TH1D *h1 = (TH1D*)f1->Get("hDeltaKETPCVsLength");
//--- Run II Histogram ---|
TH1D *h2 = (TH1D*)f2->Get("hDeltaKETPCVsLength");

//--- Run I Histogram ---|
TH1D *h1 = (TH1D*)f1->Get("hDeltaKETPCVsCalo");
//--- Run II Histogram ---|
TH1D *h2 = (TH1D*)f2->Get("hDeltaKETPCVsCalo");

//--- Run I Histogram ---|
TH1D *h1 = (TH1D*)f1->Get("hEnergyLossMap");
//--- Run II Histogram ---|
TH1D *h2 = (TH1D*)f2->Get("hEnergyLossMap");

//--- Run I Histogram ---|
TH1D *h1 = (TH1D*)f1->Get("hDeltaKETPCVsFlat");
//--- Run II Histogram ---|
TH1D *h2 = (TH1D*)f2->Get("hDeltaKETPCVsFlat");

//--- Run I Histogram ---|
TH1D *h1 = (TH1D*)f1->Get("hDeltaKEFlatVsCalo");
//--- Run II Histogram ---|
TH1D *h2 = (TH1D*)f2->Get("hDeltaKEFlatVsCalo");

//--- Run I Histogram ---|
TH1D *h1 = (TH1D*)f1->Get("hDeltaKEFlatVsLength");
//--- Run II Histogram ---|
TH1D *h2 = (TH1D*)f2->Get("hDeltaKEFlatVsLength");

//##############################################|




//#################################|
//### Formatting the Histograms ###|
//#################################|

//--- Run I Histogram ---|
h1->SetLineColor(kBlack);
h1->GetXaxis()->SetTitle("");
h1->GetXaxis()->CenterTitle();
h1->GetYaxis()->SetTitle("");
h1->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2->SetLineColor(kBlack);
h2->GetXaxis()->SetTitle("");
h2->GetXaxis()->CenterTitle();
h2->GetYaxis()->SetTitle("");
h2->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1->SetLineColor(kBlack);
h1->GetXaxis()->SetTitle("");
h1->GetXaxis()->CenterTitle();
h1->GetYaxis()->SetTitle("");
h1->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2->SetLineColor(kBlack);
h2->GetXaxis()->SetTitle("");
h2->GetXaxis()->CenterTitle();
h2->GetYaxis()->SetTitle("");
h2->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1->SetLineColor(kBlack);
h1->GetXaxis()->SetTitle("");
h1->GetXaxis()->CenterTitle();
h1->GetYaxis()->SetTitle("");
h1->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2->SetLineColor(kBlack);
h2->GetXaxis()->SetTitle("");
h2->GetXaxis()->CenterTitle();
h2->GetYaxis()->SetTitle("");
h2->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1->SetLineColor(kBlack);
h1->GetXaxis()->SetTitle("");
h1->GetXaxis()->CenterTitle();
h1->GetYaxis()->SetTitle("");
h1->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2->SetLineColor(kBlack);
h2->GetXaxis()->SetTitle("");
h2->GetXaxis()->CenterTitle();
h2->GetYaxis()->SetTitle("");
h2->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1->SetLineColor(kBlack);
h1->GetXaxis()->SetTitle("");
h1->GetXaxis()->CenterTitle();
h1->GetYaxis()->SetTitle("");
h1->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2->SetLineColor(kBlack);
h2->GetXaxis()->SetTitle("");
h2->GetXaxis()->CenterTitle();
h2->GetYaxis()->SetTitle("");
h2->GetYaxis()->CenterTitle();


//--- Run I Histogram ---|
h1->SetLineColor(kBlack);
h1->GetXaxis()->SetTitle("");
h1->GetXaxis()->CenterTitle();
h1->GetYaxis()->SetTitle("");
h1->GetYaxis()->CenterTitle();
//--- Run II Histogram ---|
h2->SetLineColor(kBlack);
h2->GetXaxis()->SetTitle("");
h2->GetXaxis()->CenterTitle();
h2->GetYaxis()->SetTitle("");
h2->GetYaxis()->CenterTitle();

//#################################|




//##############################|
//### Drawing the Histograms ###|
//##############################|



//##############################|

}
