

void simple_histo(){
	
//	TH1F h = TH1F("h_name","h_title",100,-10,10);
	TH1F *h = new TH1F("h_name","h_title",100,-10,10);
	h->FillRandom("gaus",10000000);
	h->Draw();	

	// 	Две памяти у программы: стэк (stack) и куча (heap)
	//	стэк - быстро доступная память		ограниченный размер 4-8 Mbyte
	//	куча - более длительное обращение	оперативная память 4-8 Gbyte
	//
	//	scope { } - область жизни переменных
	//
	//	{ int home; } вне scope home - не существует, т.е. память под нее освободилась
	//	{ int *address = new int(); } - удаляется только адрес 
	//

//	delete h;
}
