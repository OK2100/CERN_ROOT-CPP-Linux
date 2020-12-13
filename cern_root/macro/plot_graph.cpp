

void plot_graph() {
	
	auto c = new TCanvas("c","c",800,600);
	
	double x[4] = {1., 2., 3., 4.};
	double y[4] = {3e+2, 3.12e+2, 2.7e+2, 2.14e+2};

	auto gr = new TGraph(4,x,y);

	gr->SetMarkerStyle(kFullCircle);
	gr->SetMarkerColor(kRed);
	gr->SetMarkerSize(1);

	gr->Draw("AP");

}
