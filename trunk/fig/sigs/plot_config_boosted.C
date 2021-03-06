{
//=========Macro generated from canvas: c_0/c_0
//=========  (Sun Jun 21 13:53:54 2015) by ROOT version5.34/18
   TCanvas *c_0 = new TCanvas("c_0", "c_0",0,0,800,800);
   gStyle->SetOptStat(0);
   c_0->SetHighLightColor(2);
   c_0->Range(0,0,1,1);
   c_0->SetFillColor(0);
   c_0->SetBorderMode(0);
   c_0->SetBorderSize(2);
   c_0->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p1
   TPad *p1 = new TPad("p1", "p1",0,0.28,1,1);
   p1->Draw();
   p1->cd();
   p1->Range(156.25,-2.747523,1093.75,2.107768);
   p1->SetFillColor(0);
   p1->SetBorderMode(0);
   p1->SetBorderSize(2);
   p1->SetLogy();
   p1->SetBottomMargin(0.01);
   p1->SetFrameBorderMode(0);
   p1->SetFrameBorderMode(0);
   Double_t xAxis1[7] = {250, 300, 350, 400, 450, 500, 1000}; 
   
   TH1F *signal_data = new TH1F("signal_data","",6, xAxis1);
   signal_data->SetBinContent(1,21.46);
   signal_data->SetBinContent(2,9.06);
   signal_data->SetBinContent(3,3.2);
   signal_data->SetBinContent(4,1.62);
   signal_data->SetBinContent(5,0.6);
   signal_data->SetBinContent(6,0.078);
   signal_data->SetBinError(1,0.6551336);
   signal_data->SetBinError(2,0.4256759);
   signal_data->SetBinError(3,0.2529822);
   signal_data->SetBinError(4,0.18);
   signal_data->SetBinError(5,0.1095445);
   signal_data->SetBinError(6,0.01249);
   signal_data->SetMinimum(0.002);
   signal_data->SetEntries(1842);
   signal_data->SetMarkerStyle(20);
   signal_data->SetMarkerSize(0.9);
   signal_data->GetXaxis()->SetLabelFont(42);
   signal_data->GetXaxis()->SetLabelSize(0);
   signal_data->GetXaxis()->SetTitleSize(0.035);
   signal_data->GetXaxis()->SetTitleFont(42);
   signal_data->GetYaxis()->SetTitle("Events/GeV");
   signal_data->GetYaxis()->SetLabelFont(42);
   signal_data->GetYaxis()->SetLabelSize(0.035);
   signal_data->GetYaxis()->SetTitleSize(0.035);
   signal_data->GetYaxis()->SetTitleFont(42);
   signal_data->GetZaxis()->SetLabelFont(42);
   signal_data->GetZaxis()->SetLabelSize(0.035);
   signal_data->GetZaxis()->SetTitleSize(0.035);
   signal_data->GetZaxis()->SetTitleFont(42);
   signal_data->Draw("");
   
   THStack *bkg = new THStack();
   bkg->SetName("bkg");
   bkg->SetTitle("");
   Double_t xAxis2[7] = {250, 300, 350, 400, 450, 500, 1000}; 
   
   TH1F *bkg_stack_1 = new TH1F("bkg_stack_1","",6, xAxis2);
   bkg_stack_1->SetMinimum(1.010962e-17);
   bkg_stack_1->SetMaximum(96.42013);
   bkg_stack_1->SetDirectory(0);
   bkg_stack_1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   bkg_stack_1->SetLineColor(ci);
   bkg_stack_1->GetXaxis()->SetLabelFont(42);
   bkg_stack_1->GetXaxis()->SetLabelSize(0.035);
   bkg_stack_1->GetXaxis()->SetTitleSize(0.035);
   bkg_stack_1->GetXaxis()->SetTitleFont(42);
   bkg_stack_1->GetYaxis()->SetLabelFont(42);
   bkg_stack_1->GetYaxis()->SetLabelSize(0.035);
   bkg_stack_1->GetYaxis()->SetTitleSize(0.035);
   bkg_stack_1->GetYaxis()->SetTitleFont(42);
   bkg_stack_1->GetZaxis()->SetLabelFont(42);
   bkg_stack_1->GetZaxis()->SetLabelSize(0.035);
   bkg_stack_1->GetZaxis()->SetTitleSize(0.035);
   bkg_stack_1->GetZaxis()->SetTitleFont(42);
   bkg->SetHistogram(bkg_stack_1);
   
   Double_t xAxis3[7] = {250, 300, 350, 400, 450, 500, 1000}; 
   
   TH1F *signal_data = new TH1F("signal_data","",6, xAxis3);
   signal_data->SetBinContent(1,0.05049904);
   signal_data->SetBinContent(2,0.01370635);
   signal_data->SetBinContent(3,0.003057522);
   signal_data->SetBinContent(4,3.854704e-06);
   signal_data->SetBinContent(5,6.7993e-11);
   signal_data->SetBinContent(6,7.262319e-05);
   signal_data->SetBinContent(7,6.7993e-12);
   signal_data->SetEntries(1861);

   ci = TColor::GetColor("#006600");
   signal_data->SetFillColor(ci);
   signal_data->SetLineWidth(2);
   signal_data->GetXaxis()->SetLabelFont(42);
   signal_data->GetXaxis()->SetLabelSize(0);
   signal_data->GetXaxis()->SetTitleSize(0.035);
   signal_data->GetXaxis()->SetTitleFont(42);
   signal_data->GetYaxis()->SetTitle("Events/GeV");
   signal_data->GetYaxis()->SetLabelFont(42);
   signal_data->GetYaxis()->SetLabelSize(0.035);
   signal_data->GetYaxis()->SetTitleSize(0.035);
   signal_data->GetYaxis()->SetTitleFont(42);
   signal_data->GetZaxis()->SetLabelFont(42);
   signal_data->GetZaxis()->SetLabelSize(0.035);
   signal_data->GetZaxis()->SetTitleSize(0.035);
   signal_data->GetZaxis()->SetTitleFont(42);
   bkg->Add(signal_data,"");
   Double_t xAxis4[7] = {250, 300, 350, 400, 450, 500, 1000}; 
   
   TH1F *signal_data = new TH1F("signal_data","",6, xAxis4);
   signal_data->SetBinContent(1,1.722833e-15);
   signal_data->SetBinContent(2,1.722833e-06);
   signal_data->SetBinContent(3,1.722833e-15);
   signal_data->SetBinContent(4,1.722833e-15);
   signal_data->SetBinContent(5,1.722833e-15);
   signal_data->SetBinContent(6,1.722832e-16);
   signal_data->SetBinContent(7,1.722832e-16);
   signal_data->SetBinError(1,6.363996e-16);
   signal_data->SetBinError(2,6.363997e-07);
   signal_data->SetBinError(3,6.363996e-16);
   signal_data->SetBinError(4,6.363996e-16);
   signal_data->SetBinError(5,6.363996e-16);
   signal_data->SetBinError(6,6.363996e-17);
   signal_data->SetBinError(7,6.363996e-17);
   signal_data->SetEntries(1861);

   ci = TColor::GetColor("#990000");
   signal_data->SetFillColor(ci);
   signal_data->SetLineWidth(2);
   signal_data->GetXaxis()->SetLabelFont(42);
   signal_data->GetXaxis()->SetLabelSize(0);
   signal_data->GetXaxis()->SetTitleSize(0.035);
   signal_data->GetXaxis()->SetTitleFont(42);
   signal_data->GetYaxis()->SetTitle("Events/GeV");
   signal_data->GetYaxis()->SetLabelFont(42);
   signal_data->GetYaxis()->SetLabelSize(0.035);
   signal_data->GetYaxis()->SetTitleSize(0.035);
   signal_data->GetYaxis()->SetTitleFont(42);
   signal_data->GetZaxis()->SetLabelFont(42);
   signal_data->GetZaxis()->SetLabelSize(0.035);
   signal_data->GetZaxis()->SetTitleSize(0.035);
   signal_data->GetZaxis()->SetTitleFont(42);
   bkg->Add(signal_data,"");
   Double_t xAxis5[7] = {250, 300, 350, 400, 450, 500, 1000}; 
   
   TH1F *signal_data = new TH1F("signal_data","",6, xAxis5);
   signal_data->SetBinContent(1,2.225488);
   signal_data->SetBinContent(2,1.005201);
   signal_data->SetBinContent(3,0.4718549);
   signal_data->SetBinContent(4,0.2398067);
   signal_data->SetBinContent(5,0.1589045);
   signal_data->SetBinContent(6,0.01683151);
   signal_data->SetBinContent(7,4.269571e-10);
   signal_data->SetBinError(1,0.2606122);
   signal_data->SetBinError(2,0.1238908);
   signal_data->SetBinError(3,0.06348248);
   signal_data->SetBinError(4,0.03232094);
   signal_data->SetBinError(5,0.01917455);
   signal_data->SetBinError(6,0.001976365);
   signal_data->SetBinError(7,5.037141e-11);
   signal_data->SetEntries(1861);

   ci = TColor::GetColor("#cccccc");
   signal_data->SetFillColor(ci);
   signal_data->SetLineWidth(2);
   signal_data->GetXaxis()->SetLabelFont(42);
   signal_data->GetXaxis()->SetLabelSize(0);
   signal_data->GetXaxis()->SetTitleSize(0.035);
   signal_data->GetXaxis()->SetTitleFont(42);
   signal_data->GetYaxis()->SetTitle("Events/GeV");
   signal_data->GetYaxis()->SetLabelFont(42);
   signal_data->GetYaxis()->SetLabelSize(0.035);
   signal_data->GetYaxis()->SetTitleSize(0.035);
   signal_data->GetYaxis()->SetTitleFont(42);
   signal_data->GetZaxis()->SetLabelFont(42);
   signal_data->GetZaxis()->SetLabelSize(0.035);
   signal_data->GetZaxis()->SetTitleSize(0.035);
   signal_data->GetZaxis()->SetTitleFont(42);
   bkg->Add(signal_data,"");
   Double_t xAxis6[7] = {250, 300, 350, 400, 450, 500, 1000}; 
   
   TH1F *signal_data = new TH1F("signal_data","",6, xAxis6);
   signal_data->SetBinContent(1,0.6958356);
   signal_data->SetBinContent(2,0.2492813);
   signal_data->SetBinContent(3,0.107625);
   signal_data->SetBinContent(4,0.03151168);
   signal_data->SetBinContent(5,0.01032289);
   signal_data->SetBinContent(6,0.0003185673);
   signal_data->SetBinContent(7,1.097762e-10);
   signal_data->SetBinError(1,0.07049835);
   signal_data->SetBinError(2,0.02547301);
   signal_data->SetBinError(3,0.01977808);
   signal_data->SetBinError(4,0.01503855);
   signal_data->SetBinError(5,0.002536654);
   signal_data->SetBinError(6,3.166894e-05);
   signal_data->SetBinError(7,1.092256e-11);
   signal_data->SetEntries(1861);

   ci = TColor::GetColor("#cc0000");
   signal_data->SetFillColor(ci);
   signal_data->SetLineWidth(2);
   signal_data->GetXaxis()->SetLabelFont(42);
   signal_data->GetXaxis()->SetLabelSize(0);
   signal_data->GetXaxis()->SetTitleSize(0.035);
   signal_data->GetXaxis()->SetTitleFont(42);
   signal_data->GetYaxis()->SetTitle("Events/GeV");
   signal_data->GetYaxis()->SetLabelFont(42);
   signal_data->GetYaxis()->SetLabelSize(0.035);
   signal_data->GetYaxis()->SetTitleSize(0.035);
   signal_data->GetYaxis()->SetTitleFont(42);
   signal_data->GetZaxis()->SetLabelFont(42);
   signal_data->GetZaxis()->SetLabelSize(0.035);
   signal_data->GetZaxis()->SetTitleSize(0.035);
   signal_data->GetZaxis()->SetTitleFont(42);
   bkg->Add(signal_data,"");
   Double_t xAxis7[7] = {250, 300, 350, 400, 450, 500, 1000}; 
   
   TH1F *signal_data = new TH1F("signal_data","",6, xAxis7);
   signal_data->SetBinContent(1,5.300875);
   signal_data->SetBinContent(2,2.264122);
   signal_data->SetBinContent(3,0.6622228);
   signal_data->SetBinContent(4,0.2047365);
   signal_data->SetBinContent(5,0.07185319);
   signal_data->SetBinContent(6,0.009282961);
   signal_data->SetBinContent(7,8.59664e-10);
   signal_data->SetBinError(1,0.5106654);
   signal_data->SetBinError(2,0.2695043);
   signal_data->SetBinError(3,0.1493224);
   signal_data->SetBinError(4,0.07025212);
   signal_data->SetBinError(5,0.04852519);
   signal_data->SetBinError(6,0.006169532);
   signal_data->SetBinError(7,6.458923e-11);
   signal_data->SetEntries(1861);

   ci = TColor::GetColor("#0066ff");
   signal_data->SetFillColor(ci);
   signal_data->SetLineWidth(2);
   signal_data->GetXaxis()->SetLabelFont(42);
   signal_data->GetXaxis()->SetLabelSize(0);
   signal_data->GetXaxis()->SetTitleSize(0.035);
   signal_data->GetXaxis()->SetTitleFont(42);
   signal_data->GetYaxis()->SetTitle("Events/GeV");
   signal_data->GetYaxis()->SetLabelFont(42);
   signal_data->GetYaxis()->SetLabelSize(0.035);
   signal_data->GetYaxis()->SetTitleSize(0.035);
   signal_data->GetYaxis()->SetTitleFont(42);
   signal_data->GetZaxis()->SetLabelFont(42);
   signal_data->GetZaxis()->SetLabelSize(0.035);
   signal_data->GetZaxis()->SetTitleSize(0.035);
   signal_data->GetZaxis()->SetTitleFont(42);
   bkg->Add(signal_data,"");
   Double_t xAxis8[7] = {250, 300, 350, 400, 450, 500, 1000}; 
   
   TH1F *signal_data = new TH1F("signal_data","",6, xAxis8);
   signal_data->SetBinContent(1,13.30385);
   signal_data->SetBinContent(2,5.424379);
   signal_data->SetBinContent(3,2.13808);
   signal_data->SetBinContent(4,1.035192);
   signal_data->SetBinContent(5,0.4882023);
   signal_data->SetBinContent(6,0.06353043);
   signal_data->SetBinContent(7,2.3025e-09);
   signal_data->SetBinError(1,0.6045917);
   signal_data->SetBinError(2,0.3224587);
   signal_data->SetBinError(3,0.2063574);
   signal_data->SetBinError(4,0.1151468);
   signal_data->SetBinError(5,0.08517308);
   signal_data->SetBinError(6,0.009982384);
   signal_data->SetBinError(7,7.91448e-11);
   signal_data->SetEntries(1861);

   ci = TColor::GetColor("#9999ff");
   signal_data->SetFillColor(ci);
   signal_data->SetLineWidth(2);
   signal_data->GetXaxis()->SetLabelFont(42);
   signal_data->GetXaxis()->SetLabelSize(0);
   signal_data->GetXaxis()->SetTitleSize(0.035);
   signal_data->GetXaxis()->SetTitleFont(42);
   signal_data->GetYaxis()->SetTitle("Events/GeV");
   signal_data->GetYaxis()->SetLabelFont(42);
   signal_data->GetYaxis()->SetLabelSize(0.035);
   signal_data->GetYaxis()->SetTitleSize(0.035);
   signal_data->GetYaxis()->SetTitleFont(42);
   signal_data->GetZaxis()->SetLabelFont(42);
   signal_data->GetZaxis()->SetLabelSize(0.035);
   signal_data->GetZaxis()->SetTitleSize(0.035);
   signal_data->GetZaxis()->SetTitleFont(42);
   bkg->Add(signal_data,"");
   bkg->Draw("histfsame");
   Double_t xAxis9[7] = {250, 300, 350, 400, 450, 500, 1000}; 
   
   TH1F *signal_data = new TH1F("signal_data","",6, xAxis9);
   signal_data->SetBinContent(1,0.4469539);
   signal_data->SetBinContent(2,0.1809228);
   signal_data->SetBinContent(3,0.117606);
   signal_data->SetBinContent(4,0.04838726);
   signal_data->SetBinContent(5,0.07361957);
   signal_data->SetBinContent(6,0.005752807);
   signal_data->SetBinError(1,0.06221294);
   signal_data->SetBinError(2,0.0380819);
   signal_data->SetBinError(3,0.03056381);
   signal_data->SetBinError(4,0.01926847);
   signal_data->SetBinError(5,0.02438038);
   signal_data->SetBinError(6,0.002174528);
   signal_data->SetEntries(1848);

   ci = TColor::GetColor("#ffcc00");
   signal_data->SetLineColor(ci);
   signal_data->SetLineWidth(3);
   signal_data->GetXaxis()->SetLabelFont(42);
   signal_data->GetXaxis()->SetLabelSize(0);
   signal_data->GetXaxis()->SetTitleSize(0.035);
   signal_data->GetXaxis()->SetTitleFont(42);
   signal_data->GetYaxis()->SetTitle("Events/GeV");
   signal_data->GetYaxis()->SetLabelFont(42);
   signal_data->GetYaxis()->SetLabelSize(0.035);
   signal_data->GetYaxis()->SetTitleSize(0.035);
   signal_data->GetYaxis()->SetTitleFont(42);
   signal_data->GetZaxis()->SetLabelFont(42);
   signal_data->GetZaxis()->SetLabelSize(0.035);
   signal_data->GetZaxis()->SetTitleSize(0.035);
   signal_data->GetZaxis()->SetTitleFont(42);
   signal_data->Draw("samehist");
   Double_t xAxis10[7] = {250, 300, 350, 400, 450, 500, 1000}; 
   
   TH1F *signal_data = new TH1F("signal_data","",6, xAxis10);
   signal_data->SetBinContent(1,0.8654121);
   signal_data->SetBinContent(2,0.4731509);
   signal_data->SetBinContent(3,0.2608894);
   signal_data->SetBinContent(4,0.1309473);
   signal_data->SetBinContent(5,0.08182615);
   signal_data->SetBinContent(6,0.01136395);
   signal_data->SetBinError(1,0.01799852);
   signal_data->SetBinError(2,0.01323027);
   signal_data->SetBinError(3,0.009762339);
   signal_data->SetBinError(4,0.0069043);
   signal_data->SetBinError(5,0.005506193);
   signal_data->SetBinError(6,0.0006470379);
   signal_data->SetEntries(1848);

   ci = TColor::GetColor("#66ffff");
   signal_data->SetLineColor(ci);
   signal_data->SetLineWidth(3);
   signal_data->GetXaxis()->SetLabelFont(42);
   signal_data->GetXaxis()->SetLabelSize(0);
   signal_data->GetXaxis()->SetTitleSize(0.035);
   signal_data->GetXaxis()->SetTitleFont(42);
   signal_data->GetYaxis()->SetTitle("Events/GeV");
   signal_data->GetYaxis()->SetLabelFont(42);
   signal_data->GetYaxis()->SetLabelSize(0.035);
   signal_data->GetYaxis()->SetTitleSize(0.035);
   signal_data->GetYaxis()->SetTitleFont(42);
   signal_data->GetZaxis()->SetLabelFont(42);
   signal_data->GetZaxis()->SetLabelSize(0.035);
   signal_data->GetZaxis()->SetTitleSize(0.035);
   signal_data->GetZaxis()->SetTitleFont(42);
   signal_data->Draw("samehist");
   Double_t xAxis11[7] = {250, 300, 350, 400, 450, 500, 1000}; 
   
   TH1F *signal_data = new TH1F("signal_data","",6, xAxis11);
   signal_data->SetBinContent(1,21.57655);
   signal_data->SetBinContent(2,8.956692);
   signal_data->SetBinContent(3,3.382841);
   signal_data->SetBinContent(4,1.511251);
   signal_data->SetBinContent(5,0.7292829);
   signal_data->SetBinContent(6,0.09003609);
   signal_data->SetBinContent(7,3.705697e-09);
   signal_data->SetBinError(1,0.8361812);
   signal_data->SetBinError(2,0.4388735);
   signal_data->SetBinError(3,0.2632523);
   signal_data->SetBinError(4,0.1395168);
   signal_data->SetBinError(5,0.09991619);
   signal_data->SetBinError(6,0.01190034);
   signal_data->SetBinError(7,1.144214e-10);
   signal_data->SetEntries(1861);
   signal_data->SetFillColor(1);
   signal_data->SetFillStyle(3144);

   ci = TColor::GetColor("#000099");
   signal_data->SetLineColor(ci);
   signal_data->SetMarkerSize(0);
   signal_data->GetXaxis()->SetLabelFont(42);
   signal_data->GetXaxis()->SetLabelSize(0);
   signal_data->GetXaxis()->SetTitleSize(0.035);
   signal_data->GetXaxis()->SetTitleFont(42);
   signal_data->GetYaxis()->SetTitle("Events/GeV");
   signal_data->GetYaxis()->SetLabelFont(42);
   signal_data->GetYaxis()->SetLabelSize(0.035);
   signal_data->GetYaxis()->SetTitleSize(0.035);
   signal_data->GetYaxis()->SetTitleFont(42);
   signal_data->GetZaxis()->SetLabelFont(42);
   signal_data->GetZaxis()->SetLabelSize(0.035);
   signal_data->GetZaxis()->SetTitleSize(0.035);
   signal_data->GetZaxis()->SetTitleFont(42);
   signal_data->Draw("E2same");
   Double_t xAxis12[7] = {250, 300, 350, 400, 450, 500, 1000}; 
   
   TH1F *signal_data = new TH1F("signal_data","",6, xAxis12);
   signal_data->SetBinContent(1,21.46);
   signal_data->SetBinContent(2,9.06);
   signal_data->SetBinContent(3,3.2);
   signal_data->SetBinContent(4,1.62);
   signal_data->SetBinContent(5,0.6);
   signal_data->SetBinContent(6,0.078);
   signal_data->SetBinError(1,0.6551336);
   signal_data->SetBinError(2,0.4256759);
   signal_data->SetBinError(3,0.2529822);
   signal_data->SetBinError(4,0.18);
   signal_data->SetBinError(5,0.1095445);
   signal_data->SetBinError(6,0.01249);
   signal_data->SetMinimum(0.002);
   signal_data->SetEntries(1842);
   signal_data->SetMarkerStyle(20);
   signal_data->SetMarkerSize(0.9);
   signal_data->GetXaxis()->SetLabelFont(42);
   signal_data->GetXaxis()->SetLabelSize(0);
   signal_data->GetXaxis()->SetTitleSize(0.035);
   signal_data->GetXaxis()->SetTitleFont(42);
   signal_data->GetYaxis()->SetTitle("Events/GeV");
   signal_data->GetYaxis()->SetLabelFont(42);
   signal_data->GetYaxis()->SetLabelSize(0.035);
   signal_data->GetYaxis()->SetTitleSize(0.035);
   signal_data->GetYaxis()->SetTitleFont(42);
   signal_data->GetZaxis()->SetLabelFont(42);
   signal_data->GetZaxis()->SetLabelSize(0.035);
   signal_data->GetZaxis()->SetTitleSize(0.035);
   signal_data->GetZaxis()->SetTitleFont(42);
   signal_data->Draw("same");
   
   TLegend *leg = new TLegend(0.62,0.48,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("signal_data","Data","PEL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.9);
   entry->SetTextFont(42);
   entry=leg->AddEntry("signal_data","Z(#rightarrow #nu#nu)+jets","F");

   ci = TColor::GetColor("#9999ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("signal_data","W(#rightarrow l#nu)+jets","F");

   ci = TColor::GetColor("#0066ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("signal_data","top","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("signal_data","Dibosons","F");

   ci = TColor::GetColor("#cccccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("signal_data","QCD","F");

   ci = TColor::GetColor("#990000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("signal_data","Z(#rightarrow ll)+jets","F");

   ci = TColor::GetColor("#006600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("signal_data","VBF+gg H #rightarrow inv, m_{H}=125 GeV","L");

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("signal_data","VH #rightarrow inv, m_{H}=125 GeV","L");

   ci = TColor::GetColor("#66ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   Double_t xAxis13[7] = {250, 300, 350, 400, 450, 500, 1000}; 
   
   TH1F *signal_data__1 = new TH1F("signal_data__1","",6, xAxis13);
   signal_data__1->SetBinContent(1,21.46);
   signal_data__1->SetBinContent(2,9.06);
   signal_data__1->SetBinContent(3,3.2);
   signal_data__1->SetBinContent(4,1.62);
   signal_data__1->SetBinContent(5,0.6);
   signal_data__1->SetBinContent(6,0.078);
   signal_data__1->SetBinError(1,0.6551336);
   signal_data__1->SetBinError(2,0.4256759);
   signal_data__1->SetBinError(3,0.2529822);
   signal_data__1->SetBinError(4,0.18);
   signal_data__1->SetBinError(5,0.1095445);
   signal_data__1->SetBinError(6,0.01249);
   signal_data__1->SetMinimum(0.002);
   signal_data__1->SetEntries(1842);
   signal_data__1->SetDirectory(0);
   signal_data__1->SetMarkerStyle(20);
   signal_data__1->SetMarkerSize(0.9);
   signal_data__1->GetXaxis()->SetLabelFont(42);
   signal_data__1->GetXaxis()->SetLabelSize(0);
   signal_data__1->GetXaxis()->SetTitleSize(0.035);
   signal_data__1->GetXaxis()->SetTitleFont(42);
   signal_data__1->GetYaxis()->SetTitle("Events/GeV");
   signal_data__1->GetYaxis()->SetLabelFont(42);
   signal_data__1->GetYaxis()->SetLabelSize(0.035);
   signal_data__1->GetYaxis()->SetTitleSize(0.035);
   signal_data__1->GetYaxis()->SetTitleFont(42);
   signal_data__1->GetZaxis()->SetLabelFont(42);
   signal_data__1->GetZaxis()->SetLabelSize(0.035);
   signal_data__1->GetZaxis()->SetTitleSize(0.035);
   signal_data__1->GetZaxis()->SetTitleFont(42);
   signal_data__1->Draw("sameaxis");
   TLatex *   tex = new TLatex(0.1,0.92,"#bf{CMS} #it{Preliminary}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.76,0.92,"boosted");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   p1->Modified();
   c_0->cd();
  
// ------------>Primitives in pad: p2
   p2 = new TPad("p2", "p2",0,0.068,1,0.28);
   p2->Draw();
   p2->cd();
   p2->Range(156.25,0.03045454,1093.75,1.825909);
   p2->SetFillColor(0);
   p2->SetBorderMode(0);
   p2->SetBorderSize(2);
   p2->SetTopMargin(0.02);
   p2->SetFrameBorderMode(0);
   p2->SetFrameBorderMode(0);
   Double_t xAxis14[7] = {250, 300, 350, 400, 450, 500, 1000}; 
   
   TH1F *signal_data = new TH1F("signal_data","",6, xAxis14);
   signal_data->SetBinContent(1,0.9945984);
   signal_data->SetBinContent(2,1.011534);
   signal_data->SetBinContent(3,0.9459506);
   signal_data->SetBinContent(4,1.07196);
   signal_data->SetBinContent(5,0.8227261);
   signal_data->SetBinContent(6,0.8663193);
   signal_data->SetBinError(1,0.03036323);
   signal_data->SetBinError(2,0.04752602);
   signal_data->SetBinError(3,0.07478396);
   signal_data->SetBinError(4,0.1191066);
   signal_data->SetBinError(5,0.1502085);
   signal_data->SetBinError(6,0.1387221);
   signal_data->SetMinimum(0.21);
   signal_data->SetMaximum(1.79);
   signal_data->SetEntries(503.9577);
   signal_data->SetMarkerStyle(20);
   signal_data->SetMarkerSize(0.9);
   signal_data->GetXaxis()->SetLabelFont(42);
   signal_data->GetXaxis()->SetLabelSize(0.12);
   signal_data->GetXaxis()->SetTitleSize(0.085);
   signal_data->GetXaxis()->SetTitleFont(42);
   signal_data->GetYaxis()->SetTitle("Data/Bkg");
   signal_data->GetYaxis()->SetNdivisions(5);
   signal_data->GetYaxis()->SetLabelFont(42);
   signal_data->GetYaxis()->SetLabelSize(0.1);
   signal_data->GetYaxis()->SetTitleSize(0.12);
   signal_data->GetYaxis()->SetTitleFont(42);
   signal_data->GetZaxis()->SetLabelFont(42);
   signal_data->GetZaxis()->SetLabelSize(0.035);
   signal_data->GetZaxis()->SetTitleSize(0.035);
   signal_data->GetZaxis()->SetTitleFont(42);
   signal_data->Draw("");
   Double_t xAxis15[7] = {250, 300, 350, 400, 450, 500, 1000}; 
   
   TH1F *signal_data = new TH1F("signal_data","",6, xAxis15);
   signal_data->SetBinContent(1,1);
   signal_data->SetBinContent(2,1);
   signal_data->SetBinContent(3,1);
   signal_data->SetBinContent(4,1);
   signal_data->SetBinContent(5,1);
   signal_data->SetBinContent(6,1);
   signal_data->SetBinContent(7,1);
   signal_data->SetBinError(1,0.03875417);
   signal_data->SetBinError(2,0.04899951);
   signal_data->SetBinError(3,0.07781989);
   signal_data->SetBinError(4,0.09231878);
   signal_data->SetBinError(5,0.1370061);
   signal_data->SetBinError(6,0.132173);
   signal_data->SetBinError(7,0.04366688);
   signal_data->SetEntries(657.8718);

   ci = TColor::GetColor("#cccccc");
   signal_data->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   signal_data->SetLineColor(ci);
   signal_data->SetMarkerSize(0);
   signal_data->GetXaxis()->SetLabelFont(42);
   signal_data->GetXaxis()->SetLabelSize(0);
   signal_data->GetXaxis()->SetTitleSize(0.035);
   signal_data->GetXaxis()->SetTitleFont(42);
   signal_data->GetYaxis()->SetTitle("Events/GeV");
   signal_data->GetYaxis()->SetLabelFont(42);
   signal_data->GetYaxis()->SetLabelSize(0.035);
   signal_data->GetYaxis()->SetTitleSize(0.035);
   signal_data->GetYaxis()->SetTitleFont(42);
   signal_data->GetZaxis()->SetLabelFont(42);
   signal_data->GetZaxis()->SetLabelSize(0.035);
   signal_data->GetZaxis()->SetTitleSize(0.035);
   signal_data->GetZaxis()->SetTitleFont(42);
   signal_data->Draw("sameE2");
   Double_t xAxis16[7] = {250, 300, 350, 400, 450, 500, 1000}; 
   
   TH1F *signal_data = new TH1F("signal_data","",6, xAxis16);
   signal_data->SetBinContent(1,0.9945984);
   signal_data->SetBinContent(2,1.011534);
   signal_data->SetBinContent(3,0.9459506);
   signal_data->SetBinContent(4,1.07196);
   signal_data->SetBinContent(5,0.8227261);
   signal_data->SetBinContent(6,0.8663193);
   signal_data->SetBinError(1,0.03036323);
   signal_data->SetBinError(2,0.04752602);
   signal_data->SetBinError(3,0.07478396);
   signal_data->SetBinError(4,0.1191066);
   signal_data->SetBinError(5,0.1502085);
   signal_data->SetBinError(6,0.1387221);
   signal_data->SetMinimum(0.21);
   signal_data->SetMaximum(1.79);
   signal_data->SetEntries(503.9577);
   signal_data->SetMarkerStyle(20);
   signal_data->SetMarkerSize(0.9);
   signal_data->GetXaxis()->SetLabelFont(42);
   signal_data->GetXaxis()->SetLabelSize(0.12);
   signal_data->GetXaxis()->SetTitleSize(0.085);
   signal_data->GetXaxis()->SetTitleFont(42);
   signal_data->GetYaxis()->SetTitle("Data/Bkg");
   signal_data->GetYaxis()->SetNdivisions(5);
   signal_data->GetYaxis()->SetLabelFont(42);
   signal_data->GetYaxis()->SetLabelSize(0.1);
   signal_data->GetYaxis()->SetTitleSize(0.12);
   signal_data->GetYaxis()->SetTitleFont(42);
   signal_data->GetZaxis()->SetLabelFont(42);
   signal_data->GetZaxis()->SetLabelSize(0.035);
   signal_data->GetZaxis()->SetTitleSize(0.035);
   signal_data->GetZaxis()->SetTitleFont(42);
   signal_data->Draw("same");
   TLine *line = new TLine(250,1,1000,1);
   line->SetLineColor(2);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis17[7] = {250, 300, 350, 400, 450, 500, 1000}; 
   
   TH1F *signal_data = new TH1F("signal_data","",6, xAxis17);
   signal_data->SetBinContent(1,0.9945984);
   signal_data->SetBinContent(2,1.011534);
   signal_data->SetBinContent(3,0.9459506);
   signal_data->SetBinContent(4,1.07196);
   signal_data->SetBinContent(5,0.8227261);
   signal_data->SetBinContent(6,0.8663193);
   signal_data->SetBinError(1,0.03036323);
   signal_data->SetBinError(2,0.04752602);
   signal_data->SetBinError(3,0.07478396);
   signal_data->SetBinError(4,0.1191066);
   signal_data->SetBinError(5,0.1502085);
   signal_data->SetBinError(6,0.1387221);
   signal_data->SetMinimum(0.21);
   signal_data->SetMaximum(1.79);
   signal_data->SetEntries(503.9577);
   signal_data->SetMarkerStyle(20);
   signal_data->SetMarkerSize(0.9);
   signal_data->GetXaxis()->SetLabelFont(42);
   signal_data->GetXaxis()->SetLabelSize(0.12);
   signal_data->GetXaxis()->SetTitleSize(0.085);
   signal_data->GetXaxis()->SetTitleFont(42);
   signal_data->GetYaxis()->SetTitle("Data/Bkg");
   signal_data->GetYaxis()->SetNdivisions(5);
   signal_data->GetYaxis()->SetLabelFont(42);
   signal_data->GetYaxis()->SetLabelSize(0.1);
   signal_data->GetYaxis()->SetTitleSize(0.12);
   signal_data->GetYaxis()->SetTitleFont(42);
   signal_data->GetZaxis()->SetLabelFont(42);
   signal_data->GetZaxis()->SetLabelSize(0.035);
   signal_data->GetZaxis()->SetTitleSize(0.035);
   signal_data->GetZaxis()->SetTitleFont(42);
   signal_data->Draw("same");
   Double_t xAxis18[7] = {250, 300, 350, 400, 450, 500, 1000}; 
   
   TH1F *signal_data__2 = new TH1F("signal_data__2","",6, xAxis18);
   signal_data__2->SetBinContent(1,0.9945984);
   signal_data__2->SetBinContent(2,1.011534);
   signal_data__2->SetBinContent(3,0.9459506);
   signal_data__2->SetBinContent(4,1.07196);
   signal_data__2->SetBinContent(5,0.8227261);
   signal_data__2->SetBinContent(6,0.8663193);
   signal_data__2->SetBinError(1,0.03036323);
   signal_data__2->SetBinError(2,0.04752602);
   signal_data__2->SetBinError(3,0.07478396);
   signal_data__2->SetBinError(4,0.1191066);
   signal_data__2->SetBinError(5,0.1502085);
   signal_data__2->SetBinError(6,0.1387221);
   signal_data__2->SetMinimum(0.21);
   signal_data__2->SetMaximum(1.79);
   signal_data__2->SetEntries(503.9577);
   signal_data__2->SetDirectory(0);
   signal_data__2->SetMarkerStyle(20);
   signal_data__2->SetMarkerSize(0.9);
   signal_data__2->GetXaxis()->SetLabelFont(42);
   signal_data__2->GetXaxis()->SetLabelSize(0.12);
   signal_data__2->GetXaxis()->SetTitleSize(0.085);
   signal_data__2->GetXaxis()->SetTitleFont(42);
   signal_data__2->GetYaxis()->SetTitle("Data/Bkg");
   signal_data__2->GetYaxis()->SetNdivisions(5);
   signal_data__2->GetYaxis()->SetLabelFont(42);
   signal_data__2->GetYaxis()->SetLabelSize(0.1);
   signal_data__2->GetYaxis()->SetTitleSize(0.12);
   signal_data__2->GetYaxis()->SetTitleFont(42);
   signal_data__2->GetZaxis()->SetLabelFont(42);
   signal_data__2->GetZaxis()->SetLabelSize(0.035);
   signal_data__2->GetZaxis()->SetTitleSize(0.035);
   signal_data__2->GetZaxis()->SetTitleFont(42);
   signal_data__2->Draw("sameaxis");
   p2->Modified();
   c_0->cd();
      tex = new TLatex(0.68,0.02,"mvamet");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   c_0->Modified();
   c_0->cd();
   c_0->SetSelected(c_0);
}
