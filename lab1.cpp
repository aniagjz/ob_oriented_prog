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
        string getId(){  return id;}
        string getName(){return name;}
        string getSeq(){return sequence;}
        //describe
       void describe(){cout << "protein" << id <<" "<< name <<" "<< sequence << endl;} 
};

class Gene {
    private:
    string id;
    string name;
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
        void setStrand(char newStrand){strand = newStrand;}
        //get
        string getId(){return id;}
        string getName(){return name;}
        string getChrom(){return chrom;}
        int getStart(){return start;}
        int getEnd(){return end;}
        char getStrand(){ return strand;}
        //describe
        void describe(){cout <<"Gene"<<" "<< id<<" "<< name << "( "<< chrom<<":"<< start << "-" << end << "," << strand <<")" << endl;}
};

int main(){

    Protein p1,p2;

    p1.setId("ENSP1234");
    p1.setName("PTEN");
    p1.setSeq("MNAAATARATLL");

    p2.setId("ANIA090607");
    p2.setName("GJZ");
    p2.setSeq("MNTTAACUUA");

    p1.describe();
    p2.describe();

    Gene g1,g2;

    g1.setId("ENSG1234");
    g1.setName("BRCA1");
    g1.setChrom("chrom1");
    g1.setStart(9162639);
    g1.setEnd(43792651);
    g1.setStrand('+');

    g2.setId("BGSS7253");
    g1.setName("RALM7");
    g2.setChrom("chrom2");
    g2.setStart(835729);
    g2.setEnd(6723893);
    g2.setStrand('-');

    g1.describe();
    g2.describe();
    return 0;
}