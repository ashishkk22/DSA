
template<typename T>
class Vector{
	//data members
	T *arr;
	int cs; //currently we have only 5 element
	int ms;  //maximum size

	//Methods, constructor , destructor

public:
	Vector(int max_size = 1){
		cs = 0;
		ms = max_size;
		arr = new T[ms];
	}
	void push_back(T d){
		//Two cases
		if(cs==ms){
			//create a new array and delete the old one,double the capacity 
			T *oldArr = arr;
			ms = ms*2;
			arr = new T[ms];
			//copy the elements
			for (int i = 0; i < cs ; ++i)
			{
				arr[i] =oldArr[i];
			}
			//delete the old array
			delete [] oldArr;
		}
		arr[cs] = d;
		cs++;
	}

	void pop_back(){
		if(cs >= 0){
			cs--;
		}
	}

	//Front , Back ,At(i) ,[]
	T front(){
		return arr[0];
	}

	T back(){
		return arr[cs-1];
	}

	T at(int i){
		return arr[i];
	}

	int size(){
		return cs;
	}

	int capacity(){
		return ms;
	}

	T operator[](int i){  //operator overloading 
		return arr[i];
	}
	

};