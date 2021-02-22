#include <stdio.h>		// for c

void hist_2() 
{

	auto c = new TCanvas("c","Canvas",800,600);
	auto h = new TH1F("h","Hist_2",2000,0,2000);                          

//	C style file reading
  	
	FILE* f = fopen("../data/hist_2.txt","r");
	
	if(!f) {
		printf("ERROR! Can't open file\n");
		return;
	}

	int t;
	for(int k=0;fscanf(f,"%X",&t) == 1; k++){
		h->Fill(t);
		printf("%d\t%d\n",k,t);
	}	

	h->Draw();
               
	fclose(f);

}

