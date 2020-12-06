//11-19-2020
//Dr. Tyson McMillan Class _ Tarrant County College
//Create a Football Scoreboard
//How to create class in C++

#include <iostream>
#include <string> 
//#include <unistd.h>
using namespace std;

#ifndef SCOREBOARD_H
#define SCOREBOARD_H

class Team
{
private:
	string name;
	string coachName;
	string homeCity;
	bool homeStatus;
	int score;
	int timeOutCount;
public:
	Team()
	{
		timeOutCount = 0;
		score = 0;
		homeStatus = false;
		name = "Team Name";
		coachName = "Coach Name";
		homeCity = "Home City";
	}
	void setName(string n) { name = n; }
	void setcoachName(string cn) { coachName = cn; }
	void sethomeCity(string hc) { homeCity = hc; }
	void sethomeStatus(bool hs) { homeStatus = hs; }
	void setScore(int s) { score = s; }
	void settimeOutCount(int toc) { timeOutCount = toc; }
	string getName() const { return name; }
	string getcoachName() const { return coachName; }
	string gethomeCity() const { return homeCity; }
	bool gethomeStatus() const { return homeStatus; }
	int getScore() const { return score; }
	int gettimeOutCount() const { return timeOutCount; }
};

class Scoreboard
{
private:
	int down;
	int quarter;
	int togo;
	bool poss;
	Team team1;
	Team team2;
public:
	Scoreboard()
	{
		down = 0;
		quarter = 1;
		togo = 0;
		poss = true;
	}
	void setDown(int d) { down = d; }
	void setQuarter(int qt) { quarter = qt; }
	void setTogo(int tg) { togo = tg; }
	void setPossession(bool p) { poss = p; }
	void setTeam1(Team home) { team1 = home; }
	void setTeam2(Team visitor) { team2 = visitor; }
	
	int getDown() const { return down; }
	int getQuarter() const { return quarter; }
	int getTogo() const { return togo; }
	string getPossession() const {
		if (poss == true) return "Home";
		else return "Visitor";
	}
	Team getTeam1() const { return team1; }
	Team getTeam2() const { return team2; }
	void showScoreboard()
	{
		string color = "";
		string reset = "\x1b[0m";
		color = "\x1b[96;4m";  //blue
		string number = "\x1b[93;1m"; //yellow
		string score = "\x1b[32;1m"; // green
		cout << color << "\t\t\t" << "Football Scoreboard 2020" << reset << endl;
		cout << "\t*******************************************************" << endl;
		cout << "\n\t\t(Home)" << "\t\t\t\t" << "(Visitor)" << endl;
		cout << "\n\t\t" << team1.getName() << "\t\t\t" << team2.getName() << endl;
		cout << "\n\t\t" << score << team1.getScore() << reset << "\t\t\t\t\t" << score << team2.getScore() << reset << endl;
		cout << "\t*******************************************************" << endl;
		cout << "\n\t\tQuarter: " << number << getQuarter() << reset << "\t\t" << "  Ball Possession: " << number << getPossession() << reset << endl;
		cout << "\t\tDown: " << number << getDown() << reset << "\t\t\t\t" << "To Go: " << number << getTogo() << reset << endl;
		cout << "\t\tTOC: " << number << team1.gettimeOutCount() << reset << "\t\t\t\t" << "TOL: " << number << team2.gettimeOutCount() << reset << endl;
		cout << "\n\t*******************************************************" << endl;
		cout << "\n\t\tCoach: " << team1.getcoachName() << "\t\tCoach: " << team2.getcoachName() << endl;
		cout << "\t\tCity: " << team1.gethomeCity() << "\t\t\tCity: " << team2.gethomeCity() << endl;

		if (poss == true) { cout << "Home" << endl; }
		else { cout << "Visitor" << endl; }
	}
};




