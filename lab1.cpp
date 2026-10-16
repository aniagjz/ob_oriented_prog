#include <iostream>
#include <string>
using namespace std;



class Protein{
    private:
        string id;
        string name;
        string sequence;
    public:
        //set
        void setId(string newId){id = newId;}
        void setName(string newName){name = newName;}
        void setSeq(string newSeq){sequence = newSeq;}
        //get
        void getId(){  return id;}
        void getName(){return name;}
        void getSeq(){return sequence;}
        //describe
        cout << "print describe:" << id << << name << << sequence << endl; 
}

class Gene {
    private:
    string id;
    string name
    string chrom;
    int start;
    int end;
    char strand;
    public:
        //set
        void setId(string newId){id = newId;}
         void setName(string newName){name = newName;}
        void setChrom(string newChrom){chrom = newChrom;}
        void setStart(int newStart){start = newStart;}
        void setEnd(int newEnd){end = newEnd;}
        void setStrand(char newStrand){strand = newSrand;}
        //get
        void getId(){return id;}
        void getName(){return name;}
        void getName(){return chrom;}
        void getStart(){return start;}
        void getEnd(){return end;}
        void getStrand(){ return strand;}
        //describe
        void describe(){cout << id<< << name << <<( << chrom<<: << start << - << end << , << strand <<) << endl;}
}
int main(){

}