#include "WordCounter.hpp"
#include "Word.hpp"

using namespace std;

WordCounter::WordCounter(int num_words) {
	this->words = new Word[num_words];
}

void WordCounter::addWord(string w){
	if(this->size == 0){
		this->words[0].word = w;
		this->words[0].incrementFreq();
		this->size++;
	} else {
		bool foundEqual = false;
		for(int i = 0; i < this->size; i++){
			if(w == this->words[i].word){
				this->words[i].incrementFreq();
				foundEqual = true;
				break;
			}	
		}
		if(!foundEqual){
			this->words[this->size].word = w;
			this->words[this->size].incrementFreq();
			this->size++;
		}
	}

}

void WordCounter::sortWords() const{
	Word aux;
	for(int i = 0; i < this->size; i++){
		for (int j = i + 1; j < this->size; j++){
			if(this->words[i].word.compare(this->words[j].word) > 0){
				aux = this->words[i];
				this->words[i] = this->words[j];
				this->words[j] = aux;
			}

		}
	}
}

void WordCounter::print() const {
	this->sortWords();

	for(int i = 0; i < this->size; i++){
		cout << this->words[i].word << " " << this->words[i].count << endl;
	} 
}

WordCounter::~WordCounter(){
	delete this->words;
}