void ScoreBoard()
{
	Scoreboard s;
	Team home;
	Team visitor;
	string newName = "";
	string userChoice = "";
	int newScore = 0;
	int newDown;
	int newTogo;
	int newQuarter = 1;
	int newTOC = 0;
	bool teamPoss;
	//Set the home team
	home.sethomeStatus(true);
	s.setTeam1(home);
	s.setTeam2(visitor);
	do
	{
		system("clear"); //clear the screen of previous content 
		s.showScoreboard(); //show the current scoreboard data
		//menu choices
		cout << "\n\n****************************" << endl;
		cout << "  A = Update Team Name" << endl;
		cout << "  B = Update Team Score" << endl;
		cout << "  C = Update Coach Name" << endl;
		cout << "  D = Update Home City" << endl;
		cout << "  F = Update Down" << endl;
		cout << "  G = Update Yard To Go" << endl;
		cout << "  H = Update Quarter" << endl;
		cout << "  I = Ball Possession Team" << endl;
		cout << "  J = Update Time Out Count" << endl;
		cout << "  E = Exit" << endl;
		cout << "****************************\n";
		cout << "Please enter your choice: ";
		cin >> userChoice;

		if (userChoice == "A" || userChoice == "a")
		{
			//Dr_T challenge Accept a new name for s's home team
			cout << "1 = Home Team." << endl;
			cout << "2 = Visitor Team." << endl;
			cout << "Please enter your choice: ";
			cin >> userChoice;

			if (userChoice == "1")
			{
				cout << "\nPlease enter a new name for the home team: ";
				cin >> newName;
				//change that home team's default name
				home.setName(newName);
				//set tOne's data to the new desired name
			}
			else if (userChoice == "2")
			{
				cout << "\nPlease enter a new name for the visitor team: ";
				cin >> newName;
				visitor.setName(newName);
			}
			else
				cout << "Invalid input!!!" << endl;
		}
		else if (userChoice == "B" || userChoice == "b")
		{
			cout << "1 = Home Team's Score." << endl;
			cout << "2 = Visitor Team's Score." << endl;
			cout << "Please enter your choice: ";
			cin >> userChoice;

			if (userChoice == "1")
			{
				cout << "\nPlease enter a new score for the home team: ";
				cin >> newScore;
				home.setScore(newScore);  //set the new score for home team
			}
			else if (userChoice == "2")
			{
				cout << "\nPlease enter a new score for the visitor team: ";
				cin >> newScore;
				visitor.setScore(newScore);  //set the new score for home team
			}
			else
				cout << "Invalid input!!!" << endl;

		}
		else if (userChoice == "C" || userChoice == "c")
		{
			cout << "1 = Home Team's Coach Name." << endl;
			cout << "2 = Visitor Team's Coach Name." << endl;
			cout << "Please enter your choice: ";
			cin >> userChoice;

			if (userChoice == "1")
			{
				cout << "\nPlease enter the name of the home team's coach: ";
				cin >> newName;
				home.setcoachName(newName);  //set the new coach name for home team
			}
			else if (userChoice == "2")
			{
				cout << "\nPlease enter a new score for the visitor team: ";
				cin >> newName;
				visitor.setcoachName(newName);  //set the new coach name for visitor team
			}
			else
				cout << "Invalid input!!!" << endl;
		}
		else if (userChoice == "D" || userChoice == "d")
		{
			cout << "1 =  Update for Team 1." << endl;
			cout << "2 = Update for team 2." << endl;
			cout << "Please enter your choice: ";
			cin >> userChoice;

			if (userChoice == "1")
			{
				cout << "\nPlease enter the city name: ";
				cin >> newName;
				home.sethomeCity(newName);  //set the new city name for the home team
			}
			else if (userChoice == "2")
			{
				cout << "\nPlease enter the city name: ";
				cin >> newName;
				visitor.sethomeCity(newName);  //set the new city name
			}
			else
				cout << "Invalid input!!!" << endl;
		}
		else if (userChoice == "F" || userChoice == "f")
		{
			cout << "Update for the new Down " << endl;
			cout << "Please enter the new Down: ";
			cin >> newDown;
			s.setDown(newDown);   //set the new Down
		}
		else if (userChoice == "G" || userChoice == "g")
		{
			cout << "Update for the new To Go " << endl;
			cout << "Please enter the new To Go: ";
			cin >> newTogo;
			s.setTogo(newTogo);  //set the new To go
		}
		else if (userChoice == "H" || userChoice == "h")
		{
			cout << "Update for the new Quarter " << endl;
			cout << "Please enter the new Quarter: ";
			cin >> newQuarter;
			s.setQuarter(newQuarter);  //set the new Quarter
		}
		else if (userChoice == "I" || userChoice == "i")
		{
			cout << "0. Home team has ball." << endl;
			cout << "1. Visitor team has ball" << endl;
			cout << "Please enter your choice: ";
			cin >> teamPoss;
			s.setPossession(teamPoss);
		}
		else if (userChoice == "J" || userChoice == "j")
		{
		cout << "1 = Update for Home team." << endl;
		cout << "2 = Update for Visitor Team." << endl;
		cout << "Please enter your choice: ";
		cin >> userChoice;

		if (userChoice == "1")
		{
			cout << "\nPlease enter the timeout count: ";
			cin >> newTOC;
			home.settimeOutCount(newTOC);  //set the new coach name for home team
		}
		else if (userChoice == "2")
		{
			cout << "\nPlease enter the timeout count: ";
			cin >> newTOC;
			visitor.settimeOutCount(newTOC);
		}
		else
			cout << "Invalid input!!!" << endl;
		}
		else if (userChoice == "E" || userChoice == "e")
		{
			cout << "Exit chosen." << endl;
		}
		else //invalid input: default clause
		{
			cout << "\nInvalid input." << endl;
			//sleep(2); //wait two seconds, go to the next process 
		}

		s.setTeam1(home);
		s.setTeam2(visitor);    //refresh the data in s to the new updates...

	} while (userChoice != "E" && userChoice != "e");

}
#endif
#pragma once
