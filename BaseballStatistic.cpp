#include "Date.h"
#include <string>
#include "BaseballStatistic.h"

using namespace std;

//Mutators

void BaseballStatistic::setFirstName(string fName){
    firstName = fName;
}

void BaseballStatistic::setLastName(string lName){
    lastName = lName;
}

void BaseballStatistic::setTeamName(string tName){
    teamName = tName;
}

void BaseballStatistic::setJerseyNum(int jNum){
    jerseyNum = jNum;
}

void BaseballStatistic::setPosition(string ps){
    position = ps;
}

void BaseballStatistic::setBatting(char b){
    batting = b;
}

void BaseballStatistic::setThrowing(char t){
    throwing = t;
}

void BaseballStatistic::setAtBats(int atb){
    atBats = atb;
}

void BaseballStatistic::setBattingAverage(double ba){
    battingAverage = ba;
}

void BaseballStatistic::setHR(int homeRun){
    hr = homeRun;
}

void BaseballStatistic::setRBI(int runsBattedIn){
    rbi = runsBattedIn;
}

void BaseballStatistic::setSB(int stolenBase){
    sb = stolenBase;
}

void BaseballStatistic::setOPS(double onBasePlusSlugging){
    ops = onBasePlusSlugging;
}

void BaseballStatistic::setERA(double earnedRunAverage){
    era = earnedRunAverage;
}
