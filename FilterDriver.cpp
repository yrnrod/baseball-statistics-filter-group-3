#include <iostream>
#include <fstream>
#include <vector>
#include <iostream>
#include <iomanip>
#include <string>

#include "BaseballStatistic.h"
#include "Filter.h"
#include "StringHelper.h"
#include "Date.h"

using namespace std;

void loadFile (vector<BaseballStatistic> &);


int main(){

    string fname, lname, teamName, position;
    int jerseyNumber, atBat, homeRun, runsBattedIn, sB, year, month, day;
    char bat, thrower;
	double batAvg, opss, eraa;

    vector <BaseballStatistic> test1;
    Filter processor;

    loadFile(test1);

    for(int i = 0; i < 100; i++){
        test1[i].print();
    }

    return 0;
}

void loadFile(vector<BaseballStatistic>& playerList){
	ifstream in;
	in.open("stats.txt");
	
	string fname, lname, teamName, position;
    int jerseyNumber, atBat, homeRun, runsBattedIn, sB, year, month, day;
    char bat, thrower;
	double batAvg, opss, eraa;
	
	while (in >> teamName >> jerseyNumber >> lname >> fname >> year >> month >> day >> bat >> thrower >> atBat >> batAvg >> homeRun >> runsBattedIn >> sB >> opss >> eraa >> position){
	    BaseballStatistic temp (fname, lname, teamName, jerseyNumber, position, atBat, homeRun, runsBattedIn, bat, thrower, sB, batAvg, year, month, day, opss, eraa);
		playerList.push_back(temp);
	}
    in.close();
}