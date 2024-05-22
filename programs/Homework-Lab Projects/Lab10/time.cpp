#include <iostream>
using namespace std;


// Class representing time with hours and minutes
class Time {
public:
    int h; // hours
    int m; // minutes
};

enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};

class Movie { 
public: 
    string title;
    Genre genre;     // only one genre per movie
    int duration;    // in minutes
};

class TimeSlot { 
public: 
    Movie movie;     // what movie
    Time startTime;  // when it starts
};

int minutesSinceMidnight(Time time);
int minutesUntil(Time earlier, Time later);
Time addMinutes(Time time0, int min);
void printTimeSlot(TimeSlot ts);
void printMovie(Movie mv);
TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie);
bool timeOverlap(TimeSlot ts1, TimeSlot ts2); 

void printMovie(Movie mv){
    string g;
    switch (mv.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    cout << mv.title << " " << g << " (" << mv.duration << " min)";
}


// Calculate the total minutes since midnight
int minutesSinceMidnight(Time time) {
    return time.h * 60 + time.m; // Convert hours to minutes and add the minutes
}

// Calculate the minutes between two times
int minutesUntil(Time earlier, Time later) {
    return minutesSinceMidnight(later) - minutesSinceMidnight(earlier); // Difference between the two times
}

Time addMinutes(Time time0, int min){
    Time time1;
    time1.h = time0.h;
    time1.m = time0.m + min;
    while (time1.m > 59) {
        time1.h++;
        time1.m = time1.m - 60;
    }
    return time1;
}

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie){
    TimeSlot newTS;
    newTS.movie = nextMovie;
    newTS.startTime = addMinutes(ts.startTime, ts.movie.duration);
    return newTS;
}

// Create a function printTimeSlot(TimeSlot ts). 
//It should make output in the following format:

//Back to the Future COMEDY (116 min) [starts at 9:15, ends by 11:11]

void printTimeSlot(TimeSlot ts){
    Time endTime;
    endTime = addMinutes(ts.startTime, ts.movie.duration);
    printMovie(ts.movie);
    cout << " [starts at " << ts.startTime.h << ":" << ts.startTime.m << ", ends by " << endTime.h << ":" << endTime.m << "]" << endl;
}

bool timeOverlap(TimeSlot ts1, TimeSlot ts2){
    Time ts1End = addMinutes(ts1.startTime, ts1.movie.duration);
    Time ts2End = addMinutes(ts2.startTime, ts2.movie.duration);

    if (minutesUntil(ts1End, ts2.startTime) > 0 
        || minutesUntil(ts2End, ts1.startTime) > 0) 
    {
        return false; // No overlap
    } else
    {
        return true; // Overlap
    }
}

int main(){
    Movie movie1 = {"Back to the Future", COMEDY, 116};
    Movie movie2 = {"Black Panther", ACTION, 134};
    
    TimeSlot morning = {movie1, {9, 15}};  
    TimeSlot daytime = {movie2, {12, 15}}; 
    TimeSlot evening = {movie2, {16, 45}};
    printTimeSlot(morning);
    printTimeSlot(daytime);
    printTimeSlot(evening);
}



