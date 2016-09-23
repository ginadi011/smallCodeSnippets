//With 3 pegs
void towerh(int disc,int source, int dest, int middle) {
	if (disc == 1) {
		cout << "moving disc " << disc << " to peg" << dest << endl;
	}
	else {
		towerh(disc - 1, source, middle, dest);
		cout << "moving disc " << disc << " to peg " << dest << endl;
		towerh(disc - 1, middle, dest, source);
	}
}

//With 4 pegs
void tower4peg(int disc, int source, int spare, int spare2, int dest) {
	if(disc == 1){
		cout << "moving disc " << disc << " to peg " << dest << endl;
	}
	else {
		tower4peg(disc - 1, source, dest, spare, spare2);
		tower4peg(disc - 1, source, spare, dest, spare2);
		cout << "moving disc " << disc << " to peg " << dest << endl;
		tower4peg(disc - 1, spare, dest, source, spare2);
		tower4peg(disc - 1, spare2, dest, source, spare);
	}
}
