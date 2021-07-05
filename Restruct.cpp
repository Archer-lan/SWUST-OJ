#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>

using namespace std;

class Picture{
public:
	string name;
//    vector<Picture> getChilds(){}
    Picture(string name){
        this->name=name;
    };
    ~Picture(){
	};
    virtual void Draw()= 0;
};

class Graph:public Picture{
private:
    vector<Picture*>i_pictures;
public:
//	Graph(){
//	}
//	~Graph(){
//	}
    void Add(Picture* graphs){
        i_pictures.push_back(graphs);
    }
    void Remove(Picture* graphs){
        i_pictures.pop_back();
    }
    void Draw(){
    	vector<Picture*>::iterator pic =i_pictures.begin();
        for(; pic != i_pictures.end(); pic++){
            (*pic)->draw();
        }
    }
    vector<Picture*> getChilds(){
        return i_pictures;
    }
};

class Circle:public Picture {
public:
//	Picture(name);
//    Circle(){}
//    ~Circle(){}
    void Draw() {
        cout<<"Ô²"<<endl;
    }
};


class Line:public Picture {

public:
//	Picture(name);
//    Line(){}
//    ~Line(){}
    void Draw() {
        cout<<"Ïß"<<endl;
    }
};


class Rectangle:public Picture {
public:
//	Picture(name);
//    Rectangle(){}
//    ~Rectangle(){}
    void Draw() {
        cout<<"·½"<<endl;
    }
};


int main(){
	Picture* pic1 = new Line();
	Picture* pic2 = new Circle();
	Graph* i_graph = new Graph();
	i_graph->Add(pic1);
	i_graph->Add(pic2);

	i_graph->Draw();
    return 0;
}

