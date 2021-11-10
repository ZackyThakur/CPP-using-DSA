class car : public Vehicle{
public:
    int gears;
    car(int x, int y) :vehicle(x){
        cout<<"Car Constructor"<<endl;
    }
    ~car(){
        cout<<"Car Destructor"<<endl;
    }
    void print() {
			cout << "NumTyres : " << numTyres << endl;
			cout << "Color : " << color << endl;
			cout << "Num gears : " << numGears << endl;
			//		cout << "Max Speed : " << maxSpeed << endl;
		}

};
