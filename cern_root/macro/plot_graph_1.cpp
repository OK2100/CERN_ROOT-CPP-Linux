

void plot_graph_1(){
	
	// Создаем холст для рисования стандартных размеров
	TCanvas* c = new TCanvas("c","c",800,600);

	// Создаем объект типа TGraph на основании текстового файла
	// и рисуем его на холсте	
	TGraph* gr1 = new TGraph("../data/graph_1_1.txt");
	gr1->Draw("AP");
		
	// Создаем другой TGraph и рисуем егго на том же холсте
	TGraph* gr2 = new TGraph("../data/graph_1_2.txt");	
	gr2->Draw("P,same");
	
// --------------------------------------------------------------
	// Настойка стиля
	// Большая тема ...
	
//	gr1->SetMarkerStyle(kFullCircle);
//	gr1->SetMarkerSize(1);
//	gr2->SetMarkerStyle(kFullSquare);
//	gr2->SetMarkerSize(1);


// --------------------------------------------------------------
	
	// Названием графика и осей управляет тот объект,
	// который был нарисован первым

//	gr1->SetTitle("Simple graphs;X axis title,au;Y axis title, au");
//	gr1->GetXaxis()->SetTitle("Another X axis title");

}
