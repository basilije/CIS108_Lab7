#pragma once
#include "Song.h"
using namespace std;

namespace MusicDB
{
	// declaration of functions in MusicDB.cpp
	void loadTheMusicDatabaseFromFile();
	void saveTheMusicDatabaseToFile();
	int returnTheTotalNumberOfSongs();
	void printAllSongsInformations();
	void addANewSongToTheDatabase();
	bool isThereANewSong();
	bool sort_ascending_by_title(Song left, Song right);
	void sortByTitle();
	bool sort_ascending_by_artist(Song left, Song right);
	void sortByArtist();
	bool sort_ascending_by_release_year(Song left, Song right);
	void sortByReleaseYear();
	void findSongByTitle(string);
}
